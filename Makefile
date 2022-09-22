srcdir = /root/php-src
builddir = /root/php-src
top_srcdir = /root/php-src
top_builddir = /root/php-src
EGREP = /usr/bin/grep -E
SED = /usr/bin/sed
CONFIGURE_COMMAND = './configure' '--host=wasm32-wasi' 'host_alias=wasm32-musl-wasi' '--disable-libxml' '--disable-dom' '--without-iconv' '--without-openssl' '--disable-simplexml' '--disable-xml' '--disable-xmlreader' '--disable-xmlwriter' '--without-pear' '--disable-phar' '--disable-opcache' '--disable-zend-signals' '--without-pcre-jit' '--with-sqlite3' '--enable-pdo' '--with-pdo-sqlite' '--target=wasm32-wasi' 'target_alias=wasm32-musl-wasi'
CONFIGURE_OPTIONS = '--host=wasm32-wasi' 'host_alias=wasm32-musl-wasi' '--disable-libxml' '--disable-dom' '--without-iconv' '--without-openssl' '--disable-simplexml' '--disable-xml' '--disable-xmlreader' '--disable-xmlwriter' '--without-pear' '--disable-phar' '--disable-opcache' '--disable-zend-signals' '--without-pcre-jit' '--with-sqlite3' '--enable-pdo' '--with-pdo-sqlite' '--target=wasm32-wasi' 'target_alias=wasm32-musl-wasi'
PHP_MAJOR_VERSION = 7
PHP_MINOR_VERSION = 3
PHP_RELEASE_VERSION = 33
PHP_EXTRA_VERSION =
AWK = nawk
YACC = bison -y
RE2C = re2c
RE2C_FLAGS =
SHLIB_SUFFIX_NAME = so
SHLIB_DL_SUFFIX_NAME = so
PHP_CLI_OBJS = sapi/cli/php_cli.lo sapi/cli/php_http_parser.lo sapi/cli/php_cli_server.lo sapi/cli/ps_title.lo sapi/cli/php_cli_process_title.lo
PHP_EXECUTABLE = $(top_builddir)/$(SAPI_CLI_PATH)
SAPI_CLI_PATH = sapi/cli/php
BUILD_CLI = $(LIBTOOL) --mode=link $(CC) -lwasi-emulated-mman -lwasi-emulated-signal -lwasi-emulated-process-clocks -lwasi-emulated-getpid -export-dynamic $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(EXTRA_LDFLAGS_PROGRAM) $(LDFLAGS) $(PHP_RPATHS) $(PHP_GLOBAL_OBJS) $(PHP_BINARY_OBJS) $(PHP_CLI_OBJS) $(EXTRA_LIBS) $(ZEND_EXTRA_LIBS) -o $(SAPI_CLI_PATH)
PHP_PHPDBG_CFLAGS = -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1
PHP_PHPDBG_FILES = phpdbg.c phpdbg_parser.c phpdbg_lexer.c phpdbg_prompt.c phpdbg_help.c phpdbg_break.c phpdbg_print.c phpdbg_bp.c phpdbg_opcode.c phpdbg_list.c phpdbg_utils.c phpdbg_info.c phpdbg_cmd.c phpdbg_set.c phpdbg_frame.c phpdbg_watch.c phpdbg_btree.c phpdbg_sigsafe.c phpdbg_wait.c phpdbg_io.c phpdbg_eol.c phpdbg_out.c
PHPDBG_EXTRA_LIBS =
PHP_PHPDBG_OBJS = sapi/phpdbg/phpdbg.lo sapi/phpdbg/phpdbg_parser.lo sapi/phpdbg/phpdbg_lexer.lo sapi/phpdbg/phpdbg_prompt.lo sapi/phpdbg/phpdbg_help.lo sapi/phpdbg/phpdbg_break.lo sapi/phpdbg/phpdbg_print.lo sapi/phpdbg/phpdbg_bp.lo sapi/phpdbg/phpdbg_opcode.lo sapi/phpdbg/phpdbg_list.lo sapi/phpdbg/phpdbg_utils.lo sapi/phpdbg/phpdbg_info.lo sapi/phpdbg/phpdbg_cmd.lo sapi/phpdbg/phpdbg_set.lo sapi/phpdbg/phpdbg_frame.lo sapi/phpdbg/phpdbg_watch.lo sapi/phpdbg/phpdbg_btree.lo sapi/phpdbg/phpdbg_sigsafe.lo sapi/phpdbg/phpdbg_wait.lo sapi/phpdbg/phpdbg_io.lo sapi/phpdbg/phpdbg_eol.lo sapi/phpdbg/phpdbg_out.lo
BUILD_BINARY = sapi/phpdbg/phpdbg
BUILD_SHARED = sapi/phpdbg/libphpdbg.la
BUILD_PHPDBG = $(LIBTOOL) --mode=link $(CC) -lwasi-emulated-mman -lwasi-emulated-signal -lwasi-emulated-process-clocks -lwasi-emulated-getpid -export-dynamic $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(EXTRA_LDFLAGS_PROGRAM) $(LDFLAGS) $(PHP_RPATHS) $(PHP_GLOBAL_OBJS) $(PHP_BINARY_OBJS) $(PHP_PHPDBG_OBJS) $(EXTRA_LIBS) $(PHPDBG_EXTRA_LIBS) $(ZEND_EXTRA_LIBS) $(PHP_FRAMEWORKS) -o $(BUILD_BINARY)
BUILD_PHPDBG_SHARED = $(LIBTOOL) --mode=link $(CC) -lwasi-emulated-mman -lwasi-emulated-signal -lwasi-emulated-process-clocks -lwasi-emulated-getpid -shared -Wl,-soname,libphpdbg.so -export-dynamic $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(EXTRA_LDFLAGS_PROGRAM) $(LDFLAGS) $(PHP_RPATHS) $(PHP_GLOBAL_OBJS) $(PHP_BINARY_OBJS) $(PHP_PHPDBG_OBJS) $(EXTRA_LIBS) $(PHPDBG_EXTRA_LIBS) $(ZEND_EXTRA_LIBS) \-DPHPDBG_SHARED -o $(BUILD_SHARED)
PHP_CGI_OBJS = sapi/cgi/cgi_main.lo
SAPI_CGI_PATH = sapi/cgi/php-cgi
BUILD_CGI = $(LIBTOOL) --mode=link $(CC) -lwasi-emulated-mman -lwasi-emulated-signal -lwasi-emulated-process-clocks -lwasi-emulated-getpid -export-dynamic $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(EXTRA_LDFLAGS_PROGRAM) $(LDFLAGS) $(PHP_RPATHS) $(PHP_GLOBAL_OBJS) $(PHP_BINARY_OBJS) $(PHP_FASTCGI_OBJS) $(PHP_CGI_OBJS) $(EXTRA_LIBS) $(ZEND_EXTRA_LIBS) -o $(SAPI_CGI_PATH)
PROG_SENDMAIL = /usr/sbin/sendmail
SQLITE3_SHARED_LIBADD =
FILTER_SHARED_LIBADD =
JSON_SHARED_LIBADD =
PDO_SQLITE_SHARED_LIBADD =
SESSION_SHARED_LIBADD =
PHP_INSTALLED_SAPIS = cli phpdbg cgi
PHP_EXECUTABLE = $(top_builddir)/$(SAPI_CLI_PATH)
PHP_FASTCGI_OBJS = main/fastcgi.lo
PHP_SAPI_OBJS = main/internal_functions.lo
PHP_BINARY_OBJS = main/internal_functions_cli.lo
PHP_GLOBAL_OBJS = ext/date/php_date.lo ext/date/lib/astro.lo ext/date/lib/dow.lo ext/date/lib/parse_date.lo ext/date/lib/parse_tz.lo ext/date/lib/timelib.lo ext/date/lib/tm2unixtime.lo ext/date/lib/unixtime2tm.lo ext/date/lib/parse_iso_intervals.lo ext/date/lib/interval.lo ext/pcre/pcre2lib/pcre2_auto_possess.lo ext/pcre/pcre2lib/pcre2_chartables.lo ext/pcre/pcre2lib/pcre2_compile.lo ext/pcre/pcre2lib/pcre2_config.lo ext/pcre/pcre2lib/pcre2_context.lo ext/pcre/pcre2lib/pcre2_dfa_match.lo ext/pcre/pcre2lib/pcre2_error.lo ext/pcre/pcre2lib/pcre2_jit_compile.lo ext/pcre/pcre2lib/pcre2_maketables.lo ext/pcre/pcre2lib/pcre2_match.lo ext/pcre/pcre2lib/pcre2_match_data.lo ext/pcre/pcre2lib/pcre2_newline.lo ext/pcre/pcre2lib/pcre2_ord2utf.lo ext/pcre/pcre2lib/pcre2_pattern_info.lo ext/pcre/pcre2lib/pcre2_serialize.lo ext/pcre/pcre2lib/pcre2_string_utils.lo ext/pcre/pcre2lib/pcre2_study.lo ext/pcre/pcre2lib/pcre2_substitute.lo ext/pcre/pcre2lib/pcre2_substring.lo ext/pcre/pcre2lib/pcre2_tables.lo ext/pcre/pcre2lib/pcre2_ucd.lo ext/pcre/pcre2lib/pcre2_valid_utf.lo ext/pcre/pcre2lib/pcre2_xclass.lo ext/pcre/pcre2lib/pcre2_find_bracket.lo ext/pcre/pcre2lib/pcre2_convert.lo ext/pcre/pcre2lib/pcre2_extuni.lo ext/pcre/php_pcre.lo ext/sqlite3/sqlite3.lo ext/sqlite3/libsqlite/sqlite3.lo ext/ctype/ctype.lo ext/fileinfo/fileinfo.lo ext/fileinfo/libmagic/apprentice.lo ext/fileinfo/libmagic/apptype.lo ext/fileinfo/libmagic/ascmagic.lo ext/fileinfo/libmagic/cdf.lo ext/fileinfo/libmagic/cdf_time.lo ext/fileinfo/libmagic/compress.lo ext/fileinfo/libmagic/encoding.lo ext/fileinfo/libmagic/fsmagic.lo ext/fileinfo/libmagic/funcs.lo ext/fileinfo/libmagic/is_tar.lo ext/fileinfo/libmagic/magic.lo ext/fileinfo/libmagic/print.lo ext/fileinfo/libmagic/readcdf.lo ext/fileinfo/libmagic/softmagic.lo ext/fileinfo/libmagic/der.lo ext/fileinfo/libmagic/buffer.lo ext/filter/filter.lo ext/filter/sanitizing_filters.lo ext/filter/logical_filters.lo ext/filter/callback_filter.lo ext/hash/hash.lo ext/hash/hash_md.lo ext/hash/hash_sha.lo ext/hash/hash_ripemd.lo ext/hash/hash_haval.lo ext/hash/hash_tiger.lo ext/hash/hash_gost.lo ext/hash/hash_snefru.lo ext/hash/hash_whirlpool.lo ext/hash/hash_adler32.lo ext/hash/hash_crc32.lo ext/hash/hash_fnv.lo ext/hash/hash_joaat.lo ext/hash/sha3/generic32lc/KeccakP-1600-inplace32BI.lo ext/hash/sha3/generic32lc/KeccakHash.lo ext/hash/sha3/generic32lc/KeccakSponge.lo ext/hash/hash_sha3.lo ext/json/json.lo ext/json/json_encoder.lo ext/json/json_parser.lo ext/json/json_scanner.lo ext/pdo/pdo.lo ext/pdo/pdo_dbh.lo ext/pdo/pdo_stmt.lo ext/pdo/pdo_sql_parser.lo ext/pdo/pdo_sqlstate.lo ext/pdo_sqlite/pdo_sqlite.lo ext/pdo_sqlite/sqlite_driver.lo ext/pdo_sqlite/sqlite_statement.lo ext/posix/posix.lo ext/reflection/php_reflection.lo ext/session/mod_user_class.lo ext/session/session.lo ext/session/mod_files.lo ext/session/mod_mm.lo ext/session/mod_user.lo ext/spl/php_spl.lo ext/spl/spl_functions.lo ext/spl/spl_engine.lo ext/spl/spl_iterators.lo ext/spl/spl_array.lo ext/spl/spl_directory.lo ext/spl/spl_exceptions.lo ext/spl/spl_observer.lo ext/spl/spl_dllist.lo ext/spl/spl_heap.lo ext/spl/spl_fixedarray.lo ext/standard/crypt_freesec.lo ext/standard/crypt_blowfish.lo ext/standard/crypt_sha512.lo ext/standard/crypt_sha256.lo ext/standard/php_crypt_r.lo ext/standard/array.lo ext/standard/base64.lo ext/standard/basic_functions.lo ext/standard/browscap.lo ext/standard/crc32.lo ext/standard/crypt.lo ext/standard/cyr_convert.lo ext/standard/datetime.lo ext/standard/dir.lo ext/standard/dl.lo ext/standard/dns.lo ext/standard/exec.lo ext/standard/file.lo ext/standard/filestat.lo ext/standard/flock_compat.lo ext/standard/formatted_print.lo ext/standard/fsock.lo ext/standard/head.lo ext/standard/html.lo ext/standard/image.lo ext/standard/info.lo ext/standard/iptc.lo ext/standard/lcg.lo ext/standard/link.lo ext/standard/mail.lo ext/standard/math.lo ext/standard/md5.lo ext/standard/metaphone.lo ext/standard/microtime.lo ext/standard/pack.lo ext/standard/pageinfo.lo ext/standard/quot_print.lo ext/standard/rand.lo ext/standard/mt_rand.lo ext/standard/soundex.lo ext/standard/string.lo ext/standard/scanf.lo ext/standard/syslog.lo ext/standard/type.lo ext/standard/uniqid.lo ext/standard/url.lo ext/standard/var.lo ext/standard/versioning.lo ext/standard/assert.lo ext/standard/strnatcmp.lo ext/standard/levenshtein.lo ext/standard/incomplete_class.lo ext/standard/url_scanner_ex.lo ext/standard/ftp_fopen_wrapper.lo ext/standard/http_fopen_wrapper.lo ext/standard/php_fopen_wrapper.lo ext/standard/credits.lo ext/standard/css.lo ext/standard/var_unserializer.lo ext/standard/ftok.lo ext/standard/sha1.lo ext/standard/user_filters.lo ext/standard/uuencode.lo ext/standard/filters.lo ext/standard/proc_open.lo ext/standard/streamsfuncs.lo ext/standard/http.lo ext/standard/password.lo ext/standard/random.lo ext/standard/net.lo ext/standard/hrtime.lo ext/tokenizer/tokenizer.lo ext/tokenizer/tokenizer_data.lo TSRM/TSRM.lo TSRM/tsrm_strtok_r.lo main/main.lo main/snprintf.lo main/spprintf.lo main/php_sprintf.lo main/fopen_wrappers.lo main/alloca.lo main/php_scandir.lo main/php_ini.lo main/SAPI.lo main/rfc1867.lo main/php_content_types.lo main/strlcpy.lo main/strlcat.lo main/explicit_bzero.lo main/mergesort.lo main/reentrancy.lo main/php_variables.lo main/php_ticks.lo main/network.lo main/php_open_temporary_file.lo main/output.lo main/getopt.lo main/php_syslog.lo main/streams/streams.lo main/streams/cast.lo main/streams/memory.lo main/streams/filter.lo main/streams/plain_wrapper.lo main/streams/userspace.lo main/streams/transports.lo main/streams/xp_socket.lo main/streams/mmap.lo main/streams/glob_wrapper.lo Zend/zend_language_parser.lo Zend/zend_language_scanner.lo Zend/zend_ini_parser.lo Zend/zend_ini_scanner.lo Zend/zend_alloc.lo Zend/zend_compile.lo Zend/zend_constants.lo Zend/zend_dtrace.lo Zend/zend_execute_API.lo Zend/zend_highlight.lo Zend/zend_llist.lo Zend/zend_vm_opcodes.lo Zend/zend_opcode.lo Zend/zend_operators.lo Zend/zend_ptr_stack.lo Zend/zend_stack.lo Zend/zend_variables.lo Zend/zend.lo Zend/zend_API.lo Zend/zend_extensions.lo Zend/zend_hash.lo Zend/zend_list.lo Zend/zend_builtin_functions.lo Zend/zend_sprintf.lo Zend/zend_ini.lo Zend/zend_sort.lo Zend/zend_multibyte.lo Zend/zend_ts_hash.lo Zend/zend_stream.lo Zend/zend_iterators.lo Zend/zend_interfaces.lo Zend/zend_exceptions.lo Zend/zend_strtod.lo Zend/zend_gc.lo Zend/zend_closures.lo Zend/zend_float.lo Zend/zend_string.lo Zend/zend_signal.lo Zend/zend_generators.lo Zend/zend_virtual_cwd.lo Zend/zend_ast.lo Zend/zend_objects.lo Zend/zend_object_handlers.lo Zend/zend_objects_API.lo Zend/zend_default_classes.lo Zend/zend_inheritance.lo Zend/zend_smart_str.lo Zend/zend_cpuinfo.lo Zend/zend_execute.lo
PHP_BINARIES = cli phpdbg cgi
PHP_MODULES =
PHP_ZEND_EX =
EXT_LIBS =
abs_builddir = /root/php-src
abs_srcdir = /root/php-src
php_abs_top_builddir = /root/php-src
php_abs_top_srcdir = /root/php-src
bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
exec_prefix = ${prefix}
program_prefix = wasm32-musl-wasi-
program_suffix =
includedir = ${prefix}/include
libdir = ${exec_prefix}/lib/php
mandir = ${datarootdir}/man
phplibdir = /root/php-src/modules
phptempdir = /root/php-src/libs
prefix = /usr/local
localstatedir = ${prefix}/var
datadir = ${datarootdir}/php
datarootdir = /usr/local/php
sysconfdir = ${prefix}/etc
EXEEXT =
CC = /php/wasi-sdk-16.0/bin/clang --sysroot=/php/wasi-sysroot -D_WASI_EMULATED_MMAN=1 -D_WASI_EMULATED_SIGNAL=1 -D_WASI_EMULATED_PROCESS_CLOCKS=1 -D_WASI_EMULATED_GETPID=1 -D_POSIX_SOURCE=1 -D_GNU_SOURCE=1 -DHAVE_FORK=0 -DSQLITE_OMIT_LOAD_EXTENSION=1 -DSQLITE_OMIT_WAL=1 -DSQLITE_OMIT_EXPLAIN=1 -DSQLITE_OMIT_VIRTUAL_TABLE=1 -DSQLITE_OMIT_SHARED_CACHE=1 -DSQLITE_OMIT_TRACE=1 -DSQLITE_OMIT_FOREIGN_KEY=1 -DSQLITE_OMIT_DEPRECATED=1 -DSQLITE_OMIT_UTF16=1
CFLAGS = $(CFLAGS_CLEAN) -prefer-non-pic -static
CFLAGS_CLEAN = -g -O2 -fvisibility=hidden $(PROF_FLAGS)
CPP = /php/wasi-sdk-16.0/bin/clang --sysroot=/php/wasi-sysroot -E
CPPFLAGS =
CXX =
CXXFLAGS = -prefer-non-pic -static $(PROF_FLAGS)
CXXFLAGS_CLEAN =
DEBUG_CFLAGS =
EXTENSION_DIR = /usr/local/lib/php/extensions/no-debug-non-zts-20180731
EXTRA_LDFLAGS =
EXTRA_LDFLAGS_PROGRAM =
EXTRA_LIBS = -lrt -lm
ZEND_EXTRA_LIBS =
INCLUDES = -I/root/php-src/ext/date/lib -I/root/php-src/ext/sqlite3/libsqlite -I$(top_builddir)/TSRM -I$(top_builddir)/Zend
EXTRA_INCLUDES =
INCLUDE_PATH = .:
INSTALL_IT =
LFLAGS =
LIBTOOL = $(SHELL) $(top_builddir)/libtool --silent --preserve-dup-deps
LN_S = ln -s
NATIVE_RPATHS =
PEAR_INSTALLDIR =
PHP_BUILD_DATE = 2022-09-18
PHP_LDFLAGS =
PHP_LIBS =
OVERALL_TARGET =
PHP_RPATHS =
PHP_SAPI = none
PHP_VERSION = 7.3.33
PHP_VERSION_ID = 70333
SHELL = /bin/bash
SHARED_LIBTOOL = $(LIBTOOL)
WARNING_LEVEL =
PHP_FRAMEWORKS =
PHP_FRAMEWORKPATH =
INSTALL_HEADERS = sapi/cli/cli.h ext/date/php_date.h ext/date/lib/timelib.h ext/date/lib/timelib_config.h ext/pcre/php_pcre.h ext/pcre/pcre2lib/ ext/sqlite3/libsqlite/sqlite3.h ext/filter/php_filter.h ext/hash/php_hash.h ext/hash/php_hash_md.h ext/hash/php_hash_sha.h ext/hash/php_hash_ripemd.h ext/hash/php_hash_haval.h ext/hash/php_hash_tiger.h ext/hash/php_hash_gost.h ext/hash/php_hash_snefru.h ext/hash/php_hash_whirlpool.h ext/hash/php_hash_adler32.h ext/hash/php_hash_crc32.h ext/hash/php_hash_fnv.h ext/hash/php_hash_joaat.h ext/hash/php_hash_sha3.h ext/json/php_json.h ext/json/php_json_parser.h ext/json/php_json_scanner.h ext/pdo/php_pdo.h ext/pdo/php_pdo_driver.h ext/pdo/php_pdo_error.h ext/session/php_session.h ext/session/mod_files.h ext/session/mod_user.h ext/spl/php_spl.h ext/spl/spl_array.h ext/spl/spl_directory.h ext/spl/spl_engine.h ext/spl/spl_exceptions.h ext/spl/spl_functions.h ext/spl/spl_iterators.h ext/spl/spl_observer.h ext/spl/spl_dllist.h ext/spl/spl_heap.h ext/spl/spl_fixedarray.h ext/standard/ Zend/ TSRM/ include/ main/ main/streams/
ZEND_EXT_TYPE = zend_extension
all_targets = $(OVERALL_TARGET) $(PHP_MODULES) $(PHP_ZEND_EX) $(PHP_BINARIES)
install_targets = install-binaries install-build install-headers install-programs
install_binary_targets = install-cli install-phpdbg install-cgi
mkinstalldirs = $(top_srcdir)/build/shtool mkdir -p
INSTALL = $(top_srcdir)/build/shtool install -c
INSTALL_DATA = $(INSTALL) -m 644

DEFS = -DPHP_ATOM_INC -I$(top_builddir)/include -I$(top_builddir)/main -I$(top_srcdir)
COMMON_FLAGS = $(DEFS) $(INCLUDES) $(EXTRA_INCLUDES) $(CPPFLAGS) $(PHP_FRAMEWORKPATH)

all: $(all_targets)
	@echo
	@echo "Build complete."
	@echo "Don't forget to run 'make test'."
	@echo

build-modules: $(PHP_MODULES) $(PHP_ZEND_EX)

build-binaries: $(PHP_BINARIES)

libphp$(PHP_MAJOR_VERSION).la: $(PHP_GLOBAL_OBJS) $(PHP_SAPI_OBJS)
	$(LIBTOOL) --mode=link $(CC) -lwasi-emulated-mman -lwasi-emulated-signal -lwasi-emulated-process-clocks -lwasi-emulated-getpid $(CFLAGS) $(EXTRA_CFLAGS) -rpath $(phptempdir) $(EXTRA_LDFLAGS) $(LDFLAGS) $(PHP_RPATHS) $(PHP_GLOBAL_OBJS) $(PHP_SAPI_OBJS) $(EXTRA_LIBS) $(ZEND_EXTRA_LIBS) -o $@
	-@$(LIBTOOL) --silent --mode=install cp $@ $(phptempdir)/$@ >/dev/null 2>&1

libs/libphp$(PHP_MAJOR_VERSION).bundle: $(PHP_GLOBAL_OBJS) $(PHP_SAPI_OBJS)
	$(CC) $(MH_BUNDLE_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(LDFLAGS) $(EXTRA_LDFLAGS) $(PHP_GLOBAL_OBJS:.lo=.o) $(PHP_SAPI_OBJS:.lo=.o) $(PHP_FRAMEWORKS) $(EXTRA_LIBS) $(ZEND_EXTRA_LIBS) -o $@ && cp $@ libs/libphp$(PHP_MAJOR_VERSION).so

install: $(all_targets) $(install_targets)

install-sapi: $(OVERALL_TARGET)
	@echo "Installing PHP SAPI module:       $(PHP_SAPI)"
	-@$(mkinstalldirs) $(INSTALL_ROOT)$(bindir)
	-@if test ! -r $(phptempdir)/libphp$(PHP_MAJOR_VERSION).$(SHLIB_DL_SUFFIX_NAME); then \
		for i in 0.0.0 0.0 0; do \
			if test -r $(phptempdir)/libphp$(PHP_MAJOR_VERSION).$(SHLIB_DL_SUFFIX_NAME).$$i; then \
				$(LN_S) $(phptempdir)/libphp$(PHP_MAJOR_VERSION).$(SHLIB_DL_SUFFIX_NAME).$$i $(phptempdir)/libphp$(PHP_MAJOR_VERSION).$(SHLIB_DL_SUFFIX_NAME); \
				break; \
			fi; \
		done; \
	fi
	@$(INSTALL_IT)

install-binaries: build-binaries $(install_binary_targets)

install-modules: build-modules
	@test -d modules && \
	$(mkinstalldirs) $(INSTALL_ROOT)$(EXTENSION_DIR)
	@echo "Installing shared extensions:     $(INSTALL_ROOT)$(EXTENSION_DIR)/"
	@rm -f modules/*.la >/dev/null 2>&1
	@$(INSTALL) modules/* $(INSTALL_ROOT)$(EXTENSION_DIR)

install-headers:
	-@if test "$(INSTALL_HEADERS)"; then \
		for i in `echo $(INSTALL_HEADERS)`; do \
			i=`$(top_srcdir)/build/shtool path -d $$i`; \
			paths="$$paths $(INSTALL_ROOT)$(phpincludedir)/$$i"; \
		done; \
		$(mkinstalldirs) $$paths && \
		echo "Installing header files:          $(INSTALL_ROOT)$(phpincludedir)/" && \
		for i in `echo $(INSTALL_HEADERS)`; do \
			if test "$(PHP_PECL_EXTENSION)"; then \
				src=`echo $$i | $(SED) -e "s#ext/$(PHP_PECL_EXTENSION)/##g"`; \
			else \
				src=$$i; \
			fi; \
			if test -f "$(top_srcdir)/$$src"; then \
				$(INSTALL_DATA) $(top_srcdir)/$$src $(INSTALL_ROOT)$(phpincludedir)/$$i; \
			elif test -f "$(top_builddir)/$$src"; then \
				$(INSTALL_DATA) $(top_builddir)/$$src $(INSTALL_ROOT)$(phpincludedir)/$$i; \
			else \
				(cd $(top_srcdir)/$$src && $(INSTALL_DATA) *.h $(INSTALL_ROOT)$(phpincludedir)/$$i; \
				cd $(top_builddir)/$$src && $(INSTALL_DATA) *.h $(INSTALL_ROOT)$(phpincludedir)/$$i) 2>/dev/null || true; \
			fi \
		done; \
	fi

PHP_TEST_SETTINGS = -d 'open_basedir=' -d 'output_buffering=0' -d 'memory_limit=-1'
PHP_TEST_SHARED_EXTENSIONS =  ` \
	if test "x$(PHP_MODULES)" != "x"; then \
		for i in $(PHP_MODULES)""; do \
			. $$i; $(top_srcdir)/build/shtool echo -n -- " -d extension=$$dlname"; \
		done; \
	fi; \
	if test "x$(PHP_ZEND_EX)" != "x"; then \
		for i in $(PHP_ZEND_EX)""; do \
			. $$i; $(top_srcdir)/build/shtool echo -n -- " -d $(ZEND_EXT_TYPE)=$(top_builddir)/modules/$$dlname"; \
		done; \
	fi`
PHP_DEPRECATED_DIRECTIVES_REGEX = '^(magic_quotes_(gpc|runtime|sybase)?|(zend_)?extension(_debug)?(_ts)?)[\t\ ]*='

test: all
	@if test ! -z "$(PHP_EXECUTABLE)" && test -x "$(PHP_EXECUTABLE)"; then \
		INI_FILE=`$(PHP_EXECUTABLE) -d 'display_errors=stderr' -r 'echo php_ini_loaded_file();' 2> /dev/null`; \
		if test "$$INI_FILE"; then \
			$(EGREP) -h -v $(PHP_DEPRECATED_DIRECTIVES_REGEX) "$$INI_FILE" > $(top_builddir)/tmp-php.ini; \
		else \
			echo > $(top_builddir)/tmp-php.ini; \
		fi; \
		INI_SCANNED_PATH=`$(PHP_EXECUTABLE) -d 'display_errors=stderr' -r '$$a = explode(",\n", trim(php_ini_scanned_files())); echo $$a[0];' 2> /dev/null`; \
		if test "$$INI_SCANNED_PATH"; then \
			INI_SCANNED_PATH=`$(top_srcdir)/build/shtool path -d $$INI_SCANNED_PATH`; \
			$(EGREP) -h -v $(PHP_DEPRECATED_DIRECTIVES_REGEX) "$$INI_SCANNED_PATH"/*.ini >> $(top_builddir)/tmp-php.ini; \
		fi; \
		TEST_PHP_EXECUTABLE=$(PHP_EXECUTABLE) \
		TEST_PHP_SRCDIR=$(top_srcdir) \
		CC="$(CC)" \
			$(PHP_EXECUTABLE) -n -c $(top_builddir)/tmp-php.ini $(PHP_TEST_SETTINGS) $(top_srcdir)/run-tests.php -n -c $(top_builddir)/tmp-php.ini -d extension_dir=$(top_builddir)/modules/ $(PHP_TEST_SHARED_EXTENSIONS) $(TESTS); \
		TEST_RESULT_EXIT_CODE=$$?; \
		rm $(top_builddir)/tmp-php.ini; \
		exit $$TEST_RESULT_EXIT_CODE; \
	else \
		echo "ERROR: Cannot run tests without CLI sapi."; \
	fi

clean:
	find . -name \*.gcno -o -name \*.gcda | xargs rm -f
	find . -name \*.lo -o -name \*.o | xargs rm -f
	find . -name \*.la -o -name \*.a | xargs rm -f
	find . -name \*.so | xargs rm -f
	find . -name .libs -a -type d|xargs rm -rf
	rm -f libphp$(PHP_MAJOR_VERSION).la $(SAPI_CLI_PATH) $(SAPI_CGI_PATH) $(SAPI_LITESPEED_PATH) $(SAPI_FPM_PATH) $(OVERALL_TARGET) modules/* libs/*

distclean: clean
	rm -f Makefile config.cache config.log config.status Makefile.objects Makefile.fragments libtool main/php_config.h main/internal_functions_cli.c main/internal_functions.c stamp-h buildmk.stamp Zend/zend_dtrace_gen.h Zend/zend_dtrace_gen.h.bak Zend/zend_config.h TSRM/tsrm_config.h
	rm -f php7.spec main/build-defs.h scripts/phpize
	rm -f ext/date/lib/timelib_config.h ext/mbstring/oniguruma/config.h ext/mbstring/libmbfl/config.h ext/oci8/oci8_dtrace_gen.h ext/oci8/oci8_dtrace_gen.h.bak
	rm -f scripts/man1/phpize.1 scripts/php-config scripts/man1/php-config.1 sapi/cli/php.1 sapi/cgi/php-cgi.1 sapi/phpdbg/phpdbg.1 ext/phar/phar.1 ext/phar/phar.phar.1
	rm -f sapi/fpm/php-fpm.conf sapi/fpm/init.d.php-fpm sapi/fpm/php-fpm.service sapi/fpm/php-fpm.8 sapi/fpm/status.html
	rm -f ext/iconv/php_have_bsd_iconv.h ext/iconv/php_have_glibc_iconv.h ext/iconv/php_have_ibm_iconv.h ext/iconv/php_have_iconv.h ext/iconv/php_have_libiconv.h ext/iconv/php_iconv_aliased_libiconv.h ext/iconv/php_iconv_supports_errno.h ext/iconv/php_php_iconv_h_path.h ext/iconv/php_php_iconv_impl.h
	rm -f ext/phar/phar.phar ext/phar/phar.php
	if test "$(srcdir)" != "$(builddir)"; then \
	  rm -f ext/phar/phar/phar.inc; \
	fi
	$(EGREP) define'.*include/php' $(top_srcdir)/configure | $(SED) 's/.*>//'|xargs rm -f

prof-gen:
	CCACHE_DISABLE=1 $(MAKE) PROF_FLAGS=-fprofile-generate all

prof-clean:
	find . -name \*.lo -o -name \*.o | xargs rm -f
	find . -name \*.la -o -name \*.a | xargs rm -f
	find . -name \*.so | xargs rm -f
	rm -f libphp$(PHP_MAJOR_VERSION).la $(SAPI_CLI_PATH) $(SAPI_CGI_PATH) $(SAPI_LITESPEED_PATH) $(SAPI_FPM_PATH) $(OVERALL_TARGET) modules/* libs/*

prof-use:
	CCACHE_DISABLE=1 $(MAKE) PROF_FLAGS=-fprofile-use all


.PHONY: all clean install distclean test prof-gen prof-clean prof-use
.NOEXPORT:
cli: $(SAPI_CLI_PATH)

$(SAPI_CLI_PATH): $(PHP_GLOBAL_OBJS) $(PHP_BINARY_OBJS) $(PHP_CLI_OBJS)
	$(BUILD_CLI)

install-cli: $(SAPI_CLI_PATH)
	@echo "Installing PHP CLI binary:        $(INSTALL_ROOT)$(bindir)/"
	@$(mkinstalldirs) $(INSTALL_ROOT)$(bindir)
	@$(INSTALL) -m 0755 $(SAPI_CLI_PATH) $(INSTALL_ROOT)$(bindir)/$(program_prefix)php$(program_suffix)$(EXEEXT)
	@echo "Installing PHP CLI man page:      $(INSTALL_ROOT)$(mandir)/man1/"
	@$(mkinstalldirs) $(INSTALL_ROOT)$(mandir)/man1
	@$(INSTALL_DATA) sapi/cli/php.1 $(INSTALL_ROOT)$(mandir)/man1/$(program_prefix)php$(program_suffix).1
phpdbg: $(BUILD_BINARY)

phpdbg-shared: $(BUILD_SHARED)

$(BUILD_SHARED): $(PHP_GLOBAL_OBJS) $(PHP_BINARY_OBJS) $(PHP_PHPDBG_OBJS)
	$(BUILD_PHPDBG_SHARED)

$(BUILD_BINARY): $(PHP_GLOBAL_OBJS) $(PHP_BINARY_OBJS) $(PHP_PHPDBG_OBJS)
	$(BUILD_PHPDBG)

%.c: %.y
%.c: %.l

/root/php-src/sapi/phpdbg/phpdbg_lexer.lo: /root/php-src/sapi/phpdbg/phpdbg_parser.h

/root/php-src/sapi/phpdbg/phpdbg_lexer.c: /root/php-src/sapi/phpdbg/phpdbg_lexer.l
	@(cd $(top_srcdir); $(RE2C) $(RE2C_FLAGS) --no-generation-date -cbdFo sapi/phpdbg/phpdbg_lexer.c sapi/phpdbg/phpdbg_lexer.l)

/root/php-src/sapi/phpdbg/phpdbg_parser.h: /root/php-src/sapi/phpdbg/phpdbg_parser.c
/root/php-src/sapi/phpdbg/phpdbg_parser.c: /root/php-src/sapi/phpdbg/phpdbg_parser.y
	@$(YACC) -p phpdbg_ -v -d /root/php-src/sapi/phpdbg/phpdbg_parser.y -o $@

install-phpdbg: $(BUILD_BINARY)
	@echo "Installing phpdbg binary:         $(INSTALL_ROOT)$(bindir)/"
	@$(mkinstalldirs) $(INSTALL_ROOT)$(bindir)
	@$(mkinstalldirs) $(INSTALL_ROOT)$(localstatedir)/log
	@$(mkinstalldirs) $(INSTALL_ROOT)$(localstatedir)/run
	@$(INSTALL) -m 0755 $(BUILD_BINARY) $(INSTALL_ROOT)$(bindir)/$(program_prefix)phpdbg$(program_suffix)$(EXEEXT)
	@echo "Installing phpdbg man page:       $(INSTALL_ROOT)$(mandir)/man1/"
	@$(mkinstalldirs) $(INSTALL_ROOT)$(mandir)/man1
	@$(INSTALL_DATA) sapi/phpdbg/phpdbg.1 $(INSTALL_ROOT)$(mandir)/man1/$(program_prefix)phpdbg$(program_suffix).1

clean-phpdbg:
	@echo "Cleaning phpdbg object files ..."
	find sapi/phpdbg/ -name *.lo -o -name *.o | xargs rm -f

test-phpdbg:
	@echo "Running phpdbg tests ..."
	@$(top_builddir)/sapi/cli/php sapi/phpdbg/tests/run-tests.php --phpdbg sapi/phpdbg/phpdbg

.PHONY: clean-phpdbg test-phpdbg
cgi: $(SAPI_CGI_PATH)

$(SAPI_CGI_PATH): $(PHP_GLOBAL_OBJS) $(PHP_BINARY_OBJS) $(PHP_FASTCGI_OBJS) $(PHP_CGI_OBJS)
	$(BUILD_CGI)

install-cgi: $(SAPI_CGI_PATH)
	@echo "Installing PHP CGI binary:        $(INSTALL_ROOT)$(bindir)/"
	@$(mkinstalldirs) $(INSTALL_ROOT)$(bindir)
	@$(INSTALL) -m 0755 $(SAPI_CGI_PATH) $(INSTALL_ROOT)$(bindir)/$(program_prefix)php-cgi$(program_suffix)$(EXEEXT)
	@echo "Installing PHP CGI man page:      $(INSTALL_ROOT)$(mandir)/man1/"
	@$(mkinstalldirs) $(INSTALL_ROOT)$(mandir)/man1
	@$(INSTALL_DATA) sapi/cgi/php-cgi.1 $(INSTALL_ROOT)$(mandir)/man1/$(program_prefix)php-cgi$(program_suffix).1
ext/fileinfo/libmagic/apprentice.lo: /root/php-src/ext/fileinfo/data_file.c
/root/php-src/ext/json/json_scanner.c: /root/php-src/ext/json/json_scanner.re
	$(RE2C) $(RE2C_FLAGS) -t /root/php-src/ext/json/php_json_scanner_defs.h --no-generation-date -bci -o $@ /root/php-src/ext/json/json_scanner.re

/root/php-src/ext/json/json_parser.tab.c: /root/php-src/ext/json/json_parser.y
	$(YACC) --defines -l /root/php-src/ext/json/json_parser.y -o $@
phpincludedir=$(prefix)/include/php

PDO_HEADER_FILES= \
	php_pdo.h \
	php_pdo_driver.h \
	php_pdo_error.h


/root/php-src/ext/pdo/pdo_sql_parser.c: /root/php-src/ext/pdo/pdo_sql_parser.re
	@(cd $(top_srcdir); \
	if test -f ./pdo_sql_parser.re; then \
		$(RE2C) $(RE2C_FLAGS) --no-generation-date -o pdo_sql_parser.c pdo_sql_parser.re; \
	else \
		$(RE2C) $(RE2C_FLAGS) --no-generation-date -o ext/pdo/pdo_sql_parser.c ext/pdo/pdo_sql_parser.re; \
	fi)

install-pdo-headers:
	@echo "Installing PDO headers:           $(INSTALL_ROOT)$(phpincludedir)/ext/pdo/"
	@$(mkinstalldirs) $(INSTALL_ROOT)$(phpincludedir)/ext/pdo
	@for f in $(PDO_HEADER_FILES); do \
		if test -f "$(top_srcdir)/$$f"; then \
			$(INSTALL_DATA) $(top_srcdir)/$$f $(INSTALL_ROOT)$(phpincludedir)/ext/pdo; \
		elif test -f "$(top_builddir)/$$f"; then \
			$(INSTALL_DATA) $(top_builddir)/$$f $(INSTALL_ROOT)$(phpincludedir)/ext/pdo; \
		elif test -f "$(top_srcdir)/ext/pdo/$$f"; then \
			$(INSTALL_DATA) $(top_srcdir)/ext/pdo/$$f $(INSTALL_ROOT)$(phpincludedir)/ext/pdo; \
		elif test -f "$(top_builddir)/ext/pdo/$$f"; then \
			$(INSTALL_DATA) $(top_builddir)/ext/pdo/$$f $(INSTALL_ROOT)$(phpincludedir)/ext/pdo; \
		else \
			echo "hmmm"; \
		fi \
	done;

# mini hack
install: $(all_targets) $(install_targets) install-pdo-headers
/root/php-src/ext/standard/var_unserializer.c: /root/php-src/ext/standard/var_unserializer.re
	@(cd $(top_srcdir); $(RE2C) $(RE2C_FLAGS) --no-generation-date -b -o ext/standard/var_unserializer.c ext/standard/var_unserializer.re)

/root/php-src/ext/standard/url_scanner_ex.c: /root/php-src/ext/standard/url_scanner_ex.re
	@(cd $(top_srcdir); $(RE2C) $(RE2C_FLAGS) --no-generation-date -b -o ext/standard/url_scanner_ex.c	ext/standard/url_scanner_ex.re)

ext/standard/info.lo: ext/standard/../../main/build-defs.h

ext/standard/basic_functions.lo: $(top_srcdir)/Zend/zend_language_parser.h
$(top_srcdir)/Zend/zend_language_parser.c:
$(top_srcdir)/Zend/zend_language_scanner.c:
$(top_srcdir)/ext/tokenizer/tokenizer_data.c: $(top_srcdir)/Zend/zend_language_parser.h
ext/tokenizer/tokenizer.lo: $(top_srcdir)/Zend/zend_language_parser.c $(top_srcdir)/Zend/zend_language_scanner.c
#
# Build environment install
#

phpincludedir = $(includedir)/php
phpbuilddir = $(libdir)/build

BUILD_FILES = \
	scripts/phpize.m4 \
	build/mkdep.awk \
	build/scan_makefile_in.awk \
	build/libtool.m4 \
	build/ax_check_compile_flag.m4 \
	build/ax_gcc_func_attribute.m4 \
	Makefile.global \
	acinclude.m4 \
	ltmain.sh \
	run-tests.php

BUILD_FILES_EXEC = \
	build/shtool \
	config.guess \
	config.sub

bin_SCRIPTS = phpize php-config
man_PAGES = phpize php-config

install-build:
	@echo "Installing build environment:     $(INSTALL_ROOT)$(phpbuilddir)/"
	@$(mkinstalldirs) $(INSTALL_ROOT)$(phpbuilddir) $(INSTALL_ROOT)$(bindir) && \
	(cd $(top_srcdir) && \
	$(INSTALL) $(BUILD_FILES_EXEC) $(INSTALL_ROOT)$(phpbuilddir) && \
	$(INSTALL_DATA) $(BUILD_FILES) $(INSTALL_ROOT)$(phpbuilddir))

install-programs: scripts/phpize scripts/php-config
	@echo "Installing helper programs:       $(INSTALL_ROOT)$(bindir)/"
	@$(mkinstalldirs) $(INSTALL_ROOT)$(bindir)
	@for prog in $(bin_SCRIPTS); do \
		echo "  program: $(program_prefix)$${prog}$(program_suffix)"; \
		$(INSTALL) -m 755 scripts/$${prog} $(INSTALL_ROOT)$(bindir)/$(program_prefix)$${prog}$(program_suffix); \
	done
	@echo "Installing man pages:             $(INSTALL_ROOT)$(mandir)/man1/"
	@$(mkinstalldirs) $(INSTALL_ROOT)$(mandir)/man1
	@for page in $(man_PAGES); do \
		echo "  page: $(program_prefix)$${page}$(program_suffix).1"; \
		$(INSTALL_DATA) scripts/man1/$${page}.1 $(INSTALL_ROOT)$(mandir)/man1/$(program_prefix)$${page}$(program_suffix).1; \
	done

scripts/phpize: /root/php-src/scripts/phpize.in $(top_builddir)/config.status
	(CONFIG_FILES=$@ CONFIG_HEADERS= $(top_builddir)/config.status)

scripts/php-config: /root/php-src/scripts/php-config.in $(top_builddir)/config.status
	(CONFIG_FILES=$@ CONFIG_HEADERS= $(top_builddir)/config.status)
#
# Zend
#

Zend/zend_language_scanner.lo: /root/php-src/Zend/zend_language_parser.h
Zend/zend_ini_scanner.lo: /root/php-src/Zend/zend_ini_parser.h

/root/php-src/Zend/zend_language_scanner.c: /root/php-src/Zend/zend_language_scanner.l
	@(cd $(top_srcdir); $(RE2C) $(RE2C_FLAGS) --no-generation-date --case-inverted -cbdFt Zend/zend_language_scanner_defs.h -oZend/zend_language_scanner.c Zend/zend_language_scanner.l)

/root/php-src/Zend/zend_language_parser.h: /root/php-src/Zend/zend_language_parser.c
/root/php-src/Zend/zend_language_parser.c: /root/php-src/Zend/zend_language_parser.y
	@$(YACC) -p zend -v -d /root/php-src/Zend/zend_language_parser.y -o $@

/root/php-src/Zend/zend_ini_parser.h: /root/php-src/Zend/zend_ini_parser.c
/root/php-src/Zend/zend_ini_parser.c: /root/php-src/Zend/zend_ini_parser.y
	@$(YACC) -p ini_ -v -d /root/php-src/Zend/zend_ini_parser.y -o $@

/root/php-src/Zend/zend_ini_scanner.c: /root/php-src/Zend/zend_ini_scanner.l
	@(cd $(top_srcdir); $(RE2C) $(RE2C_FLAGS) --no-generation-date --case-inverted -cbdFt Zend/zend_ini_scanner_defs.h -oZend/zend_ini_scanner.c Zend/zend_ini_scanner.l)

Zend/zend_highlight.lo Zend/zend_compile.lo: /root/php-src/Zend/zend_language_parser.h
Zend/zend_execute.lo: /root/php-src/Zend/zend_vm_execute.h /root/php-src/Zend/zend_vm_opcodes.h
sapi/cli/php_cli.lo: /root/php-src/sapi/cli/php_cli.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/cli/ -I/root/php-src/sapi/cli/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/cli/php_cli.c -o sapi/cli/php_cli.lo
sapi/cli/php_http_parser.lo: /root/php-src/sapi/cli/php_http_parser.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/cli/ -I/root/php-src/sapi/cli/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/cli/php_http_parser.c -o sapi/cli/php_http_parser.lo
sapi/cli/php_cli_server.lo: /root/php-src/sapi/cli/php_cli_server.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/cli/ -I/root/php-src/sapi/cli/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/cli/php_cli_server.c -o sapi/cli/php_cli_server.lo
sapi/cli/ps_title.lo: /root/php-src/sapi/cli/ps_title.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/cli/ -I/root/php-src/sapi/cli/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/cli/ps_title.c -o sapi/cli/ps_title.lo
sapi/cli/php_cli_process_title.lo: /root/php-src/sapi/cli/php_cli_process_title.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/cli/ -I/root/php-src/sapi/cli/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/cli/php_cli_process_title.c -o sapi/cli/php_cli_process_title.lo
sapi/phpdbg/phpdbg.lo: /root/php-src/sapi/phpdbg/phpdbg.c
	$(LIBTOOL) --mode=compile $(CC) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/phpdbg/phpdbg.c -o sapi/phpdbg/phpdbg.lo
sapi/phpdbg/phpdbg_parser.lo: /root/php-src/sapi/phpdbg/phpdbg_parser.c
	$(LIBTOOL) --mode=compile $(CC) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/phpdbg/phpdbg_parser.c -o sapi/phpdbg/phpdbg_parser.lo
sapi/phpdbg/phpdbg_lexer.lo: /root/php-src/sapi/phpdbg/phpdbg_lexer.c
	$(LIBTOOL) --mode=compile $(CC) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/phpdbg/phpdbg_lexer.c -o sapi/phpdbg/phpdbg_lexer.lo
sapi/phpdbg/phpdbg_prompt.lo: /root/php-src/sapi/phpdbg/phpdbg_prompt.c
	$(LIBTOOL) --mode=compile $(CC) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/phpdbg/phpdbg_prompt.c -o sapi/phpdbg/phpdbg_prompt.lo
sapi/phpdbg/phpdbg_help.lo: /root/php-src/sapi/phpdbg/phpdbg_help.c
	$(LIBTOOL) --mode=compile $(CC) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/phpdbg/phpdbg_help.c -o sapi/phpdbg/phpdbg_help.lo
sapi/phpdbg/phpdbg_break.lo: /root/php-src/sapi/phpdbg/phpdbg_break.c
	$(LIBTOOL) --mode=compile $(CC) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/phpdbg/phpdbg_break.c -o sapi/phpdbg/phpdbg_break.lo
sapi/phpdbg/phpdbg_print.lo: /root/php-src/sapi/phpdbg/phpdbg_print.c
	$(LIBTOOL) --mode=compile $(CC) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/phpdbg/phpdbg_print.c -o sapi/phpdbg/phpdbg_print.lo
sapi/phpdbg/phpdbg_bp.lo: /root/php-src/sapi/phpdbg/phpdbg_bp.c
	$(LIBTOOL) --mode=compile $(CC) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/phpdbg/phpdbg_bp.c -o sapi/phpdbg/phpdbg_bp.lo
sapi/phpdbg/phpdbg_opcode.lo: /root/php-src/sapi/phpdbg/phpdbg_opcode.c
	$(LIBTOOL) --mode=compile $(CC) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/phpdbg/phpdbg_opcode.c -o sapi/phpdbg/phpdbg_opcode.lo
sapi/phpdbg/phpdbg_list.lo: /root/php-src/sapi/phpdbg/phpdbg_list.c
	$(LIBTOOL) --mode=compile $(CC) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/phpdbg/phpdbg_list.c -o sapi/phpdbg/phpdbg_list.lo
sapi/phpdbg/phpdbg_utils.lo: /root/php-src/sapi/phpdbg/phpdbg_utils.c
	$(LIBTOOL) --mode=compile $(CC) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/phpdbg/phpdbg_utils.c -o sapi/phpdbg/phpdbg_utils.lo
sapi/phpdbg/phpdbg_info.lo: /root/php-src/sapi/phpdbg/phpdbg_info.c
	$(LIBTOOL) --mode=compile $(CC) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/phpdbg/phpdbg_info.c -o sapi/phpdbg/phpdbg_info.lo
sapi/phpdbg/phpdbg_cmd.lo: /root/php-src/sapi/phpdbg/phpdbg_cmd.c
	$(LIBTOOL) --mode=compile $(CC) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/phpdbg/phpdbg_cmd.c -o sapi/phpdbg/phpdbg_cmd.lo
sapi/phpdbg/phpdbg_set.lo: /root/php-src/sapi/phpdbg/phpdbg_set.c
	$(LIBTOOL) --mode=compile $(CC) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/phpdbg/phpdbg_set.c -o sapi/phpdbg/phpdbg_set.lo
sapi/phpdbg/phpdbg_frame.lo: /root/php-src/sapi/phpdbg/phpdbg_frame.c
	$(LIBTOOL) --mode=compile $(CC) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/phpdbg/phpdbg_frame.c -o sapi/phpdbg/phpdbg_frame.lo
sapi/phpdbg/phpdbg_watch.lo: /root/php-src/sapi/phpdbg/phpdbg_watch.c
	$(LIBTOOL) --mode=compile $(CC) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/phpdbg/phpdbg_watch.c -o sapi/phpdbg/phpdbg_watch.lo
sapi/phpdbg/phpdbg_btree.lo: /root/php-src/sapi/phpdbg/phpdbg_btree.c
	$(LIBTOOL) --mode=compile $(CC) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/phpdbg/phpdbg_btree.c -o sapi/phpdbg/phpdbg_btree.lo
sapi/phpdbg/phpdbg_sigsafe.lo: /root/php-src/sapi/phpdbg/phpdbg_sigsafe.c
	$(LIBTOOL) --mode=compile $(CC) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/phpdbg/phpdbg_sigsafe.c -o sapi/phpdbg/phpdbg_sigsafe.lo
sapi/phpdbg/phpdbg_wait.lo: /root/php-src/sapi/phpdbg/phpdbg_wait.c
	$(LIBTOOL) --mode=compile $(CC) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/phpdbg/phpdbg_wait.c -o sapi/phpdbg/phpdbg_wait.lo
sapi/phpdbg/phpdbg_io.lo: /root/php-src/sapi/phpdbg/phpdbg_io.c
	$(LIBTOOL) --mode=compile $(CC) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/phpdbg/phpdbg_io.c -o sapi/phpdbg/phpdbg_io.lo
sapi/phpdbg/phpdbg_eol.lo: /root/php-src/sapi/phpdbg/phpdbg_eol.c
	$(LIBTOOL) --mode=compile $(CC) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/phpdbg/phpdbg_eol.c -o sapi/phpdbg/phpdbg_eol.lo
sapi/phpdbg/phpdbg_out.lo: /root/php-src/sapi/phpdbg/phpdbg_out.c
	$(LIBTOOL) --mode=compile $(CC) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/phpdbg/phpdbg_out.c -o sapi/phpdbg/phpdbg_out.lo
sapi/cgi/cgi_main.lo: /root/php-src/sapi/cgi/cgi_main.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Isapi/cgi/ -I/root/php-src/sapi/cgi/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/sapi/cgi/cgi_main.c -o sapi/cgi/cgi_main.lo
ext/date/php_date.lo: /root/php-src/ext/date/php_date.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/date/lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DHAVE_TIMELIB_CONFIG_H=1 -Iext/date/ -I/root/php-src/ext/date/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/date/php_date.c -o ext/date/php_date.lo
ext/date/lib/astro.lo: /root/php-src/ext/date/lib/astro.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/date/lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DHAVE_TIMELIB_CONFIG_H=1 -Iext/date/ -I/root/php-src/ext/date/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/date/lib/astro.c -o ext/date/lib/astro.lo
ext/date/lib/dow.lo: /root/php-src/ext/date/lib/dow.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/date/lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DHAVE_TIMELIB_CONFIG_H=1 -Iext/date/ -I/root/php-src/ext/date/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/date/lib/dow.c -o ext/date/lib/dow.lo
ext/date/lib/parse_date.lo: /root/php-src/ext/date/lib/parse_date.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/date/lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DHAVE_TIMELIB_CONFIG_H=1 -Iext/date/ -I/root/php-src/ext/date/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/date/lib/parse_date.c -o ext/date/lib/parse_date.lo
ext/date/lib/parse_tz.lo: /root/php-src/ext/date/lib/parse_tz.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/date/lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DHAVE_TIMELIB_CONFIG_H=1 -Iext/date/ -I/root/php-src/ext/date/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/date/lib/parse_tz.c -o ext/date/lib/parse_tz.lo
ext/date/lib/timelib.lo: /root/php-src/ext/date/lib/timelib.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/date/lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DHAVE_TIMELIB_CONFIG_H=1 -Iext/date/ -I/root/php-src/ext/date/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/date/lib/timelib.c -o ext/date/lib/timelib.lo
ext/date/lib/tm2unixtime.lo: /root/php-src/ext/date/lib/tm2unixtime.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/date/lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DHAVE_TIMELIB_CONFIG_H=1 -Iext/date/ -I/root/php-src/ext/date/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/date/lib/tm2unixtime.c -o ext/date/lib/tm2unixtime.lo
ext/date/lib/unixtime2tm.lo: /root/php-src/ext/date/lib/unixtime2tm.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/date/lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DHAVE_TIMELIB_CONFIG_H=1 -Iext/date/ -I/root/php-src/ext/date/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/date/lib/unixtime2tm.c -o ext/date/lib/unixtime2tm.lo
ext/date/lib/parse_iso_intervals.lo: /root/php-src/ext/date/lib/parse_iso_intervals.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/date/lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DHAVE_TIMELIB_CONFIG_H=1 -Iext/date/ -I/root/php-src/ext/date/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/date/lib/parse_iso_intervals.c -o ext/date/lib/parse_iso_intervals.lo
ext/date/lib/interval.lo: /root/php-src/ext/date/lib/interval.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/date/lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DHAVE_TIMELIB_CONFIG_H=1 -Iext/date/ -I/root/php-src/ext/date/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/date/lib/interval.c -o ext/date/lib/interval.lo
ext/pcre/pcre2lib/pcre2_auto_possess.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_auto_possess.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_auto_possess.c -o ext/pcre/pcre2lib/pcre2_auto_possess.lo
ext/pcre/pcre2lib/pcre2_chartables.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_chartables.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_chartables.c -o ext/pcre/pcre2lib/pcre2_chartables.lo
ext/pcre/pcre2lib/pcre2_compile.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_compile.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_compile.c -o ext/pcre/pcre2lib/pcre2_compile.lo
ext/pcre/pcre2lib/pcre2_config.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_config.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_config.c -o ext/pcre/pcre2lib/pcre2_config.lo
ext/pcre/pcre2lib/pcre2_context.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_context.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_context.c -o ext/pcre/pcre2lib/pcre2_context.lo
ext/pcre/pcre2lib/pcre2_dfa_match.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_dfa_match.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_dfa_match.c -o ext/pcre/pcre2lib/pcre2_dfa_match.lo
ext/pcre/pcre2lib/pcre2_error.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_error.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_error.c -o ext/pcre/pcre2lib/pcre2_error.lo
ext/pcre/pcre2lib/pcre2_jit_compile.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_jit_compile.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_jit_compile.c -o ext/pcre/pcre2lib/pcre2_jit_compile.lo
ext/pcre/pcre2lib/pcre2_maketables.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_maketables.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_maketables.c -o ext/pcre/pcre2lib/pcre2_maketables.lo
ext/pcre/pcre2lib/pcre2_match.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_match.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_match.c -o ext/pcre/pcre2lib/pcre2_match.lo
ext/pcre/pcre2lib/pcre2_match_data.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_match_data.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_match_data.c -o ext/pcre/pcre2lib/pcre2_match_data.lo
ext/pcre/pcre2lib/pcre2_newline.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_newline.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_newline.c -o ext/pcre/pcre2lib/pcre2_newline.lo
ext/pcre/pcre2lib/pcre2_ord2utf.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_ord2utf.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_ord2utf.c -o ext/pcre/pcre2lib/pcre2_ord2utf.lo
ext/pcre/pcre2lib/pcre2_pattern_info.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_pattern_info.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_pattern_info.c -o ext/pcre/pcre2lib/pcre2_pattern_info.lo
ext/pcre/pcre2lib/pcre2_serialize.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_serialize.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_serialize.c -o ext/pcre/pcre2lib/pcre2_serialize.lo
ext/pcre/pcre2lib/pcre2_string_utils.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_string_utils.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_string_utils.c -o ext/pcre/pcre2lib/pcre2_string_utils.lo
ext/pcre/pcre2lib/pcre2_study.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_study.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_study.c -o ext/pcre/pcre2lib/pcre2_study.lo
ext/pcre/pcre2lib/pcre2_substitute.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_substitute.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_substitute.c -o ext/pcre/pcre2lib/pcre2_substitute.lo
ext/pcre/pcre2lib/pcre2_substring.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_substring.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_substring.c -o ext/pcre/pcre2lib/pcre2_substring.lo
ext/pcre/pcre2lib/pcre2_tables.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_tables.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_tables.c -o ext/pcre/pcre2lib/pcre2_tables.lo
ext/pcre/pcre2lib/pcre2_ucd.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_ucd.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_ucd.c -o ext/pcre/pcre2lib/pcre2_ucd.lo
ext/pcre/pcre2lib/pcre2_valid_utf.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_valid_utf.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_valid_utf.c -o ext/pcre/pcre2lib/pcre2_valid_utf.lo
ext/pcre/pcre2lib/pcre2_xclass.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_xclass.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_xclass.c -o ext/pcre/pcre2lib/pcre2_xclass.lo
ext/pcre/pcre2lib/pcre2_find_bracket.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_find_bracket.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_find_bracket.c -o ext/pcre/pcre2lib/pcre2_find_bracket.lo
ext/pcre/pcre2lib/pcre2_convert.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_convert.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_convert.c -o ext/pcre/pcre2lib/pcre2_convert.lo
ext/pcre/pcre2lib/pcre2_extuni.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_extuni.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/pcre2lib/pcre2_extuni.c -o ext/pcre/pcre2lib/pcre2_extuni.lo
ext/pcre/php_pcre.lo: /root/php-src/ext/pcre/php_pcre.c
	$(LIBTOOL) --mode=compile $(CC) -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pcre/php_pcre.c -o ext/pcre/php_pcre.lo
ext/sqlite3/sqlite3.lo: /root/php-src/ext/sqlite3/sqlite3.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/sqlite3/libsqlite -DSQLITE_ENABLE_FTS3=1 -DSQLITE_ENABLE_FTS4=1 -DSQLITE_ENABLE_FTS5=1 -DSQLITE_ENABLE_JSON1=1 -DSQLITE_CORE=1 -DSQLITE_ENABLE_COLUMN_METADATA=1 -DSQLITE_THREADSAFE=0  -Iext/sqlite3/ -I/root/php-src/ext/sqlite3/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/sqlite3/sqlite3.c -o ext/sqlite3/sqlite3.lo
ext/sqlite3/libsqlite/sqlite3.lo: /root/php-src/ext/sqlite3/libsqlite/sqlite3.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/sqlite3/libsqlite -DSQLITE_ENABLE_FTS3=1 -DSQLITE_ENABLE_FTS4=1 -DSQLITE_ENABLE_FTS5=1 -DSQLITE_ENABLE_JSON1=1 -DSQLITE_CORE=1 -DSQLITE_ENABLE_COLUMN_METADATA=1 -DSQLITE_THREADSAFE=0  -Iext/sqlite3/ -I/root/php-src/ext/sqlite3/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/sqlite3/libsqlite/sqlite3.c -o ext/sqlite3/libsqlite/sqlite3.lo
ext/ctype/ctype.lo: /root/php-src/ext/ctype/ctype.c
	$(LIBTOOL) --mode=compile $(CC)  -Iext/ctype/ -I/root/php-src/ext/ctype/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/ctype/ctype.c -o ext/ctype/ctype.lo
ext/fileinfo/fileinfo.lo: /root/php-src/ext/fileinfo/fileinfo.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/fileinfo/libmagic -Iext/fileinfo/ -I/root/php-src/ext/fileinfo/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/fileinfo/fileinfo.c -o ext/fileinfo/fileinfo.lo
ext/fileinfo/libmagic/apprentice.lo: /root/php-src/ext/fileinfo/libmagic/apprentice.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/fileinfo/libmagic -Iext/fileinfo/ -I/root/php-src/ext/fileinfo/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/fileinfo/libmagic/apprentice.c -o ext/fileinfo/libmagic/apprentice.lo
ext/fileinfo/libmagic/apptype.lo: /root/php-src/ext/fileinfo/libmagic/apptype.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/fileinfo/libmagic -Iext/fileinfo/ -I/root/php-src/ext/fileinfo/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/fileinfo/libmagic/apptype.c -o ext/fileinfo/libmagic/apptype.lo
ext/fileinfo/libmagic/ascmagic.lo: /root/php-src/ext/fileinfo/libmagic/ascmagic.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/fileinfo/libmagic -Iext/fileinfo/ -I/root/php-src/ext/fileinfo/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/fileinfo/libmagic/ascmagic.c -o ext/fileinfo/libmagic/ascmagic.lo
ext/fileinfo/libmagic/cdf.lo: /root/php-src/ext/fileinfo/libmagic/cdf.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/fileinfo/libmagic -Iext/fileinfo/ -I/root/php-src/ext/fileinfo/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/fileinfo/libmagic/cdf.c -o ext/fileinfo/libmagic/cdf.lo
ext/fileinfo/libmagic/cdf_time.lo: /root/php-src/ext/fileinfo/libmagic/cdf_time.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/fileinfo/libmagic -Iext/fileinfo/ -I/root/php-src/ext/fileinfo/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/fileinfo/libmagic/cdf_time.c -o ext/fileinfo/libmagic/cdf_time.lo
ext/fileinfo/libmagic/compress.lo: /root/php-src/ext/fileinfo/libmagic/compress.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/fileinfo/libmagic -Iext/fileinfo/ -I/root/php-src/ext/fileinfo/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/fileinfo/libmagic/compress.c -o ext/fileinfo/libmagic/compress.lo
ext/fileinfo/libmagic/encoding.lo: /root/php-src/ext/fileinfo/libmagic/encoding.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/fileinfo/libmagic -Iext/fileinfo/ -I/root/php-src/ext/fileinfo/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/fileinfo/libmagic/encoding.c -o ext/fileinfo/libmagic/encoding.lo
ext/fileinfo/libmagic/fsmagic.lo: /root/php-src/ext/fileinfo/libmagic/fsmagic.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/fileinfo/libmagic -Iext/fileinfo/ -I/root/php-src/ext/fileinfo/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/fileinfo/libmagic/fsmagic.c -o ext/fileinfo/libmagic/fsmagic.lo
ext/fileinfo/libmagic/funcs.lo: /root/php-src/ext/fileinfo/libmagic/funcs.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/fileinfo/libmagic -Iext/fileinfo/ -I/root/php-src/ext/fileinfo/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/fileinfo/libmagic/funcs.c -o ext/fileinfo/libmagic/funcs.lo
ext/fileinfo/libmagic/is_tar.lo: /root/php-src/ext/fileinfo/libmagic/is_tar.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/fileinfo/libmagic -Iext/fileinfo/ -I/root/php-src/ext/fileinfo/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/fileinfo/libmagic/is_tar.c -o ext/fileinfo/libmagic/is_tar.lo
ext/fileinfo/libmagic/magic.lo: /root/php-src/ext/fileinfo/libmagic/magic.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/fileinfo/libmagic -Iext/fileinfo/ -I/root/php-src/ext/fileinfo/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/fileinfo/libmagic/magic.c -o ext/fileinfo/libmagic/magic.lo
ext/fileinfo/libmagic/print.lo: /root/php-src/ext/fileinfo/libmagic/print.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/fileinfo/libmagic -Iext/fileinfo/ -I/root/php-src/ext/fileinfo/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/fileinfo/libmagic/print.c -o ext/fileinfo/libmagic/print.lo
ext/fileinfo/libmagic/readcdf.lo: /root/php-src/ext/fileinfo/libmagic/readcdf.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/fileinfo/libmagic -Iext/fileinfo/ -I/root/php-src/ext/fileinfo/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/fileinfo/libmagic/readcdf.c -o ext/fileinfo/libmagic/readcdf.lo
ext/fileinfo/libmagic/softmagic.lo: /root/php-src/ext/fileinfo/libmagic/softmagic.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/fileinfo/libmagic -Iext/fileinfo/ -I/root/php-src/ext/fileinfo/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/fileinfo/libmagic/softmagic.c -o ext/fileinfo/libmagic/softmagic.lo
ext/fileinfo/libmagic/der.lo: /root/php-src/ext/fileinfo/libmagic/der.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/fileinfo/libmagic -Iext/fileinfo/ -I/root/php-src/ext/fileinfo/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/fileinfo/libmagic/der.c -o ext/fileinfo/libmagic/der.lo
ext/fileinfo/libmagic/buffer.lo: /root/php-src/ext/fileinfo/libmagic/buffer.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/fileinfo/libmagic -Iext/fileinfo/ -I/root/php-src/ext/fileinfo/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/fileinfo/libmagic/buffer.c -o ext/fileinfo/libmagic/buffer.lo
ext/filter/filter.lo: /root/php-src/ext/filter/filter.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/filter/ -I/root/php-src/ext/filter/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/filter/filter.c -o ext/filter/filter.lo
ext/filter/sanitizing_filters.lo: /root/php-src/ext/filter/sanitizing_filters.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/filter/ -I/root/php-src/ext/filter/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/filter/sanitizing_filters.c -o ext/filter/sanitizing_filters.lo
ext/filter/logical_filters.lo: /root/php-src/ext/filter/logical_filters.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/filter/ -I/root/php-src/ext/filter/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/filter/logical_filters.c -o ext/filter/logical_filters.lo
ext/filter/callback_filter.lo: /root/php-src/ext/filter/callback_filter.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/filter/ -I/root/php-src/ext/filter/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/filter/callback_filter.c -o ext/filter/callback_filter.lo
ext/hash/hash.lo: /root/php-src/ext/hash/hash.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/hash/hash.c -o ext/hash/hash.lo
ext/hash/hash_md.lo: /root/php-src/ext/hash/hash_md.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/hash/hash_md.c -o ext/hash/hash_md.lo
ext/hash/hash_sha.lo: /root/php-src/ext/hash/hash_sha.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/hash/hash_sha.c -o ext/hash/hash_sha.lo
ext/hash/hash_ripemd.lo: /root/php-src/ext/hash/hash_ripemd.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/hash/hash_ripemd.c -o ext/hash/hash_ripemd.lo
ext/hash/hash_haval.lo: /root/php-src/ext/hash/hash_haval.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/hash/hash_haval.c -o ext/hash/hash_haval.lo
ext/hash/hash_tiger.lo: /root/php-src/ext/hash/hash_tiger.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/hash/hash_tiger.c -o ext/hash/hash_tiger.lo
ext/hash/hash_gost.lo: /root/php-src/ext/hash/hash_gost.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/hash/hash_gost.c -o ext/hash/hash_gost.lo
ext/hash/hash_snefru.lo: /root/php-src/ext/hash/hash_snefru.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/hash/hash_snefru.c -o ext/hash/hash_snefru.lo
ext/hash/hash_whirlpool.lo: /root/php-src/ext/hash/hash_whirlpool.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/hash/hash_whirlpool.c -o ext/hash/hash_whirlpool.lo
ext/hash/hash_adler32.lo: /root/php-src/ext/hash/hash_adler32.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/hash/hash_adler32.c -o ext/hash/hash_adler32.lo
ext/hash/hash_crc32.lo: /root/php-src/ext/hash/hash_crc32.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/hash/hash_crc32.c -o ext/hash/hash_crc32.lo
ext/hash/hash_fnv.lo: /root/php-src/ext/hash/hash_fnv.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/hash/hash_fnv.c -o ext/hash/hash_fnv.lo
ext/hash/hash_joaat.lo: /root/php-src/ext/hash/hash_joaat.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/hash/hash_joaat.c -o ext/hash/hash_joaat.lo
ext/hash/sha3/generic32lc/KeccakP-1600-inplace32BI.lo: /root/php-src/ext/hash/sha3/generic32lc/KeccakP-1600-inplace32BI.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/hash/sha3/generic32lc/KeccakP-1600-inplace32BI.c -o ext/hash/sha3/generic32lc/KeccakP-1600-inplace32BI.lo
ext/hash/sha3/generic32lc/KeccakHash.lo: /root/php-src/ext/hash/sha3/generic32lc/KeccakHash.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/hash/sha3/generic32lc/KeccakHash.c -o ext/hash/sha3/generic32lc/KeccakHash.lo
ext/hash/sha3/generic32lc/KeccakSponge.lo: /root/php-src/ext/hash/sha3/generic32lc/KeccakSponge.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/hash/sha3/generic32lc/KeccakSponge.c -o ext/hash/sha3/generic32lc/KeccakSponge.lo
ext/hash/hash_sha3.lo: /root/php-src/ext/hash/hash_sha3.c
	$(LIBTOOL) --mode=compile $(CC) -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/hash/hash_sha3.c -o ext/hash/hash_sha3.lo
ext/json/json.lo: /root/php-src/ext/json/json.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/json/ -I/root/php-src/ext/json/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/json/json.c -o ext/json/json.lo
ext/json/json_encoder.lo: /root/php-src/ext/json/json_encoder.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/json/ -I/root/php-src/ext/json/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/json/json_encoder.c -o ext/json/json_encoder.lo
ext/json/json_parser.lo: /root/php-src/ext/json/json_parser.tab.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/json/ -I/root/php-src/ext/json/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/json/json_parser.tab.c -o ext/json/json_parser.lo
ext/json/json_scanner.lo: /root/php-src/ext/json/json_scanner.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/json/ -I/root/php-src/ext/json/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/json/json_scanner.c -o ext/json/json_scanner.lo
ext/pdo/pdo.lo: /root/php-src/ext/pdo/pdo.c
	$(LIBTOOL) --mode=compile $(CC)  -Iext/pdo/ -I/root/php-src/ext/pdo/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pdo/pdo.c -o ext/pdo/pdo.lo
ext/pdo/pdo_dbh.lo: /root/php-src/ext/pdo/pdo_dbh.c
	$(LIBTOOL) --mode=compile $(CC)  -Iext/pdo/ -I/root/php-src/ext/pdo/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pdo/pdo_dbh.c -o ext/pdo/pdo_dbh.lo
ext/pdo/pdo_stmt.lo: /root/php-src/ext/pdo/pdo_stmt.c
	$(LIBTOOL) --mode=compile $(CC)  -Iext/pdo/ -I/root/php-src/ext/pdo/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pdo/pdo_stmt.c -o ext/pdo/pdo_stmt.lo
ext/pdo/pdo_sql_parser.lo: /root/php-src/ext/pdo/pdo_sql_parser.c
	$(LIBTOOL) --mode=compile $(CC)  -Iext/pdo/ -I/root/php-src/ext/pdo/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pdo/pdo_sql_parser.c -o ext/pdo/pdo_sql_parser.lo
ext/pdo/pdo_sqlstate.lo: /root/php-src/ext/pdo/pdo_sqlstate.c
	$(LIBTOOL) --mode=compile $(CC)  -Iext/pdo/ -I/root/php-src/ext/pdo/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pdo/pdo_sqlstate.c -o ext/pdo/pdo_sqlstate.lo
ext/pdo_sqlite/pdo_sqlite.lo: /root/php-src/ext/pdo_sqlite/pdo_sqlite.c
	$(LIBTOOL) --mode=compile $(CC) -DPDO_SQLITE_BUNDLED=1 -DSQLITE_ENABLE_FTS3=1 -DSQLITE_ENABLE_FTS4=1 -DSQLITE_ENABLE_FTS5=1 -DSQLITE_ENABLE_JSON1=1 -DSQLITE_CORE=1 -DSQLITE_ENABLE_COLUMN_METADATA=1 -DSQLITE_THREADSAFE=0 -I/root/php-src/ext -Iext/pdo_sqlite/ -I/root/php-src/ext/pdo_sqlite/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pdo_sqlite/pdo_sqlite.c -o ext/pdo_sqlite/pdo_sqlite.lo
ext/pdo_sqlite/sqlite_driver.lo: /root/php-src/ext/pdo_sqlite/sqlite_driver.c
	$(LIBTOOL) --mode=compile $(CC) -DPDO_SQLITE_BUNDLED=1 -DSQLITE_ENABLE_FTS3=1 -DSQLITE_ENABLE_FTS4=1 -DSQLITE_ENABLE_FTS5=1 -DSQLITE_ENABLE_JSON1=1 -DSQLITE_CORE=1 -DSQLITE_ENABLE_COLUMN_METADATA=1 -DSQLITE_THREADSAFE=0 -I/root/php-src/ext -Iext/pdo_sqlite/ -I/root/php-src/ext/pdo_sqlite/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pdo_sqlite/sqlite_driver.c -o ext/pdo_sqlite/sqlite_driver.lo
ext/pdo_sqlite/sqlite_statement.lo: /root/php-src/ext/pdo_sqlite/sqlite_statement.c
	$(LIBTOOL) --mode=compile $(CC) -DPDO_SQLITE_BUNDLED=1 -DSQLITE_ENABLE_FTS3=1 -DSQLITE_ENABLE_FTS4=1 -DSQLITE_ENABLE_FTS5=1 -DSQLITE_ENABLE_JSON1=1 -DSQLITE_CORE=1 -DSQLITE_ENABLE_COLUMN_METADATA=1 -DSQLITE_THREADSAFE=0 -I/root/php-src/ext -Iext/pdo_sqlite/ -I/root/php-src/ext/pdo_sqlite/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/pdo_sqlite/sqlite_statement.c -o ext/pdo_sqlite/sqlite_statement.lo
ext/posix/posix.lo: /root/php-src/ext/posix/posix.c
	$(LIBTOOL) --mode=compile $(CC)  -Iext/posix/ -I/root/php-src/ext/posix/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/posix/posix.c -o ext/posix/posix.lo
ext/reflection/php_reflection.lo: /root/php-src/ext/reflection/php_reflection.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/reflection/ -I/root/php-src/ext/reflection/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/reflection/php_reflection.c -o ext/reflection/php_reflection.lo
ext/session/mod_user_class.lo: /root/php-src/ext/session/mod_user_class.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/session/ -I/root/php-src/ext/session/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/session/mod_user_class.c -o ext/session/mod_user_class.lo
ext/session/session.lo: /root/php-src/ext/session/session.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/session/ -I/root/php-src/ext/session/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/session/session.c -o ext/session/session.lo
ext/session/mod_files.lo: /root/php-src/ext/session/mod_files.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/session/ -I/root/php-src/ext/session/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/session/mod_files.c -o ext/session/mod_files.lo
ext/session/mod_mm.lo: /root/php-src/ext/session/mod_mm.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/session/ -I/root/php-src/ext/session/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/session/mod_mm.c -o ext/session/mod_mm.lo
ext/session/mod_user.lo: /root/php-src/ext/session/mod_user.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/session/ -I/root/php-src/ext/session/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/session/mod_user.c -o ext/session/mod_user.lo
ext/spl/php_spl.lo: /root/php-src/ext/spl/php_spl.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/spl/ -I/root/php-src/ext/spl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/spl/php_spl.c -o ext/spl/php_spl.lo
ext/spl/spl_functions.lo: /root/php-src/ext/spl/spl_functions.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/spl/ -I/root/php-src/ext/spl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/spl/spl_functions.c -o ext/spl/spl_functions.lo
ext/spl/spl_engine.lo: /root/php-src/ext/spl/spl_engine.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/spl/ -I/root/php-src/ext/spl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/spl/spl_engine.c -o ext/spl/spl_engine.lo
ext/spl/spl_iterators.lo: /root/php-src/ext/spl/spl_iterators.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/spl/ -I/root/php-src/ext/spl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/spl/spl_iterators.c -o ext/spl/spl_iterators.lo
ext/spl/spl_array.lo: /root/php-src/ext/spl/spl_array.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/spl/ -I/root/php-src/ext/spl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/spl/spl_array.c -o ext/spl/spl_array.lo
ext/spl/spl_directory.lo: /root/php-src/ext/spl/spl_directory.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/spl/ -I/root/php-src/ext/spl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/spl/spl_directory.c -o ext/spl/spl_directory.lo
ext/spl/spl_exceptions.lo: /root/php-src/ext/spl/spl_exceptions.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/spl/ -I/root/php-src/ext/spl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/spl/spl_exceptions.c -o ext/spl/spl_exceptions.lo
ext/spl/spl_observer.lo: /root/php-src/ext/spl/spl_observer.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/spl/ -I/root/php-src/ext/spl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/spl/spl_observer.c -o ext/spl/spl_observer.lo
ext/spl/spl_dllist.lo: /root/php-src/ext/spl/spl_dllist.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/spl/ -I/root/php-src/ext/spl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/spl/spl_dllist.c -o ext/spl/spl_dllist.lo
ext/spl/spl_heap.lo: /root/php-src/ext/spl/spl_heap.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/spl/ -I/root/php-src/ext/spl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/spl/spl_heap.c -o ext/spl/spl_heap.lo
ext/spl/spl_fixedarray.lo: /root/php-src/ext/spl/spl_fixedarray.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/spl/ -I/root/php-src/ext/spl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/spl/spl_fixedarray.c -o ext/spl/spl_fixedarray.lo
ext/standard/crypt_freesec.lo: /root/php-src/ext/standard/crypt_freesec.c
	$(LIBTOOL) --mode=compile $(CC)  -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/crypt_freesec.c -o ext/standard/crypt_freesec.lo
ext/standard/crypt_blowfish.lo: /root/php-src/ext/standard/crypt_blowfish.c
	$(LIBTOOL) --mode=compile $(CC)  -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/crypt_blowfish.c -o ext/standard/crypt_blowfish.lo
ext/standard/crypt_sha512.lo: /root/php-src/ext/standard/crypt_sha512.c
	$(LIBTOOL) --mode=compile $(CC)  -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/crypt_sha512.c -o ext/standard/crypt_sha512.lo
ext/standard/crypt_sha256.lo: /root/php-src/ext/standard/crypt_sha256.c
	$(LIBTOOL) --mode=compile $(CC)  -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/crypt_sha256.c -o ext/standard/crypt_sha256.lo
ext/standard/php_crypt_r.lo: /root/php-src/ext/standard/php_crypt_r.c
	$(LIBTOOL) --mode=compile $(CC)  -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/php_crypt_r.c -o ext/standard/php_crypt_r.lo
ext/standard/array.lo: /root/php-src/ext/standard/array.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/array.c -o ext/standard/array.lo
ext/standard/base64.lo: /root/php-src/ext/standard/base64.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/base64.c -o ext/standard/base64.lo
ext/standard/basic_functions.lo: /root/php-src/ext/standard/basic_functions.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/basic_functions.c -o ext/standard/basic_functions.lo
ext/standard/browscap.lo: /root/php-src/ext/standard/browscap.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/browscap.c -o ext/standard/browscap.lo
ext/standard/crc32.lo: /root/php-src/ext/standard/crc32.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/crc32.c -o ext/standard/crc32.lo
ext/standard/crypt.lo: /root/php-src/ext/standard/crypt.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/crypt.c -o ext/standard/crypt.lo
ext/standard/cyr_convert.lo: /root/php-src/ext/standard/cyr_convert.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/cyr_convert.c -o ext/standard/cyr_convert.lo
ext/standard/datetime.lo: /root/php-src/ext/standard/datetime.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/datetime.c -o ext/standard/datetime.lo
ext/standard/dir.lo: /root/php-src/ext/standard/dir.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/dir.c -o ext/standard/dir.lo
ext/standard/dl.lo: /root/php-src/ext/standard/dl.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/dl.c -o ext/standard/dl.lo
ext/standard/dns.lo: /root/php-src/ext/standard/dns.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/dns.c -o ext/standard/dns.lo
ext/standard/exec.lo: /root/php-src/ext/standard/exec.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/exec.c -o ext/standard/exec.lo
ext/standard/file.lo: /root/php-src/ext/standard/file.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/file.c -o ext/standard/file.lo
ext/standard/filestat.lo: /root/php-src/ext/standard/filestat.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/filestat.c -o ext/standard/filestat.lo
ext/standard/flock_compat.lo: /root/php-src/ext/standard/flock_compat.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/flock_compat.c -o ext/standard/flock_compat.lo
ext/standard/formatted_print.lo: /root/php-src/ext/standard/formatted_print.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/formatted_print.c -o ext/standard/formatted_print.lo
ext/standard/fsock.lo: /root/php-src/ext/standard/fsock.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/fsock.c -o ext/standard/fsock.lo
ext/standard/head.lo: /root/php-src/ext/standard/head.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/head.c -o ext/standard/head.lo
ext/standard/html.lo: /root/php-src/ext/standard/html.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/html.c -o ext/standard/html.lo
ext/standard/image.lo: /root/php-src/ext/standard/image.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/image.c -o ext/standard/image.lo
ext/standard/info.lo: /root/php-src/ext/standard/info.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/info.c -o ext/standard/info.lo
ext/standard/iptc.lo: /root/php-src/ext/standard/iptc.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/iptc.c -o ext/standard/iptc.lo
ext/standard/lcg.lo: /root/php-src/ext/standard/lcg.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/lcg.c -o ext/standard/lcg.lo
ext/standard/link.lo: /root/php-src/ext/standard/link.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/link.c -o ext/standard/link.lo
ext/standard/mail.lo: /root/php-src/ext/standard/mail.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/mail.c -o ext/standard/mail.lo
ext/standard/math.lo: /root/php-src/ext/standard/math.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/math.c -o ext/standard/math.lo
ext/standard/md5.lo: /root/php-src/ext/standard/md5.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/md5.c -o ext/standard/md5.lo
ext/standard/metaphone.lo: /root/php-src/ext/standard/metaphone.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/metaphone.c -o ext/standard/metaphone.lo
ext/standard/microtime.lo: /root/php-src/ext/standard/microtime.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/microtime.c -o ext/standard/microtime.lo
ext/standard/pack.lo: /root/php-src/ext/standard/pack.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/pack.c -o ext/standard/pack.lo
ext/standard/pageinfo.lo: /root/php-src/ext/standard/pageinfo.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/pageinfo.c -o ext/standard/pageinfo.lo
ext/standard/quot_print.lo: /root/php-src/ext/standard/quot_print.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/quot_print.c -o ext/standard/quot_print.lo
ext/standard/rand.lo: /root/php-src/ext/standard/rand.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/rand.c -o ext/standard/rand.lo
ext/standard/mt_rand.lo: /root/php-src/ext/standard/mt_rand.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/mt_rand.c -o ext/standard/mt_rand.lo
ext/standard/soundex.lo: /root/php-src/ext/standard/soundex.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/soundex.c -o ext/standard/soundex.lo
ext/standard/string.lo: /root/php-src/ext/standard/string.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/string.c -o ext/standard/string.lo
ext/standard/scanf.lo: /root/php-src/ext/standard/scanf.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/scanf.c -o ext/standard/scanf.lo
ext/standard/syslog.lo: /root/php-src/ext/standard/syslog.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/syslog.c -o ext/standard/syslog.lo
ext/standard/type.lo: /root/php-src/ext/standard/type.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/type.c -o ext/standard/type.lo
ext/standard/uniqid.lo: /root/php-src/ext/standard/uniqid.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/uniqid.c -o ext/standard/uniqid.lo
ext/standard/url.lo: /root/php-src/ext/standard/url.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/url.c -o ext/standard/url.lo
ext/standard/var.lo: /root/php-src/ext/standard/var.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/var.c -o ext/standard/var.lo
ext/standard/versioning.lo: /root/php-src/ext/standard/versioning.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/versioning.c -o ext/standard/versioning.lo
ext/standard/assert.lo: /root/php-src/ext/standard/assert.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/assert.c -o ext/standard/assert.lo
ext/standard/strnatcmp.lo: /root/php-src/ext/standard/strnatcmp.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/strnatcmp.c -o ext/standard/strnatcmp.lo
ext/standard/levenshtein.lo: /root/php-src/ext/standard/levenshtein.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/levenshtein.c -o ext/standard/levenshtein.lo
ext/standard/incomplete_class.lo: /root/php-src/ext/standard/incomplete_class.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/incomplete_class.c -o ext/standard/incomplete_class.lo
ext/standard/url_scanner_ex.lo: /root/php-src/ext/standard/url_scanner_ex.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/url_scanner_ex.c -o ext/standard/url_scanner_ex.lo
ext/standard/ftp_fopen_wrapper.lo: /root/php-src/ext/standard/ftp_fopen_wrapper.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/ftp_fopen_wrapper.c -o ext/standard/ftp_fopen_wrapper.lo
ext/standard/http_fopen_wrapper.lo: /root/php-src/ext/standard/http_fopen_wrapper.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/http_fopen_wrapper.c -o ext/standard/http_fopen_wrapper.lo
ext/standard/php_fopen_wrapper.lo: /root/php-src/ext/standard/php_fopen_wrapper.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/php_fopen_wrapper.c -o ext/standard/php_fopen_wrapper.lo
ext/standard/credits.lo: /root/php-src/ext/standard/credits.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/credits.c -o ext/standard/credits.lo
ext/standard/css.lo: /root/php-src/ext/standard/css.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/css.c -o ext/standard/css.lo
ext/standard/var_unserializer.lo: /root/php-src/ext/standard/var_unserializer.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/var_unserializer.c -o ext/standard/var_unserializer.lo
ext/standard/ftok.lo: /root/php-src/ext/standard/ftok.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/ftok.c -o ext/standard/ftok.lo
ext/standard/sha1.lo: /root/php-src/ext/standard/sha1.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/sha1.c -o ext/standard/sha1.lo
ext/standard/user_filters.lo: /root/php-src/ext/standard/user_filters.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/user_filters.c -o ext/standard/user_filters.lo
ext/standard/uuencode.lo: /root/php-src/ext/standard/uuencode.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/uuencode.c -o ext/standard/uuencode.lo
ext/standard/filters.lo: /root/php-src/ext/standard/filters.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/filters.c -o ext/standard/filters.lo
ext/standard/proc_open.lo: /root/php-src/ext/standard/proc_open.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/proc_open.c -o ext/standard/proc_open.lo
ext/standard/streamsfuncs.lo: /root/php-src/ext/standard/streamsfuncs.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/streamsfuncs.c -o ext/standard/streamsfuncs.lo
ext/standard/http.lo: /root/php-src/ext/standard/http.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/http.c -o ext/standard/http.lo
ext/standard/password.lo: /root/php-src/ext/standard/password.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/password.c -o ext/standard/password.lo
ext/standard/random.lo: /root/php-src/ext/standard/random.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/random.c -o ext/standard/random.lo
ext/standard/net.lo: /root/php-src/ext/standard/net.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/net.c -o ext/standard/net.lo
ext/standard/hrtime.lo: /root/php-src/ext/standard/hrtime.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/standard/hrtime.c -o ext/standard/hrtime.lo
ext/tokenizer/tokenizer.lo: /root/php-src/ext/tokenizer/tokenizer.c
	$(LIBTOOL) --mode=compile $(CC)  -Iext/tokenizer/ -I/root/php-src/ext/tokenizer/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/tokenizer/tokenizer.c -o ext/tokenizer/tokenizer.lo
ext/tokenizer/tokenizer_data.lo: /root/php-src/ext/tokenizer/tokenizer_data.c
	$(LIBTOOL) --mode=compile $(CC)  -Iext/tokenizer/ -I/root/php-src/ext/tokenizer/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/ext/tokenizer/tokenizer_data.c -o ext/tokenizer/tokenizer_data.lo
TSRM/TSRM.lo: /root/php-src/TSRM/TSRM.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -ITSRM/ -I/root/php-src/TSRM/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/TSRM/TSRM.c -o TSRM/TSRM.lo
TSRM/tsrm_strtok_r.lo: /root/php-src/TSRM/tsrm_strtok_r.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -ITSRM/ -I/root/php-src/TSRM/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/TSRM/tsrm_strtok_r.c -o TSRM/tsrm_strtok_r.lo
main/main.lo: /root/php-src/main/main.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/main.c -o main/main.lo
main/snprintf.lo: /root/php-src/main/snprintf.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/snprintf.c -o main/snprintf.lo
main/spprintf.lo: /root/php-src/main/spprintf.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/spprintf.c -o main/spprintf.lo
main/php_sprintf.lo: /root/php-src/main/php_sprintf.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/php_sprintf.c -o main/php_sprintf.lo
main/fopen_wrappers.lo: /root/php-src/main/fopen_wrappers.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/fopen_wrappers.c -o main/fopen_wrappers.lo
main/alloca.lo: /root/php-src/main/alloca.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/alloca.c -o main/alloca.lo
main/php_scandir.lo: /root/php-src/main/php_scandir.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/php_scandir.c -o main/php_scandir.lo
main/php_ini.lo: /root/php-src/main/php_ini.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/php_ini.c -o main/php_ini.lo
main/SAPI.lo: /root/php-src/main/SAPI.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/SAPI.c -o main/SAPI.lo
main/rfc1867.lo: /root/php-src/main/rfc1867.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/rfc1867.c -o main/rfc1867.lo
main/php_content_types.lo: /root/php-src/main/php_content_types.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/php_content_types.c -o main/php_content_types.lo
main/strlcpy.lo: /root/php-src/main/strlcpy.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/strlcpy.c -o main/strlcpy.lo
main/strlcat.lo: /root/php-src/main/strlcat.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/strlcat.c -o main/strlcat.lo
main/explicit_bzero.lo: /root/php-src/main/explicit_bzero.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/explicit_bzero.c -o main/explicit_bzero.lo
main/mergesort.lo: /root/php-src/main/mergesort.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/mergesort.c -o main/mergesort.lo
main/reentrancy.lo: /root/php-src/main/reentrancy.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/reentrancy.c -o main/reentrancy.lo
main/php_variables.lo: /root/php-src/main/php_variables.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/php_variables.c -o main/php_variables.lo
main/php_ticks.lo: /root/php-src/main/php_ticks.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/php_ticks.c -o main/php_ticks.lo
main/network.lo: /root/php-src/main/network.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/network.c -o main/network.lo
main/php_open_temporary_file.lo: /root/php-src/main/php_open_temporary_file.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/php_open_temporary_file.c -o main/php_open_temporary_file.lo
main/output.lo: /root/php-src/main/output.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/output.c -o main/output.lo
main/getopt.lo: /root/php-src/main/getopt.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/getopt.c -o main/getopt.lo
main/php_syslog.lo: /root/php-src/main/php_syslog.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/php_syslog.c -o main/php_syslog.lo
main/fastcgi.lo: /root/php-src/main/fastcgi.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/fastcgi.c -o main/fastcgi.lo
main/streams/streams.lo: /root/php-src/main/streams/streams.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/streams/ -I/root/php-src/main/streams/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/streams/streams.c -o main/streams/streams.lo
main/streams/cast.lo: /root/php-src/main/streams/cast.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/streams/ -I/root/php-src/main/streams/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/streams/cast.c -o main/streams/cast.lo
main/streams/memory.lo: /root/php-src/main/streams/memory.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/streams/ -I/root/php-src/main/streams/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/streams/memory.c -o main/streams/memory.lo
main/streams/filter.lo: /root/php-src/main/streams/filter.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/streams/ -I/root/php-src/main/streams/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/streams/filter.c -o main/streams/filter.lo
main/streams/plain_wrapper.lo: /root/php-src/main/streams/plain_wrapper.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/streams/ -I/root/php-src/main/streams/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/streams/plain_wrapper.c -o main/streams/plain_wrapper.lo
main/streams/userspace.lo: /root/php-src/main/streams/userspace.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/streams/ -I/root/php-src/main/streams/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/streams/userspace.c -o main/streams/userspace.lo
main/streams/transports.lo: /root/php-src/main/streams/transports.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/streams/ -I/root/php-src/main/streams/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/streams/transports.c -o main/streams/transports.lo
main/streams/xp_socket.lo: /root/php-src/main/streams/xp_socket.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/streams/ -I/root/php-src/main/streams/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/streams/xp_socket.c -o main/streams/xp_socket.lo
main/streams/mmap.lo: /root/php-src/main/streams/mmap.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/streams/ -I/root/php-src/main/streams/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/streams/mmap.c -o main/streams/mmap.lo
main/streams/glob_wrapper.lo: /root/php-src/main/streams/glob_wrapper.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/streams/ -I/root/php-src/main/streams/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/main/streams/glob_wrapper.c -o main/streams/glob_wrapper.lo
main/internal_functions.lo: main/internal_functions.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c main/internal_functions.c -o main/internal_functions.lo
main/internal_functions_cli.lo: main/internal_functions_cli.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c main/internal_functions_cli.c -o main/internal_functions_cli.lo
Zend/zend_language_parser.lo: /root/php-src/Zend/zend_language_parser.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_language_parser.c -o Zend/zend_language_parser.lo
Zend/zend_language_scanner.lo: /root/php-src/Zend/zend_language_scanner.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_language_scanner.c -o Zend/zend_language_scanner.lo
Zend/zend_ini_parser.lo: /root/php-src/Zend/zend_ini_parser.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_ini_parser.c -o Zend/zend_ini_parser.lo
Zend/zend_ini_scanner.lo: /root/php-src/Zend/zend_ini_scanner.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_ini_scanner.c -o Zend/zend_ini_scanner.lo
Zend/zend_alloc.lo: /root/php-src/Zend/zend_alloc.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_alloc.c -o Zend/zend_alloc.lo
Zend/zend_compile.lo: /root/php-src/Zend/zend_compile.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_compile.c -o Zend/zend_compile.lo
Zend/zend_constants.lo: /root/php-src/Zend/zend_constants.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_constants.c -o Zend/zend_constants.lo
Zend/zend_dtrace.lo: /root/php-src/Zend/zend_dtrace.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_dtrace.c -o Zend/zend_dtrace.lo
Zend/zend_execute_API.lo: /root/php-src/Zend/zend_execute_API.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_execute_API.c -o Zend/zend_execute_API.lo
Zend/zend_highlight.lo: /root/php-src/Zend/zend_highlight.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_highlight.c -o Zend/zend_highlight.lo
Zend/zend_llist.lo: /root/php-src/Zend/zend_llist.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_llist.c -o Zend/zend_llist.lo
Zend/zend_vm_opcodes.lo: /root/php-src/Zend/zend_vm_opcodes.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_vm_opcodes.c -o Zend/zend_vm_opcodes.lo
Zend/zend_opcode.lo: /root/php-src/Zend/zend_opcode.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_opcode.c -o Zend/zend_opcode.lo
Zend/zend_operators.lo: /root/php-src/Zend/zend_operators.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_operators.c -o Zend/zend_operators.lo
Zend/zend_ptr_stack.lo: /root/php-src/Zend/zend_ptr_stack.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_ptr_stack.c -o Zend/zend_ptr_stack.lo
Zend/zend_stack.lo: /root/php-src/Zend/zend_stack.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_stack.c -o Zend/zend_stack.lo
Zend/zend_variables.lo: /root/php-src/Zend/zend_variables.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_variables.c -o Zend/zend_variables.lo
Zend/zend.lo: /root/php-src/Zend/zend.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend.c -o Zend/zend.lo
Zend/zend_API.lo: /root/php-src/Zend/zend_API.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_API.c -o Zend/zend_API.lo
Zend/zend_extensions.lo: /root/php-src/Zend/zend_extensions.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_extensions.c -o Zend/zend_extensions.lo
Zend/zend_hash.lo: /root/php-src/Zend/zend_hash.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_hash.c -o Zend/zend_hash.lo
Zend/zend_list.lo: /root/php-src/Zend/zend_list.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_list.c -o Zend/zend_list.lo
Zend/zend_builtin_functions.lo: /root/php-src/Zend/zend_builtin_functions.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_builtin_functions.c -o Zend/zend_builtin_functions.lo
Zend/zend_sprintf.lo: /root/php-src/Zend/zend_sprintf.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_sprintf.c -o Zend/zend_sprintf.lo
Zend/zend_ini.lo: /root/php-src/Zend/zend_ini.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_ini.c -o Zend/zend_ini.lo
Zend/zend_sort.lo: /root/php-src/Zend/zend_sort.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_sort.c -o Zend/zend_sort.lo
Zend/zend_multibyte.lo: /root/php-src/Zend/zend_multibyte.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_multibyte.c -o Zend/zend_multibyte.lo
Zend/zend_ts_hash.lo: /root/php-src/Zend/zend_ts_hash.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_ts_hash.c -o Zend/zend_ts_hash.lo
Zend/zend_stream.lo: /root/php-src/Zend/zend_stream.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_stream.c -o Zend/zend_stream.lo
Zend/zend_iterators.lo: /root/php-src/Zend/zend_iterators.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_iterators.c -o Zend/zend_iterators.lo
Zend/zend_interfaces.lo: /root/php-src/Zend/zend_interfaces.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_interfaces.c -o Zend/zend_interfaces.lo
Zend/zend_exceptions.lo: /root/php-src/Zend/zend_exceptions.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_exceptions.c -o Zend/zend_exceptions.lo
Zend/zend_strtod.lo: /root/php-src/Zend/zend_strtod.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_strtod.c -o Zend/zend_strtod.lo
Zend/zend_gc.lo: /root/php-src/Zend/zend_gc.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_gc.c -o Zend/zend_gc.lo
Zend/zend_closures.lo: /root/php-src/Zend/zend_closures.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_closures.c -o Zend/zend_closures.lo
Zend/zend_float.lo: /root/php-src/Zend/zend_float.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_float.c -o Zend/zend_float.lo
Zend/zend_string.lo: /root/php-src/Zend/zend_string.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_string.c -o Zend/zend_string.lo
Zend/zend_signal.lo: /root/php-src/Zend/zend_signal.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_signal.c -o Zend/zend_signal.lo
Zend/zend_generators.lo: /root/php-src/Zend/zend_generators.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_generators.c -o Zend/zend_generators.lo
Zend/zend_virtual_cwd.lo: /root/php-src/Zend/zend_virtual_cwd.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_virtual_cwd.c -o Zend/zend_virtual_cwd.lo
Zend/zend_ast.lo: /root/php-src/Zend/zend_ast.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_ast.c -o Zend/zend_ast.lo
Zend/zend_objects.lo: /root/php-src/Zend/zend_objects.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_objects.c -o Zend/zend_objects.lo
Zend/zend_object_handlers.lo: /root/php-src/Zend/zend_object_handlers.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_object_handlers.c -o Zend/zend_object_handlers.lo
Zend/zend_objects_API.lo: /root/php-src/Zend/zend_objects_API.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_objects_API.c -o Zend/zend_objects_API.lo
Zend/zend_default_classes.lo: /root/php-src/Zend/zend_default_classes.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_default_classes.c -o Zend/zend_default_classes.lo
Zend/zend_inheritance.lo: /root/php-src/Zend/zend_inheritance.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_inheritance.c -o Zend/zend_inheritance.lo
Zend/zend_smart_str.lo: /root/php-src/Zend/zend_smart_str.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_smart_str.c -o Zend/zend_smart_str.lo
Zend/zend_cpuinfo.lo: /root/php-src/Zend/zend_cpuinfo.c
	$(LIBTOOL) --mode=compile $(CC) 	-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_cpuinfo.c -o Zend/zend_cpuinfo.lo
Zend/zend_execute.lo: /root/php-src/Zend/zend_execute.c
	$(LIBTOOL) --mode=compile $(CC) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -c /root/php-src/Zend/zend_execute.c -o Zend/zend_execute.lo
