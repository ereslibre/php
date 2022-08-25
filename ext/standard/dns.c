/*
   +----------------------------------------------------------------------+
   | Copyright (c) The PHP Group                                          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | https://www.php.net/license/3_01.txt                                 |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: The typical suspects                                        |
   |          Pollita <pollita@php.net>                                   |
   |          Marcus Boerger <helly@php.net>                              |
   +----------------------------------------------------------------------+
 */

/* {{{ includes */
#include "php.h"
#include "php_network.h"

#ifdef HAVE_SYS_SOCKET_H
#include <sys/socket.h>
#endif

#ifdef PHP_WIN32
# include "win32/inet.h"
# include <winsock2.h>
# include <windows.h>
# include <Ws2tcpip.h>
#else
#include <netinet/in.h>
#ifdef HAVE_ARPA_INET_H
#include <arpa/inet.h>
#endif
#include <netdb.h>
#ifdef _OSD_POSIX
#undef STATUS
#undef T_UNSPEC
#endif
#ifdef HAVE_ARPA_NAMESER_H
#ifdef DARWIN
# define BIND_8_COMPAT 1
#endif
#include <arpa/nameser.h>
#endif
#ifdef HAVE_RESOLV_H
#include <resolv.h>
#if defined(__HAIKU__)
extern void __res_ndestroy(res_state statp);
#define res_ndestroy __res_ndestroy
#endif
#endif
#ifdef HAVE_DNS_H
#include <dns.h>
#endif
#endif

#ifndef MAXHOSTNAMELEN
#define MAXHOSTNAMELEN 255
#endif

/* For the local hostname obtained via gethostname which is different from the
   dns-related MAXHOSTNAMELEN constant above */
#ifndef HOST_NAME_MAX
#define HOST_NAME_MAX 255
#endif

#include "php_dns.h"

/* type compat */
#ifndef DNS_T_A
#define DNS_T_A		1
#endif
#ifndef DNS_T_NS
#define DNS_T_NS	2
#endif
#ifndef DNS_T_CNAME
#define DNS_T_CNAME	5
#endif
#ifndef DNS_T_SOA
#define DNS_T_SOA	6
#endif
#ifndef DNS_T_PTR
#define DNS_T_PTR	12
#endif
#ifndef DNS_T_HINFO
#define DNS_T_HINFO	13
#endif
#ifndef DNS_T_MINFO
#define DNS_T_MINFO	14
#endif
#ifndef DNS_T_MX
#define DNS_T_MX	15
#endif
#ifndef DNS_T_TXT
#define DNS_T_TXT	16
#endif
#ifndef DNS_T_AAAA
#define DNS_T_AAAA	28
#endif
#ifndef DNS_T_SRV
#define DNS_T_SRV	33
#endif
#ifndef DNS_T_NAPTR
#define DNS_T_NAPTR	35
#endif
#ifndef DNS_T_A6
#define DNS_T_A6	38
#endif
#ifndef DNS_T_CAA
#define DNS_T_CAA	257
#endif

#ifndef DNS_T_ANY
#define DNS_T_ANY	255
#endif
/* }}} */

static zend_string *php_gethostbyaddr(char *ip);
static zend_string *php_gethostbyname(char *name);

#ifdef HAVE_GETHOSTNAME
/* {{{ Get the host name of the current machine */
PHP_FUNCTION(gethostname)
{
	char buf[HOST_NAME_MAX + 1];

	ZEND_PARSE_PARAMETERS_NONE();

	if (gethostname(buf, sizeof(buf))) {
		php_error_docref(NULL, E_WARNING, "Unable to fetch host [%d]: %s", errno, strerror(errno));
		RETURN_FALSE;
	}

	RETURN_STRING(buf);
}
/* }}} */
#endif

/* TODO: Reimplement the gethostby* functions using the new winxp+ API, in dns_win32.c, then
 we can have a dns.c, dns_unix.c and dns_win32.c instead of a messy dns.c full of #ifdef
*/

/* {{{ Get the Internet host name corresponding to a given IP address */
PHP_FUNCTION(gethostbyaddr)
{
	char *addr;
	size_t addr_len;
	zend_string *hostname;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_PATH(addr, addr_len)
	ZEND_PARSE_PARAMETERS_END();

	hostname = php_gethostbyaddr(addr);

	if (hostname == NULL) {
#if defined(HAVE_IPV6) && defined(HAVE_INET_PTON)
		php_error_docref(NULL, E_WARNING, "Address is not a valid IPv4 or IPv6 address");
#else
		php_error_docref(NULL, E_WARNING, "Address is not in a.b.c.d form");
#endif
		RETVAL_FALSE;
	} else {
		RETVAL_STR(hostname);
	}
}
/* }}} */

/* {{{ php_gethostbyaddr */
static zend_string *php_gethostbyaddr(char *ip)
{
#if defined(HAVE_IPV6) && defined(HAVE_INET_PTON)
	struct sockaddr_in sa4;
	struct sockaddr_in6 sa6;
	char out[NI_MAXHOST];
	memset(&sa4, 0, sizeof(struct sockaddr_in));
	memset(&sa6, 0, sizeof(struct sockaddr_in6));

	if (inet_pton(AF_INET6, ip, &sa6.sin6_addr)) {
		sa6.sin6_family = AF_INET6;

		if (getnameinfo((struct sockaddr *)&sa6, sizeof(sa6), out, sizeof(out), NULL, 0, NI_NAMEREQD) != 0) {
			return zend_string_init(ip, strlen(ip), 0);
		}
		return zend_string_init(out, strlen(out), 0);
	} else if (inet_pton(AF_INET, ip, &sa4.sin_addr)) {
		sa4.sin_family = AF_INET;

		if (getnameinfo((struct sockaddr *)&sa4, sizeof(sa4), out, sizeof(out), NULL, 0, NI_NAMEREQD) != 0) {
			return zend_string_init(ip, strlen(ip), 0);
		}
		return zend_string_init(out, strlen(out), 0);
	}
	return NULL; /* not a valid IP */
#else
	struct in_addr addr;
	struct hostent *hp;

	addr.s_addr = inet_addr(ip);

	if (addr.s_addr == -1) {
		return NULL;
	}

	hp = gethostbyaddr((char *) &addr, sizeof(addr), AF_INET);

	if (!hp || hp->h_name == NULL || hp->h_name[0] == '\0') {
		return zend_string_init(ip, strlen(ip), 0);
	}

	return zend_string_init(hp->h_name, strlen(hp->h_name), 0);
#endif
}
/* }}} */

/* {{{ Get the IP address corresponding to a given Internet host name */
PHP_FUNCTION(gethostbyname)
{
	char *hostname;
	size_t hostname_len;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_PATH(hostname, hostname_len)
	ZEND_PARSE_PARAMETERS_END();

	if (hostname_len > MAXFQDNLEN) {
		/* name too long, protect from CVE-2015-0235 */
		php_error_docref(NULL, E_WARNING, "Host name cannot be longer than %d characters", MAXFQDNLEN);
		RETURN_STRINGL(hostname, hostname_len);
	}

	RETURN_STR(php_gethostbyname(hostname));
}
/* }}} */

/* {{{ Return a list of IP addresses that a given hostname resolves to. */
PHP_FUNCTION(gethostbynamel)
{
	char *hostname;
	size_t hostname_len;
	struct hostent *hp;
	struct in_addr in;
	int i;
#ifdef HAVE_INET_NTOP
	char addr4[INET_ADDRSTRLEN];
#endif

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_PATH(hostname, hostname_len)
	ZEND_PARSE_PARAMETERS_END();

	if (hostname_len > MAXFQDNLEN) {
		/* name too long, protect from CVE-2015-0235 */
		php_error_docref(NULL, E_WARNING, "Host name cannot be longer than %d characters", MAXFQDNLEN);
		RETURN_FALSE;
	}

	hp = php_network_gethostbyname(hostname);
	if (!hp) {
		RETURN_FALSE;
	}

	array_init(return_value);

	for (i = 0;; i++) {
		/* On macos h_addr_list entries may be misaligned. */
		struct in_addr *h_addr_entry; /* Don't call this h_addr, it's a macro! */
		memcpy(&h_addr_entry, &hp->h_addr_list[i], sizeof(struct in_addr *));
		if (!h_addr_entry) {
			return;
		}

		in = *h_addr_entry;
#ifdef HAVE_INET_NTOP
		add_next_index_string(return_value, inet_ntop(AF_INET, &in, addr4, INET_ADDRSTRLEN));
#else
		add_next_index_string(return_value, inet_ntoa(in));
#endif
	}
}
/* }}} */

/* {{{ php_gethostbyname */
static zend_string *php_gethostbyname(char *name)
{
	struct hostent *hp;
	struct in_addr *h_addr_0; /* Don't call this h_addr, it's a macro! */
	struct in_addr in;
#ifdef HAVE_INET_NTOP
	char addr4[INET_ADDRSTRLEN];
#endif
	const char *address;

	hp = php_network_gethostbyname(name);
	if (!hp) {
		return zend_string_init(name, strlen(name), 0);
	}

	/* On macos h_addr_list entries may be misaligned. */
	memcpy(&h_addr_0, &hp->h_addr_list[0], sizeof(struct in_addr *));
	if (!h_addr_0) {
		return zend_string_init(name, strlen(name), 0);
	}

	memcpy(&in.s_addr, h_addr_0, sizeof(in.s_addr));

#ifdef HAVE_INET_NTOP
	address = inet_ntop(AF_INET, &in, addr4, INET_ADDRSTRLEN);
#else
	address = inet_ntoa(in);
#endif
	return zend_string_init(address, strlen(address), 0);
}
/* }}} */

#if defined(HAVE_FULL_DNS_FUNCS) || defined(PHP_WIN32)
# define PHP_DNS_NUM_TYPES	13	/* Number of DNS Types Supported by PHP currently */

# define PHP_DNS_A      0x00000001
# define PHP_DNS_NS     0x00000002
# define PHP_DNS_CNAME  0x00000010
# define PHP_DNS_SOA    0x00000020
# define PHP_DNS_PTR    0x00000800
# define PHP_DNS_HINFO  0x00001000
# define PHP_DNS_CAA    0x00002000
# define PHP_DNS_MX     0x00004000
# define PHP_DNS_TXT    0x00008000
# define PHP_DNS_A6     0x01000000
# define PHP_DNS_SRV    0x02000000
# define PHP_DNS_NAPTR  0x04000000
# define PHP_DNS_AAAA   0x08000000
# define PHP_DNS_ANY    0x10000000
# define PHP_DNS_ALL    (PHP_DNS_A|PHP_DNS_NS|PHP_DNS_CNAME|PHP_DNS_SOA|PHP_DNS_PTR|PHP_DNS_HINFO|PHP_DNS_CAA|PHP_DNS_MX|PHP_DNS_TXT|PHP_DNS_A6|PHP_DNS_SRV|PHP_DNS_NAPTR|PHP_DNS_AAAA)
#endif /* HAVE_FULL_DNS_FUNCS || defined(PHP_WIN32) */

/* Note: These functions are defined in ext/standard/dns_win32.c for Windows! */
#if !defined(PHP_WIN32) && defined(HAVE_DNS_SEARCH_FUNC)

#ifndef HFIXEDSZ
#define HFIXEDSZ        12      /* fixed data in header <arpa/nameser.h> */
#endif /* HFIXEDSZ */

#ifndef QFIXEDSZ
#define QFIXEDSZ        4       /* fixed data in query <arpa/nameser.h> */
#endif /* QFIXEDSZ */

#undef MAXHOSTNAMELEN
#define MAXHOSTNAMELEN  1024

#ifndef MAXRESOURCERECORDS
#define MAXRESOURCERECORDS	64
#endif /* MAXRESOURCERECORDS */

typedef union {
	HEADER qb1;
	uint8_t qb2[65536];
} querybuf;

/* just a hack to free resources allocated by glibc in __res_nsend()
 * See also:
 *   res_thread_freeres() in glibc/resolv/res_init.c
 *   __libc_res_nsend()   in resolv/res_send.c
 * */

#if defined(__GLIBC__) && !defined(HAVE_DEPRECATED_DNS_FUNCS)
#define php_dns_free_res(__res__) _php_dns_free_res(__res__)
static void _php_dns_free_res(struct __res_state *res) { /* {{{ */
	int ns;
	for (ns = 0; ns < MAXNS; ns++) {
		if (res->_u._ext.nsaddrs[ns] != NULL) {
			free (res->_u._ext.nsaddrs[ns]);
			res->_u._ext.nsaddrs[ns] = NULL;
		}
	}
} /* }}} */
#else
#define php_dns_free_res(__res__)
#endif

/* {{{ Check DNS records corresponding to a given Internet host name or IP address */
PHP_FUNCTION(dns_check_record)
{
  RETURN_FALSE;
}
/* }}} */

#ifdef HAVE_FULL_DNS_FUNCS

#define CHECKCP(n) do { \
	if (cp + n > end) { \
		return NULL; \
	} \
} while (0)

/* {{{ php_parserr */
static uint8_t *php_parserr(uint8_t *cp, uint8_t *end, querybuf *answer, int type_to_fetch, int store, bool raw, zval *subarray)
{
	u_short type, class, dlen;
	u_long ttl;
	long n, i;
	u_short s;
	uint8_t *tp, *p;
	char name[MAXHOSTNAMELEN] = {0};
	int have_v6_break = 0, in_v6_break = 0;

	ZVAL_UNDEF(subarray);

	CHECKCP(10);
	GETSHORT(type, cp);
	GETSHORT(class, cp);
	GETLONG(ttl, cp);
	GETSHORT(dlen, cp);
	CHECKCP(dlen);
	if (dlen == 0) {
		/* No data in the response - nothing to do */
		return NULL;
	}
	if (type_to_fetch != DNS_T_ANY && type != type_to_fetch) {
		cp += dlen;
		return cp;
	}

	if (!store) {
		cp += dlen;
		return cp;
	}

	array_init(subarray);

	add_assoc_string(subarray, "host", name);
	add_assoc_string(subarray, "class", "IN");
	add_assoc_long(subarray, "ttl", ttl);
	(void) class;

	if (raw) {
		add_assoc_long(subarray, "type", type);
		add_assoc_stringl(subarray, "data", (char*) cp, (uint32_t) dlen);
		cp += dlen;
		return cp;
	}

	switch (type) {
		case DNS_T_A:
			CHECKCP(4);
			add_assoc_string(subarray, "type", "A");
			snprintf(name, sizeof(name), "%d.%d.%d.%d", cp[0], cp[1], cp[2], cp[3]);
			add_assoc_string(subarray, "ip", name);
			cp += dlen;
			break;
		case DNS_T_MX:
			CHECKCP(2);
			add_assoc_string(subarray, "type", "MX");
			GETSHORT(n, cp);
			add_assoc_long(subarray, "pri", n);
			ZEND_FALLTHROUGH;
		case DNS_T_CNAME:
			if (type == DNS_T_CNAME) {
				add_assoc_string(subarray, "type", "CNAME");
			}
			ZEND_FALLTHROUGH;
		case DNS_T_NS:
			if (type == DNS_T_NS) {
				add_assoc_string(subarray, "type", "NS");
			}
			ZEND_FALLTHROUGH;
		case DNS_T_PTR:
			if (type == DNS_T_PTR) {
				add_assoc_string(subarray, "type", "PTR");
			}
			add_assoc_string(subarray, "target", name);
			break;
		case DNS_T_HINFO:
			/* See RFC 1010 for values */
			add_assoc_string(subarray, "type", "HINFO");
			CHECKCP(1);
			n = *cp & 0xFF;
			cp++;
			CHECKCP(n);
			add_assoc_stringl(subarray, "cpu", (char*)cp, n);
			cp += n;
			CHECKCP(1);
			n = *cp & 0xFF;
			cp++;
			CHECKCP(n);
			add_assoc_stringl(subarray, "os", (char*)cp, n);
			cp += n;
			break;
		case DNS_T_CAA:
			/* See RFC 6844 for values https://tools.ietf.org/html/rfc6844 */
			add_assoc_string(subarray, "type", "CAA");
			// 1 flag byte
			CHECKCP(1);
			n = *cp & 0xFF;
			add_assoc_long(subarray, "flags", n);
			cp++;
			// Tag length (1 byte)
			CHECKCP(1);
			n = *cp & 0xFF;
			cp++;
			CHECKCP(n);
			add_assoc_stringl(subarray, "tag", (char*)cp, n);
			cp += n;
			if ( (size_t) dlen < ((size_t)n) + 2 ) {
				return NULL;
			}
			n = dlen - n - 2;
			CHECKCP(n);
			add_assoc_stringl(subarray, "value", (char*)cp, n);
			cp += n;
			break;
		case DNS_T_TXT:
			{
				int l1 = 0, l2 = 0;
				zval entries;
				zend_string *tp;

				add_assoc_string(subarray, "type", "TXT");
				tp = zend_string_alloc(dlen, 0);

				array_init(&entries);

				while (l1 < dlen) {
					n = cp[l1];
					if ((l1 + n) >= dlen) {
						// Invalid chunk length, truncate
						n = dlen - (l1 + 1);
					}
					if (n) {
						memcpy(ZSTR_VAL(tp) + l2 , cp + l1 + 1, n);
						add_next_index_stringl(&entries, (char *) cp + l1 + 1, n);
					}
					l1 = l1 + n + 1;
					l2 = l2 + n;
				}
				ZSTR_VAL(tp)[l2] = '\0';
				ZSTR_LEN(tp) = l2;
				cp += dlen;

				add_assoc_str(subarray, "txt", tp);
				add_assoc_zval(subarray, "entries", &entries);
			}
			break;
		case DNS_T_SOA:
			add_assoc_string(subarray, "type", "SOA");
      return NULL;
			break;
		case DNS_T_AAAA:
			tp = (uint8_t*)name;
			CHECKCP(8*2);
			for(i=0; i < 8; i++) {
				GETSHORT(s, cp);
				if (s != 0) {
					if (tp > (uint8_t *)name) {
						in_v6_break = 0;
						tp[0] = ':';
						tp++;
					}
					tp += sprintf((char*)tp,"%x",s);
				} else {
					if (!have_v6_break) {
						have_v6_break = 1;
						in_v6_break = 1;
						tp[0] = ':';
						tp++;
					} else if (!in_v6_break) {
						tp[0] = ':';
						tp++;
						tp[0] = '0';
						tp++;
					}
				}
			}
			if (have_v6_break && in_v6_break) {
				tp[0] = ':';
				tp++;
			}
			tp[0] = '\0';
			add_assoc_string(subarray, "type", "AAAA");
			add_assoc_string(subarray, "ipv6", name);
			break;
		case DNS_T_A6:
			p = cp;
			add_assoc_string(subarray, "type", "A6");
			CHECKCP(1);
			n = ((int)cp[0]) & 0xFF;
			cp++;
			add_assoc_long(subarray, "masklen", n);
			tp = (uint8_t*)name;
			if (n > 15) {
				have_v6_break = 1;
				in_v6_break = 1;
				tp[0] = ':';
				tp++;
			}
			if (n % 16 > 8) {
				/* Partial short */
				if (cp[0] != 0) {
					if (tp > (uint8_t *)name) {
						in_v6_break = 0;
						tp[0] = ':';
						tp++;
					}
					sprintf((char*)tp, "%x", cp[0] & 0xFF);
				} else {
					if (!have_v6_break) {
						have_v6_break = 1;
						in_v6_break = 1;
						tp[0] = ':';
						tp++;
					} else if (!in_v6_break) {
						tp[0] = ':';
						tp++;
						tp[0] = '0';
						tp++;
					}
				}
				cp++;
			}
			for (i = (n + 8) / 16; i < 8; i++) {
				CHECKCP(2);
				GETSHORT(s, cp);
				if (s != 0) {
					if (tp > (uint8_t *)name) {
						in_v6_break = 0;
						tp[0] = ':';
						tp++;
					}
					tp += sprintf((char*)tp,"%x",s);
				} else {
					if (!have_v6_break) {
						have_v6_break = 1;
						in_v6_break = 1;
						tp[0] = ':';
						tp++;
					} else if (!in_v6_break) {
						tp[0] = ':';
						tp++;
						tp[0] = '0';
						tp++;
					}
				}
			}
			if (have_v6_break && in_v6_break) {
				tp[0] = ':';
				tp++;
			}
			tp[0] = '\0';
			add_assoc_string(subarray, "ipv6", name);
			if (cp < p + dlen) {
        return NULL;
			}
			break;
		case DNS_T_SRV:
			CHECKCP(3*2);
			add_assoc_string(subarray, "type", "SRV");
			GETSHORT(n, cp);
			add_assoc_long(subarray, "pri", n);
			GETSHORT(n, cp);
			add_assoc_long(subarray, "weight", n);
			GETSHORT(n, cp);
			add_assoc_long(subarray, "port", n);
      return NULL;
			break;
		case DNS_T_NAPTR:
			CHECKCP(2*2);
			add_assoc_string(subarray, "type", "NAPTR");
			GETSHORT(n, cp);
			add_assoc_long(subarray, "order", n);
			GETSHORT(n, cp);
			add_assoc_long(subarray, "pref", n);

			CHECKCP(1);
			n = (cp[0] & 0xFF);
			cp++;
			CHECKCP(n);
			add_assoc_stringl(subarray, "flags", (char*)cp, n);
			cp += n;

			CHECKCP(1);
			n = (cp[0] & 0xFF);
			cp++;
			CHECKCP(n);
			add_assoc_stringl(subarray, "services", (char*)cp, n);
			cp += n;

			CHECKCP(1);
			n = (cp[0] & 0xFF);
			cp++;
			CHECKCP(n);
			add_assoc_stringl(subarray, "regex", (char*)cp, n);
			cp += n;

      return NULL;
			break;
		default:
			zval_ptr_dtor(subarray);
			ZVAL_UNDEF(subarray);
			cp += dlen;
			break;
	}

	return cp;
}
/* }}} */

/* {{{ Get any Resource Record corresponding to a given Internet host name */
PHP_FUNCTION(dns_get_record)
{
  RETURN_FALSE;
}
/* }}} */

/* {{{ Get MX records corresponding to a given Internet host name */
PHP_FUNCTION(dns_get_mx)
{
  RETURN_FALSE;
}
/* }}} */
#endif /* HAVE_FULL_DNS_FUNCS */
#endif /* !defined(PHP_WIN32) && HAVE_DNS_SEARCH_FUNC */

#if defined(HAVE_FULL_DNS_FUNCS) && !defined(PHP_WIN32)
PHP_MINIT_FUNCTION(dns) {
	REGISTER_LONG_CONSTANT("DNS_A",     PHP_DNS_A,     CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_NS",    PHP_DNS_NS,    CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_CNAME", PHP_DNS_CNAME, CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_SOA",   PHP_DNS_SOA,   CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_PTR",   PHP_DNS_PTR,   CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_HINFO", PHP_DNS_HINFO, CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_CAA",   PHP_DNS_CAA,   CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_MX",    PHP_DNS_MX,    CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_TXT",   PHP_DNS_TXT,   CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_SRV",   PHP_DNS_SRV,   CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_NAPTR", PHP_DNS_NAPTR, CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_AAAA",  PHP_DNS_AAAA,  CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_A6",    PHP_DNS_A6,    CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_ANY",   PHP_DNS_ANY,   CONST_CS | CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_ALL",   PHP_DNS_ALL,   CONST_CS | CONST_PERSISTENT);
	return SUCCESS;
}
#endif /* HAVE_FULL_DNS_FUNCS */
