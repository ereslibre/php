srcdir = /root/php-src
builddir = /root/php-src
top_srcdir = /root/php-src
top_builddir = /root/php-src
EGREP = /usr/bin/grep -E
SED = /usr/bin/sed
CONFIGURE_COMMAND = './configure' '--prefix=/php-prefix' '--without-libxml' '--disable-xml' '--without-sqlite3' '--disable-dom' '--without-pdo-sqlite' '--disable-simplexml' '--disable-xmlreader' '--disable-xmlwriter' '--without-pcre-jit' '--without-iconv' '--disable-all' '--disable-opcache' '--disable-phar' '--disable-fiber-asm' '--disable-zend-signals' '--target=wasm32-unknown-wasi' '--host=wasm32-unknown-wasi' 'host_alias=wasm32-musl-wasi' 'target_alias=wasm32-unknown-wasi'
CONFIGURE_OPTIONS = '--prefix=/php-prefix' '--without-libxml' '--disable-xml' '--without-sqlite3' '--disable-dom' '--without-pdo-sqlite' '--disable-simplexml' '--disable-xmlreader' '--disable-xmlwriter' '--without-pcre-jit' '--without-iconv' '--disable-all' '--disable-opcache' '--disable-phar' '--disable-fiber-asm' '--disable-zend-signals' '--target=wasm32-unknown-wasi' '--host=wasm32-unknown-wasi' 'host_alias=wasm32-musl-wasi' 'target_alias=wasm32-unknown-wasi'
PHP_MAJOR_VERSION = 8
PHP_MINOR_VERSION = 1
PHP_RELEASE_VERSION = 9
PHP_EXTRA_VERSION =
AWK = nawk
YFLAGS = -Wall
YACC = bison
RE2C = re2c
PHP =
RE2C_FLAGS =
SHLIB_SUFFIX_NAME = so
SHLIB_DL_SUFFIX_NAME = so
PHP_CLI_OBJS = sapi/cli/php_cli.lo sapi/cli/php_http_parser.lo sapi/cli/php_cli_server.lo sapi/cli/ps_title.lo sapi/cli/php_cli_process_title.lo
PHP_EXECUTABLE = $(top_builddir)/$(SAPI_CLI_PATH)
SAPI_CLI_PATH = sapi/cli/php
#BUILD_CLI = $(LIBTOOL) --mode=link /php/wasi-sdk-16.0/bin/wasm-ld --entry __main_argc_argv  $(PHP_RPATHS) $(PHP_GLOBAL_OBJS:.lo=.o) $(PHP_BINARY_OBJS:.lo=.o) $(PHP_CLI_OBJS:.lo=.o) $(ZEND_EXTRA_LIBS) -o $(SAPI_CLI_PATH)
BUILD_CLI = $(LIBTOOL) --mode=link /php/wasi-sdk-16.0/bin/clang --target=wasm32-wasi -lwasi-emulated-mman -lwasi-emulated-signal -lwasi-emulated-process-clocks -lwasi-emulated-getpid  $(PHP_RPATHS) $(PHP_GLOBAL_OBJS:.lo=.o) $(PHP_BINARY_OBJS:.lo=.o) $(PHP_CLI_OBJS:.lo=.o) $(ZEND_EXTRA_LIBS) -o $(SAPI_CLI_PATH)
PHP_PHPDBG_CFLAGS = -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1
PHP_PHPDBG_FILES = phpdbg.c phpdbg_parser.c phpdbg_lexer.c phpdbg_prompt.c phpdbg_help.c phpdbg_break.c phpdbg_print.c phpdbg_bp.c phpdbg_list.c phpdbg_utils.c phpdbg_info.c phpdbg_cmd.c phpdbg_set.c phpdbg_frame.c phpdbg_watch.c phpdbg_btree.c phpdbg_sigsafe.c phpdbg_io.c phpdbg_out.c
PHPDBG_EXTRA_LIBS =
PHP_PHPDBG_OBJS = sapi/phpdbg/phpdbg.lo sapi/phpdbg/phpdbg_parser.lo sapi/phpdbg/phpdbg_lexer.lo sapi/phpdbg/phpdbg_prompt.lo sapi/phpdbg/phpdbg_help.lo sapi/phpdbg/phpdbg_break.lo sapi/phpdbg/phpdbg_print.lo sapi/phpdbg/phpdbg_bp.lo sapi/phpdbg/phpdbg_list.lo sapi/phpdbg/phpdbg_utils.lo sapi/phpdbg/phpdbg_info.lo sapi/phpdbg/phpdbg_cmd.lo sapi/phpdbg/phpdbg_set.lo sapi/phpdbg/phpdbg_frame.lo sapi/phpdbg/phpdbg_watch.lo sapi/phpdbg/phpdbg_btree.lo sapi/phpdbg/phpdbg_sigsafe.lo sapi/phpdbg/phpdbg_io.lo sapi/phpdbg/phpdbg_out.lo
BUILD_BINARY = sapi/phpdbg/phpdbg
BUILD_SHARED = sapi/phpdbg/libphpdbg.la
BUILD_PHPDBG = $(LIBTOOL) --mode=link $(CC) -export-dynamic $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(EXTRA_LDFLAGS_PROGRAM) $(LDFLAGS) $(PHP_RPATHS) $(PHP_GLOBAL_OBJS:.lo=.o) $(PHP_BINARY_OBJS:.lo=.o) $(PHP_PHPDBG_OBJS:.lo=.o) $(EXTRA_LIBS) $(PHPDBG_EXTRA_LIBS) $(ZEND_EXTRA_LIBS) $(PHP_FRAMEWORKS) -o $(BUILD_BINARY)
BUILD_PHPDBG_SHARED = $(LIBTOOL) --mode=link $(CC) -shared -Wl,-soname,libphpdbg.so -export-dynamic $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(EXTRA_LDFLAGS_PROGRAM) $(LDFLAGS) $(PHP_RPATHS) $(PHP_GLOBAL_OBJS) $(PHP_BINARY_OBJS) $(PHP_PHPDBG_OBJS) $(EXTRA_LIBS) $(PHPDBG_EXTRA_LIBS) $(ZEND_EXTRA_LIBS) \-DPHPDBG_SHARED -o $(BUILD_SHARED)
PHP_CGI_OBJS = sapi/cgi/cgi_main.lo
SAPI_CGI_PATH = sapi/cgi/php-cgi
BUILD_CGI = $(LIBTOOL) --mode=link $(CC) -export-dynamic $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(EXTRA_LDFLAGS_PROGRAM) $(LDFLAGS) $(PHP_RPATHS) $(PHP_GLOBAL_OBJS:.lo=.o) $(PHP_BINARY_OBJS:.lo=.o) $(PHP_FASTCGI_OBJS:.lo=.o) $(PHP_CGI_OBJS:.lo=.o) $(EXTRA_LIBS) $(ZEND_EXTRA_LIBS) -o $(SAPI_CGI_PATH)
PROG_SENDMAIL = /usr/sbin/sendmail
PHP_INSTALLED_SAPIS = cli phpdbg cgi
PHP_FASTCGI_OBJS = main/fastcgi.lo
PHP_SAPI_OBJS = main/internal_functions.lo
PHP_BINARY_OBJS = main/internal_functions_cli.lo
PHP_GLOBAL_OBJS = ext/date/php_date.lo ext/date/lib/astro.lo ext/date/lib/dow.lo ext/date/lib/parse_date.lo ext/date/lib/parse_tz.lo ext/date/lib/parse_posix.lo ext/date/lib/timelib.lo ext/date/lib/tm2unixtime.lo ext/date/lib/unixtime2tm.lo ext/date/lib/parse_iso_intervals.lo ext/date/lib/interval.lo ext/pcre/pcre2lib/pcre2_auto_possess.lo ext/pcre/pcre2lib/pcre2_chartables.lo ext/pcre/pcre2lib/pcre2_compile.lo ext/pcre/pcre2lib/pcre2_config.lo ext/pcre/pcre2lib/pcre2_context.lo ext/pcre/pcre2lib/pcre2_dfa_match.lo ext/pcre/pcre2lib/pcre2_error.lo ext/pcre/pcre2lib/pcre2_jit_compile.lo ext/pcre/pcre2lib/pcre2_maketables.lo ext/pcre/pcre2lib/pcre2_match.lo ext/pcre/pcre2lib/pcre2_match_data.lo ext/pcre/pcre2lib/pcre2_newline.lo ext/pcre/pcre2lib/pcre2_ord2utf.lo ext/pcre/pcre2lib/pcre2_pattern_info.lo ext/pcre/pcre2lib/pcre2_serialize.lo ext/pcre/pcre2lib/pcre2_string_utils.lo ext/pcre/pcre2lib/pcre2_study.lo ext/pcre/pcre2lib/pcre2_substitute.lo ext/pcre/pcre2lib/pcre2_substring.lo ext/pcre/pcre2lib/pcre2_tables.lo ext/pcre/pcre2lib/pcre2_ucd.lo ext/pcre/pcre2lib/pcre2_valid_utf.lo ext/pcre/pcre2lib/pcre2_xclass.lo ext/pcre/pcre2lib/pcre2_find_bracket.lo ext/pcre/pcre2lib/pcre2_convert.lo ext/pcre/pcre2lib/pcre2_extuni.lo ext/pcre/pcre2lib/pcre2_script_run.lo ext/pcre/php_pcre.lo ext/hash/hash.lo ext/hash/hash_md.lo ext/hash/hash_sha.lo ext/hash/hash_ripemd.lo ext/hash/hash_haval.lo ext/hash/hash_tiger.lo ext/hash/hash_gost.lo ext/hash/hash_snefru.lo ext/hash/hash_whirlpool.lo ext/hash/hash_adler32.lo ext/hash/hash_crc32.lo ext/hash/hash_fnv.lo ext/hash/hash_joaat.lo ext/hash/sha3/generic32lc/KeccakP-1600-inplace32BI.lo ext/hash/sha3/generic32lc/KeccakHash.lo ext/hash/sha3/generic32lc/KeccakSponge.lo ext/hash/hash_sha3.lo ext/hash/murmur/PMurHash.lo ext/hash/murmur/PMurHash128.lo ext/hash/hash_murmur.lo ext/hash/hash_xxhash.lo ext/json/json.lo ext/json/json_encoder.lo ext/json/json_parser.lo ext/json/json_scanner.lo ext/reflection/php_reflection.lo ext/spl/php_spl.lo ext/spl/spl_functions.lo ext/spl/spl_iterators.lo ext/spl/spl_array.lo ext/spl/spl_directory.lo ext/spl/spl_exceptions.lo ext/spl/spl_observer.lo ext/spl/spl_dllist.lo ext/spl/spl_heap.lo ext/spl/spl_fixedarray.lo ext/standard/crypt_freesec.lo ext/standard/crypt_blowfish.lo ext/standard/crypt_sha512.lo ext/standard/crypt_sha256.lo ext/standard/php_crypt_r.lo ext/standard/array.lo ext/standard/base64.lo ext/standard/basic_functions.lo ext/standard/browscap.lo ext/standard/crc32.lo ext/standard/crypt.lo ext/standard/datetime.lo ext/standard/dir.lo ext/standard/dl.lo ext/standard/dns.lo ext/standard/exec.lo ext/standard/file.lo ext/standard/filestat.lo ext/standard/flock_compat.lo ext/standard/formatted_print.lo ext/standard/fsock.lo ext/standard/head.lo ext/standard/html.lo ext/standard/image.lo ext/standard/info.lo ext/standard/iptc.lo ext/standard/lcg.lo ext/standard/link.lo ext/standard/mail.lo ext/standard/math.lo ext/standard/md5.lo ext/standard/metaphone.lo ext/standard/microtime.lo ext/standard/pack.lo ext/standard/pageinfo.lo ext/standard/quot_print.lo ext/standard/rand.lo ext/standard/mt_rand.lo ext/standard/soundex.lo ext/standard/string.lo ext/standard/scanf.lo ext/standard/syslog.lo ext/standard/type.lo ext/standard/uniqid.lo ext/standard/url.lo ext/standard/var.lo ext/standard/versioning.lo ext/standard/assert.lo ext/standard/strnatcmp.lo ext/standard/levenshtein.lo ext/standard/incomplete_class.lo ext/standard/url_scanner_ex.lo ext/standard/ftp_fopen_wrapper.lo ext/standard/http_fopen_wrapper.lo ext/standard/php_fopen_wrapper.lo ext/standard/credits.lo ext/standard/css.lo ext/standard/var_unserializer.lo ext/standard/ftok.lo ext/standard/sha1.lo ext/standard/user_filters.lo ext/standard/uuencode.lo ext/standard/filters.lo ext/standard/proc_open.lo ext/standard/streamsfuncs.lo ext/standard/http.lo ext/standard/password.lo ext/standard/random.lo ext/standard/net.lo ext/standard/hrtime.lo ext/standard/crc32_x86.lo TSRM/TSRM.lo main/main.lo main/snprintf.lo main/spprintf.lo main/fopen_wrappers.lo main/alloca.lo main/php_scandir.lo main/php_ini.lo main/SAPI.lo main/rfc1867.lo main/php_content_types.lo main/strlcpy.lo main/strlcat.lo main/explicit_bzero.lo main/reentrancy.lo main/php_variables.lo main/php_ticks.lo main/network.lo main/php_open_temporary_file.lo main/output.lo main/getopt.lo main/php_syslog.lo main/streams/streams.lo main/streams/cast.lo main/streams/memory.lo main/streams/filter.lo main/streams/plain_wrapper.lo main/streams/userspace.lo main/streams/transports.lo main/streams/xp_socket.lo main/streams/mmap.lo main/streams/glob_wrapper.lo Zend/zend_language_parser.lo Zend/zend_language_scanner.lo Zend/zend_ini_parser.lo Zend/zend_ini_scanner.lo Zend/zend_alloc.lo Zend/zend_compile.lo Zend/zend_constants.lo Zend/zend_dtrace.lo Zend/zend_execute_API.lo Zend/zend_highlight.lo Zend/zend_llist.lo Zend/zend_vm_opcodes.lo Zend/zend_opcode.lo Zend/zend_operators.lo Zend/zend_ptr_stack.lo Zend/zend_stack.lo Zend/zend_variables.lo Zend/zend.lo Zend/zend_API.lo Zend/zend_extensions.lo Zend/zend_hash.lo Zend/zend_list.lo Zend/zend_builtin_functions.lo Zend/zend_attributes.lo Zend/zend_execute.lo Zend/zend_ini.lo Zend/zend_sort.lo Zend/zend_multibyte.lo Zend/zend_stream.lo Zend/zend_iterators.lo Zend/zend_interfaces.lo Zend/zend_exceptions.lo Zend/zend_strtod.lo Zend/zend_gc.lo Zend/zend_closures.lo Zend/zend_weakrefs.lo Zend/zend_float.lo Zend/zend_string.lo Zend/zend_signal.lo Zend/zend_generators.lo Zend/zend_virtual_cwd.lo Zend/zend_ast.lo Zend/zend_objects.lo Zend/zend_object_handlers.lo Zend/zend_objects_API.lo Zend/zend_default_classes.lo Zend/zend_inheritance.lo Zend/zend_smart_str.lo Zend/zend_cpuinfo.lo Zend/zend_gdb.lo Zend/zend_observer.lo Zend/zend_system_id.lo Zend/zend_enum.lo Zend/zend_fibers.lo Zend/Optimizer/zend_optimizer.lo Zend/Optimizer/pass1.lo Zend/Optimizer/pass3.lo Zend/Optimizer/optimize_func_calls.lo Zend/Optimizer/block_pass.lo Zend/Optimizer/optimize_temp_vars_5.lo Zend/Optimizer/nop_removal.lo Zend/Optimizer/compact_literals.lo Zend/Optimizer/zend_cfg.lo Zend/Optimizer/zend_dfg.lo Zend/Optimizer/dfa_pass.lo Zend/Optimizer/zend_ssa.lo Zend/Optimizer/zend_inference.lo Zend/Optimizer/zend_func_info.lo Zend/Optimizer/zend_call_graph.lo Zend/Optimizer/sccp.lo Zend/Optimizer/scdf.lo Zend/Optimizer/dce.lo Zend/Optimizer/escape_analysis.lo Zend/Optimizer/compact_vars.lo Zend/Optimizer/zend_dump.lo
PHP_BINARIES = cli phpdbg cgi
PHP_MODULES =
PHP_ZEND_EX =
EXT_LIBS =
abs_builddir = /root/php-src
abs_srcdir = /root/php-src
bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
exec_prefix = ${prefix}
program_prefix = wasm32-unknown-wasi-
program_suffix =
includedir = ${prefix}/include
libdir = ${exec_prefix}/lib/php
mandir = ${datarootdir}/man
phplibdir = /root/php-src/modules
phptempdir = /root/php-src/libs
prefix = /php-prefix
localstatedir = ${prefix}/var
datadir = ${datarootdir}/php
datarootdir = /php-prefix/php
sysconfdir = ${prefix}/etc
EXEEXT =
CC = /php/wasi-sdk-16.0/bin/clang --sysroot=/php/wasi-sysroot -D_GNU_SOURCE=1 -D_WASI_EMULATED_MMAN=1 -D_WASI_EMULATED_SIGNAL=1 -D_WASI_EMULATED_PROCESS_CLOCKS=1 -D_WASI_EMULATED_GETPID=1 -D_POSIX_SOURCE=1 -DHAVE_FORK=0 -I/php/wasi-sdk-16.0/share/wasi-sysroot/include
BUILD_CC = gcc
CFLAGS = $(CFLAGS_CLEAN) -prefer-non-pic -static -lwasi-emulated-mman -lwasi-emulated-signal -lwasi-emulated-process-clocks -lwasi-emulated-getpid
CFLAGS_CLEAN = -fno-common -Wstrict-prototypes -Wall -Wextra -Wno-strict-aliasing -Wno-unused-parameter -Wno-sign-compare -g -O2 -fvisibility=hidden $(PROF_FLAGS)
CPP = /php/wasi-sdk-16.0/bin/clang --sysroot=/php/wasi-sysroot -D_GNU_SOURCE=1 -D_WASI_EMULATED_MMAN=1 -D_WASI_EMULATED_SIGNAL=1 -D_WASI_EMULATED_PROCESS_CLOCKS=1 -D_WASI_EMULATED_GETPID=1 -D_POSIX_SOURCE=1 -DHAVE_FORK=0 -I/php/wasi-sdk-16.0/share/wasi-sysroot/include -E
CPPFLAGS =
CXX =
CXXFLAGS = -prefer-non-pic -static $(PROF_FLAGS)
CXXFLAGS_CLEAN =
DEBUG_CFLAGS =
EXTENSION_DIR = /php-prefix/lib/php/extensions/no-debug-non-zts-20210902
EXTRA_LDFLAGS = --target=wasm32-wasi -lwasi-emulated-mman -lwasi-emulated-signal -lwasi-emulated-process-clocks -lwasi-emulated-getpid
EXTRA_LDFLAGS_PROGRAM =
EXTRA_LIBS = -lrt -lm
ZEND_EXTRA_LIBS =
INCLUDES = -I/root/php-src/ext/date/lib -I$(top_builddir)/TSRM -I$(top_builddir)/Zend
EXTRA_INCLUDES =
INCLUDE_PATH = .:
INSTALL_IT =
LFLAGS =
LIBTOOL = $(SHELL) $(top_builddir)/libtool --silent --preserve-dup-deps --tag CC
LN_S = ln -s
NATIVE_RPATHS =
PEAR_INSTALLDIR =
PHP_LDFLAGS =
PHP_LIBS =
OVERALL_TARGET =
PHP_RPATHS =
PHP_SAPI = none
PHP_VERSION = 8.1.9
PHP_VERSION_ID = 80109
SHELL = /bin/bash
SHARED_LIBTOOL = $(LIBTOOL)
PHP_FRAMEWORKS =
PHP_FRAMEWORKPATH =
INSTALL_HEADERS = sapi/cli/cli.h ext/date/php_date.h ext/date/lib/timelib.h ext/date/lib/timelib_config.h ext/pcre/php_pcre.h ext/pcre/pcre2lib/ ext/hash/php_hash.h ext/hash/php_hash_md.h ext/hash/php_hash_sha.h ext/hash/php_hash_ripemd.h ext/hash/php_hash_haval.h ext/hash/php_hash_tiger.h ext/hash/php_hash_gost.h ext/hash/php_hash_snefru.h ext/hash/php_hash_whirlpool.h ext/hash/php_hash_adler32.h ext/hash/php_hash_crc32.h ext/hash/php_hash_fnv.h ext/hash/php_hash_joaat.h ext/hash/php_hash_sha3.h ext/hash/php_hash_murmur.h ext/hash/php_hash_xxhash.h ext/json/php_json.h ext/json/php_json_parser.h ext/json/php_json_scanner.h ext/spl/php_spl.h ext/spl/spl_array.h ext/spl/spl_directory.h ext/spl/spl_engine.h ext/spl/spl_exceptions.h ext/spl/spl_functions.h ext/spl/spl_iterators.h ext/spl/spl_observer.h ext/spl/spl_dllist.h ext/spl/spl_heap.h ext/spl/spl_fixedarray.h ext/standard/ Zend/ TSRM/ include/ main/ main/streams/ Zend/Optimizer/zend_call_graph.h Zend/Optimizer/zend_cfg.h Zend/Optimizer/zend_dfg.h Zend/Optimizer/zend_dump.h Zend/Optimizer/zend_func_info.h Zend/Optimizer/zend_inference.h Zend/Optimizer/zend_optimizer.h Zend/Optimizer/zend_ssa.h
all_targets = $(OVERALL_TARGET) $(PHP_MODULES) $(PHP_ZEND_EX) $(PHP_BINARIES)
install_targets = install-binaries install-build install-headers install-programs
install_binary_targets = install-cli install-phpdbg install-cgi
mkinstalldirs = $(top_srcdir)/build/shtool mkdir -p
INSTALL = $(top_srcdir)/build/shtool install -c
INSTALL_DATA = $(INSTALL) -m 644

DEFS = -I$(top_builddir)/include -I$(top_builddir)/main -I$(top_srcdir)
COMMON_FLAGS = $(DEFS) $(INCLUDES) $(EXTRA_INCLUDES) $(CPPFLAGS) $(PHP_FRAMEWORKPATH)

all: $(all_targets)
	@echo
	@echo "Build complete."
	@echo "Don't forget to run 'make test'."
	@echo

build-modules: $(PHP_MODULES) $(PHP_ZEND_EX)

build-binaries: $(PHP_BINARIES)

libphp.la: $(PHP_GLOBAL_OBJS) $(PHP_SAPI_OBJS)
	$(LIBTOOL) --mode=link $(CC) -lwasi-emulated-mman -lwasi-emulated-signal -lwasi-emulated-process-clocks -lwasi-emulated-getpid $(LIBPHP_CFLAGS) $(CFLAGS) $(EXTRA_CFLAGS) -rpath $(phptempdir) $(EXTRA_LDFLAGS) $(LDFLAGS) $(PHP_RPATHS) $(PHP_GLOBAL_OBJS) $(PHP_SAPI_OBJS) $(EXTRA_LIBS) $(ZEND_EXTRA_LIBS) -o $@
	-@$(LIBTOOL) --silent --mode=install cp $@ $(phptempdir)/$@ >/dev/null 2>&1

libs/libphp.bundle: $(PHP_GLOBAL_OBJS) $(PHP_SAPI_OBJS)
	$(CC) $(MH_BUNDLE_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(LDFLAGS) $(EXTRA_LDFLAGS) $(PHP_GLOBAL_OBJS:.lo=.o) $(PHP_SAPI_OBJS:.lo=.o) $(PHP_FRAMEWORKS) $(EXTRA_LIBS) $(ZEND_EXTRA_LIBS) -o $@ && cp $@ libs/libphp.so

install: $(all_targets) $(install_targets)

install-sapi: $(OVERALL_TARGET)
	@echo "Installing PHP SAPI module:       $(PHP_SAPI)"
	-@$(mkinstalldirs) $(INSTALL_ROOT)$(bindir)
	-@if test ! -r $(phptempdir)/libphp.$(SHLIB_DL_SUFFIX_NAME); then \
		for i in 0.0.0 0.0 0; do \
			if test -r $(phptempdir)/libphp.$(SHLIB_DL_SUFFIX_NAME).$$i; then \
				$(LN_S) $(phptempdir)/libphp.$(SHLIB_DL_SUFFIX_NAME).$$i $(phptempdir)/libphp.$(SHLIB_DL_SUFFIX_NAME); \
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
			. $$i; \
			if test "x$$dlname" != "xdl_test.so"; then \
				$(top_srcdir)/build/shtool echo -n -- " -d extension=$$dlname"; \
			fi; \
		done; \
	fi; \
	if test "x$(PHP_ZEND_EX)" != "x"; then \
		for i in $(PHP_ZEND_EX)""; do \
			. $$i; $(top_srcdir)/build/shtool echo -n -- " -d zend_extension=$(top_builddir)/modules/$$dlname"; \
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
	find . -name \*.lo -o -name \*.o -o -name \*.dep | xargs rm -f
	find . -name \*.la -o -name \*.a | xargs rm -f
	find . -name \*.so | xargs rm -f
	find . -name .libs -a -type d|xargs rm -rf
	rm -f libphp.la $(SAPI_CLI_PATH) $(SAPI_CGI_PATH) $(SAPI_LITESPEED_PATH) $(SAPI_FPM_PATH) $(OVERALL_TARGET) modules/* libs/*
	rm -f ext/opcache/jit/zend_jit_x86.c
	rm -f ext/opcache/jit/zend_jit_arm64.c

distclean: clean
	rm -f Makefile config.cache config.log config.status Makefile.objects Makefile.fragments libtool main/php_config.h main/internal_functions_cli.c main/internal_functions.c Zend/zend_dtrace_gen.h Zend/zend_dtrace_gen.h.bak Zend/zend_config.h
	rm -f main/build-defs.h scripts/phpize
	rm -f ext/date/lib/timelib_config.h ext/mbstring/libmbfl/config.h ext/oci8/oci8_dtrace_gen.h ext/oci8/oci8_dtrace_gen.h.bak
	rm -f scripts/man1/phpize.1 scripts/php-config scripts/man1/php-config.1 sapi/cli/php.1 sapi/cgi/php-cgi.1 sapi/phpdbg/phpdbg.1 ext/phar/phar.1 ext/phar/phar.phar.1
	rm -f sapi/fpm/php-fpm.conf sapi/fpm/init.d.php-fpm sapi/fpm/php-fpm.service sapi/fpm/php-fpm.8 sapi/fpm/status.html
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
	rm -f libphp.la $(SAPI_CLI_PATH) $(SAPI_CGI_PATH) $(SAPI_LITESPEED_PATH) $(SAPI_FPM_PATH) $(OVERALL_TARGET) modules/* libs/*

prof-use:
	CCACHE_DISABLE=1 $(MAKE) PROF_FLAGS=-fprofile-use all

%_arginfo.h: %.stub.php
	@if test -e "$(top_srcdir)/build/gen_stub.php"; then \
		if test ! -z "$(PHP)"; then \
			echo Parse $< to generate $@;\
			$(PHP) $(top_srcdir)/build/gen_stub.php $<; \
		elif test ! -z "$(PHP_EXECUTABLE)" && test -x "$(PHP_EXECUTABLE)"; then \
			echo Parse $< to generate $@;\
			$(PHP_EXECUTABLE) $(top_srcdir)/build/gen_stub.php $<; \
		fi; \
	fi;

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
	@$(YACC) $(YFLAGS) -v -d /root/php-src/sapi/phpdbg/phpdbg_parser.y -o $@

install-phpdbg: $(BUILD_BINARY)
	@echo "Installing phpdbg binary:         $(INSTALL_ROOT)$(bindir)/"
	@$(mkinstalldirs) $(INSTALL_ROOT)$(bindir)
	@$(mkinstalldirs) $(INSTALL_ROOT)$(localstatedir)/log
	@$(mkinstalldirs) $(INSTALL_ROOT)$(localstatedir)/run
	@$(INSTALL) -m 0755 $(BUILD_BINARY) $(INSTALL_ROOT)$(bindir)/$(program_prefix)phpdbg$(program_suffix)$(EXEEXT)
	@echo "Installing phpdbg man page:       $(INSTALL_ROOT)$(mandir)/man1/"
	@$(mkinstalldirs) $(INSTALL_ROOT)$(mandir)/man1
	@$(INSTALL_DATA) sapi/phpdbg/phpdbg.1 $(INSTALL_ROOT)$(mandir)/man1/$(program_prefix)phpdbg$(program_suffix).1
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
/root/php-src/ext/json/json_scanner.c: /root/php-src/ext/json/json_scanner.re
	@$(RE2C) $(RE2C_FLAGS) -t /root/php-src/ext/json/php_json_scanner_defs.h --no-generation-date -bci -o $@ /root/php-src/ext/json/json_scanner.re

/root/php-src/ext/json/json_parser.tab.c: /root/php-src/ext/json/json_parser.y
	@$(YACC) $(YFLAGS) --defines -l /root/php-src/ext/json/json_parser.y -o $@
/root/php-src/ext/standard/var_unserializer.c: /root/php-src/ext/standard/var_unserializer.re
	@(cd $(top_srcdir); $(RE2C) $(RE2C_FLAGS) --no-generation-date -b -o ext/standard/var_unserializer.c ext/standard/var_unserializer.re)

/root/php-src/ext/standard/url_scanner_ex.c: /root/php-src/ext/standard/url_scanner_ex.re
	@(cd $(top_srcdir); $(RE2C) $(RE2C_FLAGS) --no-generation-date -b -o ext/standard/url_scanner_ex.c	ext/standard/url_scanner_ex.re)

ext/standard/info.lo: ext/standard/../../main/build-defs.h

ext/standard/basic_functions.lo: $(top_srcdir)/Zend/zend_language_parser.h
#
# Build environment install
#

phpincludedir = $(includedir)/php
phpbuilddir = $(libdir)/build

BUILD_FILES = \
	scripts/phpize.m4 \
	build/libtool.m4 \
	build/ltmain.sh \
	build/ax_check_compile_flag.m4 \
	build/ax_gcc_func_attribute.m4 \
	build/php_cxx_compile_stdcxx.m4 \
	build/pkg.m4 \
	build/Makefile.global \
	build/php.m4 \
	build/gen_stub.php \
	run-tests.php

BUILD_FILES_EXEC = \
	build/shtool \
	build/config.guess \
	build/config.sub

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
# Tweak zendparse to be exported through ZEND_API. This has to be revisited once
# bison supports foreign skeletons and that bison version is used. Read
# https://git.savannah.gnu.org/cgit/bison.git/tree/data/README.md for more.
	@$(YACC) $(YFLAGS) -v -d /root/php-src/Zend/zend_language_parser.y -o $@
	@$(SED) -e 's,^int zendparse\(.*\),ZEND_API int zendparse\1,g' < $@ \
	> $@.tmp && \
	mv $@.tmp $@
	@$(SED) -e 's,^int zendparse\(.*\),ZEND_API int zendparse\1,g' < /root/php-src/Zend/zend_language_parser.h \
	> /root/php-src/Zend/zend_language_parser.h.tmp && \
	mv /root/php-src/Zend/zend_language_parser.h.tmp /root/php-src/Zend/zend_language_parser.h
	@nlinit=`echo 'nl="'; echo '"'`; eval "$$nlinit"; \
	$(SED) -e "s/^#ifndef YYTOKENTYPE/#include \"zend.h\"\\$${nl}#ifndef YYTOKENTYPE/" < /root/php-src/Zend/zend_language_parser.h \
	> /root/php-src/Zend/zend_language_parser.h.tmp && \
	mv /root/php-src/Zend/zend_language_parser.h.tmp /root/php-src/Zend/zend_language_parser.h

/root/php-src/Zend/zend_ini_parser.h: /root/php-src/Zend/zend_ini_parser.c
/root/php-src/Zend/zend_ini_parser.c: /root/php-src/Zend/zend_ini_parser.y
	$(YACC) $(YFLAGS) -v -d /root/php-src/Zend/zend_ini_parser.y -o $@

/root/php-src/Zend/zend_ini_scanner.c: /root/php-src/Zend/zend_ini_scanner.l
	@(cd $(top_srcdir); $(RE2C) $(RE2C_FLAGS) --no-generation-date --case-inverted -cbdFt Zend/zend_ini_scanner_defs.h -oZend/zend_ini_scanner.c Zend/zend_ini_scanner.l)

# Use an intermediate target to indicate that zend_vm_gen.php produces both files
# at the same time, rather than the same recipe applying for two different targets.
# The "grouped targets" feature, which would solve this directly, is only available
# since GNU Make 4.3.
/root/php-src/Zend/zend_vm_execute.h /root/php-src/Zend/zend_vm_opcodes.c: vm.gen.intermediate ;
.INTERMEDIATE: vm.gen.intermediate
vm.gen.intermediate: /root/php-src/Zend/zend_vm_def.h /root/php-src/Zend/zend_vm_execute.skl /root/php-src/Zend/zend_vm_gen.php
	@if test ! -z "$(PHP)"; then \
		$(PHP) /root/php-src/Zend/zend_vm_gen.php; \
	fi;

Zend/zend_highlight.lo Zend/zend_compile.lo: /root/php-src/Zend/zend_language_parser.h

Zend/zend_execute.lo: /root/php-src/Zend/zend_vm_execute.h /root/php-src/Zend/zend_vm_opcodes.h
-include sapi/cli/php_cli.dep
sapi/cli/php_cli.lo: /root/php-src/sapi/cli/php_cli.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/cli/ -I/root/php-src/sapi/cli/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/cli/php_cli.c -o sapi/cli/php_cli.lo  -MMD -MF sapi/cli/php_cli.dep -MT sapi/cli/php_cli.lo
-include sapi/cli/php_http_parser.dep
sapi/cli/php_http_parser.lo: /root/php-src/sapi/cli/php_http_parser.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/cli/ -I/root/php-src/sapi/cli/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/cli/php_http_parser.c -o sapi/cli/php_http_parser.lo  -MMD -MF sapi/cli/php_http_parser.dep -MT sapi/cli/php_http_parser.lo
-include sapi/cli/php_cli_server.dep
sapi/cli/php_cli_server.lo: /root/php-src/sapi/cli/php_cli_server.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/cli/ -I/root/php-src/sapi/cli/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/cli/php_cli_server.c -o sapi/cli/php_cli_server.lo  -MMD -MF sapi/cli/php_cli_server.dep -MT sapi/cli/php_cli_server.lo
-include sapi/cli/ps_title.dep
sapi/cli/ps_title.lo: /root/php-src/sapi/cli/ps_title.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/cli/ -I/root/php-src/sapi/cli/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/cli/ps_title.c -o sapi/cli/ps_title.lo  -MMD -MF sapi/cli/ps_title.dep -MT sapi/cli/ps_title.lo
-include sapi/cli/php_cli_process_title.dep
sapi/cli/php_cli_process_title.lo: /root/php-src/sapi/cli/php_cli_process_title.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/cli/ -I/root/php-src/sapi/cli/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/cli/php_cli_process_title.c -o sapi/cli/php_cli_process_title.lo  -MMD -MF sapi/cli/php_cli_process_title.dep -MT sapi/cli/php_cli_process_title.lo
-include sapi/phpdbg/phpdbg.dep
sapi/phpdbg/phpdbg.lo: /root/php-src/sapi/phpdbg/phpdbg.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/phpdbg/phpdbg.c -o sapi/phpdbg/phpdbg.lo  -MMD -MF sapi/phpdbg/phpdbg.dep -MT sapi/phpdbg/phpdbg.lo
-include sapi/phpdbg/phpdbg_parser.dep
sapi/phpdbg/phpdbg_parser.lo: /root/php-src/sapi/phpdbg/phpdbg_parser.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/phpdbg/phpdbg_parser.c -o sapi/phpdbg/phpdbg_parser.lo  -MMD -MF sapi/phpdbg/phpdbg_parser.dep -MT sapi/phpdbg/phpdbg_parser.lo
-include sapi/phpdbg/phpdbg_lexer.dep
sapi/phpdbg/phpdbg_lexer.lo: /root/php-src/sapi/phpdbg/phpdbg_lexer.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/phpdbg/phpdbg_lexer.c -o sapi/phpdbg/phpdbg_lexer.lo  -MMD -MF sapi/phpdbg/phpdbg_lexer.dep -MT sapi/phpdbg/phpdbg_lexer.lo
-include sapi/phpdbg/phpdbg_prompt.dep
sapi/phpdbg/phpdbg_prompt.lo: /root/php-src/sapi/phpdbg/phpdbg_prompt.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/phpdbg/phpdbg_prompt.c -o sapi/phpdbg/phpdbg_prompt.lo  -MMD -MF sapi/phpdbg/phpdbg_prompt.dep -MT sapi/phpdbg/phpdbg_prompt.lo
-include sapi/phpdbg/phpdbg_help.dep
sapi/phpdbg/phpdbg_help.lo: /root/php-src/sapi/phpdbg/phpdbg_help.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/phpdbg/phpdbg_help.c -o sapi/phpdbg/phpdbg_help.lo  -MMD -MF sapi/phpdbg/phpdbg_help.dep -MT sapi/phpdbg/phpdbg_help.lo
-include sapi/phpdbg/phpdbg_break.dep
sapi/phpdbg/phpdbg_break.lo: /root/php-src/sapi/phpdbg/phpdbg_break.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/phpdbg/phpdbg_break.c -o sapi/phpdbg/phpdbg_break.lo  -MMD -MF sapi/phpdbg/phpdbg_break.dep -MT sapi/phpdbg/phpdbg_break.lo
-include sapi/phpdbg/phpdbg_print.dep
sapi/phpdbg/phpdbg_print.lo: /root/php-src/sapi/phpdbg/phpdbg_print.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/phpdbg/phpdbg_print.c -o sapi/phpdbg/phpdbg_print.lo  -MMD -MF sapi/phpdbg/phpdbg_print.dep -MT sapi/phpdbg/phpdbg_print.lo
-include sapi/phpdbg/phpdbg_bp.dep
sapi/phpdbg/phpdbg_bp.lo: /root/php-src/sapi/phpdbg/phpdbg_bp.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/phpdbg/phpdbg_bp.c -o sapi/phpdbg/phpdbg_bp.lo  -MMD -MF sapi/phpdbg/phpdbg_bp.dep -MT sapi/phpdbg/phpdbg_bp.lo
-include sapi/phpdbg/phpdbg_list.dep
sapi/phpdbg/phpdbg_list.lo: /root/php-src/sapi/phpdbg/phpdbg_list.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/phpdbg/phpdbg_list.c -o sapi/phpdbg/phpdbg_list.lo  -MMD -MF sapi/phpdbg/phpdbg_list.dep -MT sapi/phpdbg/phpdbg_list.lo
-include sapi/phpdbg/phpdbg_utils.dep
sapi/phpdbg/phpdbg_utils.lo: /root/php-src/sapi/phpdbg/phpdbg_utils.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/phpdbg/phpdbg_utils.c -o sapi/phpdbg/phpdbg_utils.lo  -MMD -MF sapi/phpdbg/phpdbg_utils.dep -MT sapi/phpdbg/phpdbg_utils.lo
-include sapi/phpdbg/phpdbg_info.dep
sapi/phpdbg/phpdbg_info.lo: /root/php-src/sapi/phpdbg/phpdbg_info.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/phpdbg/phpdbg_info.c -o sapi/phpdbg/phpdbg_info.lo  -MMD -MF sapi/phpdbg/phpdbg_info.dep -MT sapi/phpdbg/phpdbg_info.lo
-include sapi/phpdbg/phpdbg_cmd.dep
sapi/phpdbg/phpdbg_cmd.lo: /root/php-src/sapi/phpdbg/phpdbg_cmd.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/phpdbg/phpdbg_cmd.c -o sapi/phpdbg/phpdbg_cmd.lo  -MMD -MF sapi/phpdbg/phpdbg_cmd.dep -MT sapi/phpdbg/phpdbg_cmd.lo
-include sapi/phpdbg/phpdbg_set.dep
sapi/phpdbg/phpdbg_set.lo: /root/php-src/sapi/phpdbg/phpdbg_set.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/phpdbg/phpdbg_set.c -o sapi/phpdbg/phpdbg_set.lo  -MMD -MF sapi/phpdbg/phpdbg_set.dep -MT sapi/phpdbg/phpdbg_set.lo
-include sapi/phpdbg/phpdbg_frame.dep
sapi/phpdbg/phpdbg_frame.lo: /root/php-src/sapi/phpdbg/phpdbg_frame.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/phpdbg/phpdbg_frame.c -o sapi/phpdbg/phpdbg_frame.lo  -MMD -MF sapi/phpdbg/phpdbg_frame.dep -MT sapi/phpdbg/phpdbg_frame.lo
-include sapi/phpdbg/phpdbg_watch.dep
sapi/phpdbg/phpdbg_watch.lo: /root/php-src/sapi/phpdbg/phpdbg_watch.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/phpdbg/phpdbg_watch.c -o sapi/phpdbg/phpdbg_watch.lo  -MMD -MF sapi/phpdbg/phpdbg_watch.dep -MT sapi/phpdbg/phpdbg_watch.lo
-include sapi/phpdbg/phpdbg_btree.dep
sapi/phpdbg/phpdbg_btree.lo: /root/php-src/sapi/phpdbg/phpdbg_btree.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/phpdbg/phpdbg_btree.c -o sapi/phpdbg/phpdbg_btree.lo  -MMD -MF sapi/phpdbg/phpdbg_btree.dep -MT sapi/phpdbg/phpdbg_btree.lo
-include sapi/phpdbg/phpdbg_sigsafe.dep
sapi/phpdbg/phpdbg_sigsafe.lo: /root/php-src/sapi/phpdbg/phpdbg_sigsafe.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/phpdbg/phpdbg_sigsafe.c -o sapi/phpdbg/phpdbg_sigsafe.lo  -MMD -MF sapi/phpdbg/phpdbg_sigsafe.dep -MT sapi/phpdbg/phpdbg_sigsafe.lo
-include sapi/phpdbg/phpdbg_io.dep
sapi/phpdbg/phpdbg_io.lo: /root/php-src/sapi/phpdbg/phpdbg_io.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/phpdbg/phpdbg_io.c -o sapi/phpdbg/phpdbg_io.lo  -MMD -MF sapi/phpdbg/phpdbg_io.dep -MT sapi/phpdbg/phpdbg_io.lo
-include sapi/phpdbg/phpdbg_out.dep
sapi/phpdbg/phpdbg_out.lo: /root/php-src/sapi/phpdbg/phpdbg_out.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/phpdbg/ -I/root/php-src/sapi/phpdbg/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -D_GNU_SOURCE -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/phpdbg/phpdbg_out.c -o sapi/phpdbg/phpdbg_out.lo  -MMD -MF sapi/phpdbg/phpdbg_out.dep -MT sapi/phpdbg/phpdbg_out.lo
-include sapi/cgi/cgi_main.dep
sapi/cgi/cgi_main.lo: /root/php-src/sapi/cgi/cgi_main.c
	$(LIBTOOL) --mode=compile $(CC) -Isapi/cgi/ -I/root/php-src/sapi/cgi/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/sapi/cgi/cgi_main.c -o sapi/cgi/cgi_main.lo  -MMD -MF sapi/cgi/cgi_main.dep -MT sapi/cgi/cgi_main.lo
-include ext/date/php_date.dep
ext/date/php_date.lo: /root/php-src/ext/date/php_date.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/date/ -I/root/php-src/ext/date/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -Iext/date/lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DHAVE_TIMELIB_CONFIG_H=1 -c /root/php-src/ext/date/php_date.c -o ext/date/php_date.lo  -MMD -MF ext/date/php_date.dep -MT ext/date/php_date.lo
-include ext/date/lib/astro.dep
ext/date/lib/astro.lo: /root/php-src/ext/date/lib/astro.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/date/ -I/root/php-src/ext/date/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -Iext/date/lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DHAVE_TIMELIB_CONFIG_H=1 -c /root/php-src/ext/date/lib/astro.c -o ext/date/lib/astro.lo  -MMD -MF ext/date/lib/astro.dep -MT ext/date/lib/astro.lo
-include ext/date/lib/dow.dep
ext/date/lib/dow.lo: /root/php-src/ext/date/lib/dow.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/date/ -I/root/php-src/ext/date/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -Iext/date/lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DHAVE_TIMELIB_CONFIG_H=1 -c /root/php-src/ext/date/lib/dow.c -o ext/date/lib/dow.lo  -MMD -MF ext/date/lib/dow.dep -MT ext/date/lib/dow.lo
-include ext/date/lib/parse_date.dep
ext/date/lib/parse_date.lo: /root/php-src/ext/date/lib/parse_date.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/date/ -I/root/php-src/ext/date/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -Iext/date/lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DHAVE_TIMELIB_CONFIG_H=1 -c /root/php-src/ext/date/lib/parse_date.c -o ext/date/lib/parse_date.lo  -MMD -MF ext/date/lib/parse_date.dep -MT ext/date/lib/parse_date.lo
-include ext/date/lib/parse_tz.dep
ext/date/lib/parse_tz.lo: /root/php-src/ext/date/lib/parse_tz.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/date/ -I/root/php-src/ext/date/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -Iext/date/lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DHAVE_TIMELIB_CONFIG_H=1 -c /root/php-src/ext/date/lib/parse_tz.c -o ext/date/lib/parse_tz.lo  -MMD -MF ext/date/lib/parse_tz.dep -MT ext/date/lib/parse_tz.lo
-include ext/date/lib/parse_posix.dep
ext/date/lib/parse_posix.lo: /root/php-src/ext/date/lib/parse_posix.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/date/ -I/root/php-src/ext/date/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -Iext/date/lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DHAVE_TIMELIB_CONFIG_H=1 -c /root/php-src/ext/date/lib/parse_posix.c -o ext/date/lib/parse_posix.lo  -MMD -MF ext/date/lib/parse_posix.dep -MT ext/date/lib/parse_posix.lo
-include ext/date/lib/timelib.dep
ext/date/lib/timelib.lo: /root/php-src/ext/date/lib/timelib.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/date/ -I/root/php-src/ext/date/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -Iext/date/lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DHAVE_TIMELIB_CONFIG_H=1 -c /root/php-src/ext/date/lib/timelib.c -o ext/date/lib/timelib.lo  -MMD -MF ext/date/lib/timelib.dep -MT ext/date/lib/timelib.lo
-include ext/date/lib/tm2unixtime.dep
ext/date/lib/tm2unixtime.lo: /root/php-src/ext/date/lib/tm2unixtime.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/date/ -I/root/php-src/ext/date/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -Iext/date/lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DHAVE_TIMELIB_CONFIG_H=1 -c /root/php-src/ext/date/lib/tm2unixtime.c -o ext/date/lib/tm2unixtime.lo  -MMD -MF ext/date/lib/tm2unixtime.dep -MT ext/date/lib/tm2unixtime.lo
-include ext/date/lib/unixtime2tm.dep
ext/date/lib/unixtime2tm.lo: /root/php-src/ext/date/lib/unixtime2tm.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/date/ -I/root/php-src/ext/date/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -Iext/date/lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DHAVE_TIMELIB_CONFIG_H=1 -c /root/php-src/ext/date/lib/unixtime2tm.c -o ext/date/lib/unixtime2tm.lo  -MMD -MF ext/date/lib/unixtime2tm.dep -MT ext/date/lib/unixtime2tm.lo
-include ext/date/lib/parse_iso_intervals.dep
ext/date/lib/parse_iso_intervals.lo: /root/php-src/ext/date/lib/parse_iso_intervals.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/date/ -I/root/php-src/ext/date/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -Iext/date/lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DHAVE_TIMELIB_CONFIG_H=1 -c /root/php-src/ext/date/lib/parse_iso_intervals.c -o ext/date/lib/parse_iso_intervals.lo  -MMD -MF ext/date/lib/parse_iso_intervals.dep -MT ext/date/lib/parse_iso_intervals.lo
-include ext/date/lib/interval.dep
ext/date/lib/interval.lo: /root/php-src/ext/date/lib/interval.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/date/ -I/root/php-src/ext/date/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -Iext/date/lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DHAVE_TIMELIB_CONFIG_H=1 -c /root/php-src/ext/date/lib/interval.c -o ext/date/lib/interval.lo  -MMD -MF ext/date/lib/interval.dep -MT ext/date/lib/interval.lo
-include ext/pcre/pcre2lib/pcre2_auto_possess.dep
ext/pcre/pcre2lib/pcre2_auto_possess.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_auto_possess.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_auto_possess.c -o ext/pcre/pcre2lib/pcre2_auto_possess.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_auto_possess.dep -MT ext/pcre/pcre2lib/pcre2_auto_possess.lo
-include ext/pcre/pcre2lib/pcre2_chartables.dep
ext/pcre/pcre2lib/pcre2_chartables.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_chartables.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_chartables.c -o ext/pcre/pcre2lib/pcre2_chartables.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_chartables.dep -MT ext/pcre/pcre2lib/pcre2_chartables.lo
-include ext/pcre/pcre2lib/pcre2_compile.dep
ext/pcre/pcre2lib/pcre2_compile.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_compile.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_compile.c -o ext/pcre/pcre2lib/pcre2_compile.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_compile.dep -MT ext/pcre/pcre2lib/pcre2_compile.lo
-include ext/pcre/pcre2lib/pcre2_config.dep
ext/pcre/pcre2lib/pcre2_config.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_config.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_config.c -o ext/pcre/pcre2lib/pcre2_config.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_config.dep -MT ext/pcre/pcre2lib/pcre2_config.lo
-include ext/pcre/pcre2lib/pcre2_context.dep
ext/pcre/pcre2lib/pcre2_context.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_context.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_context.c -o ext/pcre/pcre2lib/pcre2_context.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_context.dep -MT ext/pcre/pcre2lib/pcre2_context.lo
-include ext/pcre/pcre2lib/pcre2_dfa_match.dep
ext/pcre/pcre2lib/pcre2_dfa_match.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_dfa_match.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_dfa_match.c -o ext/pcre/pcre2lib/pcre2_dfa_match.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_dfa_match.dep -MT ext/pcre/pcre2lib/pcre2_dfa_match.lo
-include ext/pcre/pcre2lib/pcre2_error.dep
ext/pcre/pcre2lib/pcre2_error.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_error.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_error.c -o ext/pcre/pcre2lib/pcre2_error.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_error.dep -MT ext/pcre/pcre2lib/pcre2_error.lo
-include ext/pcre/pcre2lib/pcre2_jit_compile.dep
ext/pcre/pcre2lib/pcre2_jit_compile.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_jit_compile.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_jit_compile.c -o ext/pcre/pcre2lib/pcre2_jit_compile.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_jit_compile.dep -MT ext/pcre/pcre2lib/pcre2_jit_compile.lo
-include ext/pcre/pcre2lib/pcre2_maketables.dep
ext/pcre/pcre2lib/pcre2_maketables.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_maketables.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_maketables.c -o ext/pcre/pcre2lib/pcre2_maketables.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_maketables.dep -MT ext/pcre/pcre2lib/pcre2_maketables.lo
-include ext/pcre/pcre2lib/pcre2_match.dep
ext/pcre/pcre2lib/pcre2_match.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_match.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_match.c -o ext/pcre/pcre2lib/pcre2_match.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_match.dep -MT ext/pcre/pcre2lib/pcre2_match.lo
-include ext/pcre/pcre2lib/pcre2_match_data.dep
ext/pcre/pcre2lib/pcre2_match_data.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_match_data.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_match_data.c -o ext/pcre/pcre2lib/pcre2_match_data.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_match_data.dep -MT ext/pcre/pcre2lib/pcre2_match_data.lo
-include ext/pcre/pcre2lib/pcre2_newline.dep
ext/pcre/pcre2lib/pcre2_newline.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_newline.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_newline.c -o ext/pcre/pcre2lib/pcre2_newline.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_newline.dep -MT ext/pcre/pcre2lib/pcre2_newline.lo
-include ext/pcre/pcre2lib/pcre2_ord2utf.dep
ext/pcre/pcre2lib/pcre2_ord2utf.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_ord2utf.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_ord2utf.c -o ext/pcre/pcre2lib/pcre2_ord2utf.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_ord2utf.dep -MT ext/pcre/pcre2lib/pcre2_ord2utf.lo
-include ext/pcre/pcre2lib/pcre2_pattern_info.dep
ext/pcre/pcre2lib/pcre2_pattern_info.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_pattern_info.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_pattern_info.c -o ext/pcre/pcre2lib/pcre2_pattern_info.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_pattern_info.dep -MT ext/pcre/pcre2lib/pcre2_pattern_info.lo
-include ext/pcre/pcre2lib/pcre2_serialize.dep
ext/pcre/pcre2lib/pcre2_serialize.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_serialize.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_serialize.c -o ext/pcre/pcre2lib/pcre2_serialize.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_serialize.dep -MT ext/pcre/pcre2lib/pcre2_serialize.lo
-include ext/pcre/pcre2lib/pcre2_string_utils.dep
ext/pcre/pcre2lib/pcre2_string_utils.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_string_utils.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_string_utils.c -o ext/pcre/pcre2lib/pcre2_string_utils.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_string_utils.dep -MT ext/pcre/pcre2lib/pcre2_string_utils.lo
-include ext/pcre/pcre2lib/pcre2_study.dep
ext/pcre/pcre2lib/pcre2_study.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_study.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_study.c -o ext/pcre/pcre2lib/pcre2_study.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_study.dep -MT ext/pcre/pcre2lib/pcre2_study.lo
-include ext/pcre/pcre2lib/pcre2_substitute.dep
ext/pcre/pcre2lib/pcre2_substitute.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_substitute.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_substitute.c -o ext/pcre/pcre2lib/pcre2_substitute.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_substitute.dep -MT ext/pcre/pcre2lib/pcre2_substitute.lo
-include ext/pcre/pcre2lib/pcre2_substring.dep
ext/pcre/pcre2lib/pcre2_substring.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_substring.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_substring.c -o ext/pcre/pcre2lib/pcre2_substring.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_substring.dep -MT ext/pcre/pcre2lib/pcre2_substring.lo
-include ext/pcre/pcre2lib/pcre2_tables.dep
ext/pcre/pcre2lib/pcre2_tables.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_tables.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_tables.c -o ext/pcre/pcre2lib/pcre2_tables.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_tables.dep -MT ext/pcre/pcre2lib/pcre2_tables.lo
-include ext/pcre/pcre2lib/pcre2_ucd.dep
ext/pcre/pcre2lib/pcre2_ucd.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_ucd.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_ucd.c -o ext/pcre/pcre2lib/pcre2_ucd.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_ucd.dep -MT ext/pcre/pcre2lib/pcre2_ucd.lo
-include ext/pcre/pcre2lib/pcre2_valid_utf.dep
ext/pcre/pcre2lib/pcre2_valid_utf.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_valid_utf.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_valid_utf.c -o ext/pcre/pcre2lib/pcre2_valid_utf.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_valid_utf.dep -MT ext/pcre/pcre2lib/pcre2_valid_utf.lo
-include ext/pcre/pcre2lib/pcre2_xclass.dep
ext/pcre/pcre2lib/pcre2_xclass.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_xclass.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_xclass.c -o ext/pcre/pcre2lib/pcre2_xclass.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_xclass.dep -MT ext/pcre/pcre2lib/pcre2_xclass.lo
-include ext/pcre/pcre2lib/pcre2_find_bracket.dep
ext/pcre/pcre2lib/pcre2_find_bracket.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_find_bracket.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_find_bracket.c -o ext/pcre/pcre2lib/pcre2_find_bracket.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_find_bracket.dep -MT ext/pcre/pcre2lib/pcre2_find_bracket.lo
-include ext/pcre/pcre2lib/pcre2_convert.dep
ext/pcre/pcre2lib/pcre2_convert.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_convert.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_convert.c -o ext/pcre/pcre2lib/pcre2_convert.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_convert.dep -MT ext/pcre/pcre2lib/pcre2_convert.lo
-include ext/pcre/pcre2lib/pcre2_extuni.dep
ext/pcre/pcre2lib/pcre2_extuni.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_extuni.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_extuni.c -o ext/pcre/pcre2lib/pcre2_extuni.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_extuni.dep -MT ext/pcre/pcre2lib/pcre2_extuni.lo
-include ext/pcre/pcre2lib/pcre2_script_run.dep
ext/pcre/pcre2lib/pcre2_script_run.lo: /root/php-src/ext/pcre/pcre2lib/pcre2_script_run.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/pcre2lib/pcre2_script_run.c -o ext/pcre/pcre2lib/pcre2_script_run.lo  -MMD -MF ext/pcre/pcre2lib/pcre2_script_run.dep -MT ext/pcre/pcre2lib/pcre2_script_run.lo
-include ext/pcre/php_pcre.dep
ext/pcre/php_pcre.lo: /root/php-src/ext/pcre/php_pcre.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/pcre/ -I/root/php-src/ext/pcre/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -DHAVE_CONFIG_H -I/root/php-src/ext/pcre/pcre2lib -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/pcre/php_pcre.c -o ext/pcre/php_pcre.lo  -MMD -MF ext/pcre/php_pcre.dep -MT ext/pcre/php_pcre.lo
-include ext/hash/hash.dep
ext/hash/hash.lo: /root/php-src/ext/hash/hash.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I/root/php-src/ext/hash/xxhash -c /root/php-src/ext/hash/hash.c -o ext/hash/hash.lo  -MMD -MF ext/hash/hash.dep -MT ext/hash/hash.lo
-include ext/hash/hash_md.dep
ext/hash/hash_md.lo: /root/php-src/ext/hash/hash_md.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I/root/php-src/ext/hash/xxhash -c /root/php-src/ext/hash/hash_md.c -o ext/hash/hash_md.lo  -MMD -MF ext/hash/hash_md.dep -MT ext/hash/hash_md.lo
-include ext/hash/hash_sha.dep
ext/hash/hash_sha.lo: /root/php-src/ext/hash/hash_sha.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I/root/php-src/ext/hash/xxhash -c /root/php-src/ext/hash/hash_sha.c -o ext/hash/hash_sha.lo  -MMD -MF ext/hash/hash_sha.dep -MT ext/hash/hash_sha.lo
-include ext/hash/hash_ripemd.dep
ext/hash/hash_ripemd.lo: /root/php-src/ext/hash/hash_ripemd.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I/root/php-src/ext/hash/xxhash -c /root/php-src/ext/hash/hash_ripemd.c -o ext/hash/hash_ripemd.lo  -MMD -MF ext/hash/hash_ripemd.dep -MT ext/hash/hash_ripemd.lo
-include ext/hash/hash_haval.dep
ext/hash/hash_haval.lo: /root/php-src/ext/hash/hash_haval.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I/root/php-src/ext/hash/xxhash -c /root/php-src/ext/hash/hash_haval.c -o ext/hash/hash_haval.lo  -MMD -MF ext/hash/hash_haval.dep -MT ext/hash/hash_haval.lo
-include ext/hash/hash_tiger.dep
ext/hash/hash_tiger.lo: /root/php-src/ext/hash/hash_tiger.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I/root/php-src/ext/hash/xxhash -c /root/php-src/ext/hash/hash_tiger.c -o ext/hash/hash_tiger.lo  -MMD -MF ext/hash/hash_tiger.dep -MT ext/hash/hash_tiger.lo
-include ext/hash/hash_gost.dep
ext/hash/hash_gost.lo: /root/php-src/ext/hash/hash_gost.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I/root/php-src/ext/hash/xxhash -c /root/php-src/ext/hash/hash_gost.c -o ext/hash/hash_gost.lo  -MMD -MF ext/hash/hash_gost.dep -MT ext/hash/hash_gost.lo
-include ext/hash/hash_snefru.dep
ext/hash/hash_snefru.lo: /root/php-src/ext/hash/hash_snefru.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I/root/php-src/ext/hash/xxhash -c /root/php-src/ext/hash/hash_snefru.c -o ext/hash/hash_snefru.lo  -MMD -MF ext/hash/hash_snefru.dep -MT ext/hash/hash_snefru.lo
-include ext/hash/hash_whirlpool.dep
ext/hash/hash_whirlpool.lo: /root/php-src/ext/hash/hash_whirlpool.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I/root/php-src/ext/hash/xxhash -c /root/php-src/ext/hash/hash_whirlpool.c -o ext/hash/hash_whirlpool.lo  -MMD -MF ext/hash/hash_whirlpool.dep -MT ext/hash/hash_whirlpool.lo
-include ext/hash/hash_adler32.dep
ext/hash/hash_adler32.lo: /root/php-src/ext/hash/hash_adler32.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I/root/php-src/ext/hash/xxhash -c /root/php-src/ext/hash/hash_adler32.c -o ext/hash/hash_adler32.lo  -MMD -MF ext/hash/hash_adler32.dep -MT ext/hash/hash_adler32.lo
-include ext/hash/hash_crc32.dep
ext/hash/hash_crc32.lo: /root/php-src/ext/hash/hash_crc32.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I/root/php-src/ext/hash/xxhash -c /root/php-src/ext/hash/hash_crc32.c -o ext/hash/hash_crc32.lo  -MMD -MF ext/hash/hash_crc32.dep -MT ext/hash/hash_crc32.lo
-include ext/hash/hash_fnv.dep
ext/hash/hash_fnv.lo: /root/php-src/ext/hash/hash_fnv.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I/root/php-src/ext/hash/xxhash -c /root/php-src/ext/hash/hash_fnv.c -o ext/hash/hash_fnv.lo  -MMD -MF ext/hash/hash_fnv.dep -MT ext/hash/hash_fnv.lo
-include ext/hash/hash_joaat.dep
ext/hash/hash_joaat.lo: /root/php-src/ext/hash/hash_joaat.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I/root/php-src/ext/hash/xxhash -c /root/php-src/ext/hash/hash_joaat.c -o ext/hash/hash_joaat.lo  -MMD -MF ext/hash/hash_joaat.dep -MT ext/hash/hash_joaat.lo
-include ext/hash/sha3/generic32lc/KeccakP-1600-inplace32BI.dep
ext/hash/sha3/generic32lc/KeccakP-1600-inplace32BI.lo: /root/php-src/ext/hash/sha3/generic32lc/KeccakP-1600-inplace32BI.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I/root/php-src/ext/hash/xxhash -c /root/php-src/ext/hash/sha3/generic32lc/KeccakP-1600-inplace32BI.c -o ext/hash/sha3/generic32lc/KeccakP-1600-inplace32BI.lo  -MMD -MF ext/hash/sha3/generic32lc/KeccakP-1600-inplace32BI.dep -MT ext/hash/sha3/generic32lc/KeccakP-1600-inplace32BI.lo
-include ext/hash/sha3/generic32lc/KeccakHash.dep
ext/hash/sha3/generic32lc/KeccakHash.lo: /root/php-src/ext/hash/sha3/generic32lc/KeccakHash.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I/root/php-src/ext/hash/xxhash -c /root/php-src/ext/hash/sha3/generic32lc/KeccakHash.c -o ext/hash/sha3/generic32lc/KeccakHash.lo  -MMD -MF ext/hash/sha3/generic32lc/KeccakHash.dep -MT ext/hash/sha3/generic32lc/KeccakHash.lo
-include ext/hash/sha3/generic32lc/KeccakSponge.dep
ext/hash/sha3/generic32lc/KeccakSponge.lo: /root/php-src/ext/hash/sha3/generic32lc/KeccakSponge.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I/root/php-src/ext/hash/xxhash -c /root/php-src/ext/hash/sha3/generic32lc/KeccakSponge.c -o ext/hash/sha3/generic32lc/KeccakSponge.lo  -MMD -MF ext/hash/sha3/generic32lc/KeccakSponge.dep -MT ext/hash/sha3/generic32lc/KeccakSponge.lo
-include ext/hash/hash_sha3.dep
ext/hash/hash_sha3.lo: /root/php-src/ext/hash/hash_sha3.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I/root/php-src/ext/hash/xxhash -c /root/php-src/ext/hash/hash_sha3.c -o ext/hash/hash_sha3.lo  -MMD -MF ext/hash/hash_sha3.dep -MT ext/hash/hash_sha3.lo
-include ext/hash/murmur/PMurHash.dep
ext/hash/murmur/PMurHash.lo: /root/php-src/ext/hash/murmur/PMurHash.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I/root/php-src/ext/hash/xxhash -c /root/php-src/ext/hash/murmur/PMurHash.c -o ext/hash/murmur/PMurHash.lo  -MMD -MF ext/hash/murmur/PMurHash.dep -MT ext/hash/murmur/PMurHash.lo
-include ext/hash/murmur/PMurHash128.dep
ext/hash/murmur/PMurHash128.lo: /root/php-src/ext/hash/murmur/PMurHash128.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I/root/php-src/ext/hash/xxhash -c /root/php-src/ext/hash/murmur/PMurHash128.c -o ext/hash/murmur/PMurHash128.lo  -MMD -MF ext/hash/murmur/PMurHash128.dep -MT ext/hash/murmur/PMurHash128.lo
-include ext/hash/hash_murmur.dep
ext/hash/hash_murmur.lo: /root/php-src/ext/hash/hash_murmur.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I/root/php-src/ext/hash/xxhash -c /root/php-src/ext/hash/hash_murmur.c -o ext/hash/hash_murmur.lo  -MMD -MF ext/hash/hash_murmur.dep -MT ext/hash/hash_murmur.lo
-include ext/hash/hash_xxhash.dep
ext/hash/hash_xxhash.lo: /root/php-src/ext/hash/hash_xxhash.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/hash/ -I/root/php-src/ext/hash/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -Wno-implicit-fallthrough -I/root/php-src/ext/hash/sha3/generic32lc -DKeccakP200_excluded -DKeccakP400_excluded -DKeccakP800_excluded -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I/root/php-src/ext/hash/xxhash -c /root/php-src/ext/hash/hash_xxhash.c -o ext/hash/hash_xxhash.lo  -MMD -MF ext/hash/hash_xxhash.dep -MT ext/hash/hash_xxhash.lo
-include ext/json/json.dep
ext/json/json.lo: /root/php-src/ext/json/json.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/json/ -I/root/php-src/ext/json/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/json/json.c -o ext/json/json.lo  -MMD -MF ext/json/json.dep -MT ext/json/json.lo
-include ext/json/json_encoder.dep
ext/json/json_encoder.lo: /root/php-src/ext/json/json_encoder.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/json/ -I/root/php-src/ext/json/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/json/json_encoder.c -o ext/json/json_encoder.lo  -MMD -MF ext/json/json_encoder.dep -MT ext/json/json_encoder.lo
-include ext/json/json_parser.dep
ext/json/json_parser.lo: /root/php-src/ext/json/json_parser.tab.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/json/ -I/root/php-src/ext/json/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/json/json_parser.tab.c -o ext/json/json_parser.lo  -MMD -MF ext/json/json_parser.dep -MT ext/json/json_parser.lo
-include ext/json/json_scanner.dep
ext/json/json_scanner.lo: /root/php-src/ext/json/json_scanner.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/json/ -I/root/php-src/ext/json/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/json/json_scanner.c -o ext/json/json_scanner.lo  -MMD -MF ext/json/json_scanner.dep -MT ext/json/json_scanner.lo
-include ext/reflection/php_reflection.dep
ext/reflection/php_reflection.lo: /root/php-src/ext/reflection/php_reflection.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/reflection/ -I/root/php-src/ext/reflection/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/reflection/php_reflection.c -o ext/reflection/php_reflection.lo  -MMD -MF ext/reflection/php_reflection.dep -MT ext/reflection/php_reflection.lo
-include ext/spl/php_spl.dep
ext/spl/php_spl.lo: /root/php-src/ext/spl/php_spl.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/spl/ -I/root/php-src/ext/spl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/spl/php_spl.c -o ext/spl/php_spl.lo  -MMD -MF ext/spl/php_spl.dep -MT ext/spl/php_spl.lo
-include ext/spl/spl_functions.dep
ext/spl/spl_functions.lo: /root/php-src/ext/spl/spl_functions.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/spl/ -I/root/php-src/ext/spl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/spl/spl_functions.c -o ext/spl/spl_functions.lo  -MMD -MF ext/spl/spl_functions.dep -MT ext/spl/spl_functions.lo
-include ext/spl/spl_iterators.dep
ext/spl/spl_iterators.lo: /root/php-src/ext/spl/spl_iterators.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/spl/ -I/root/php-src/ext/spl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/spl/spl_iterators.c -o ext/spl/spl_iterators.lo  -MMD -MF ext/spl/spl_iterators.dep -MT ext/spl/spl_iterators.lo
-include ext/spl/spl_array.dep
ext/spl/spl_array.lo: /root/php-src/ext/spl/spl_array.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/spl/ -I/root/php-src/ext/spl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/spl/spl_array.c -o ext/spl/spl_array.lo  -MMD -MF ext/spl/spl_array.dep -MT ext/spl/spl_array.lo
-include ext/spl/spl_directory.dep
ext/spl/spl_directory.lo: /root/php-src/ext/spl/spl_directory.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/spl/ -I/root/php-src/ext/spl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/spl/spl_directory.c -o ext/spl/spl_directory.lo  -MMD -MF ext/spl/spl_directory.dep -MT ext/spl/spl_directory.lo
-include ext/spl/spl_exceptions.dep
ext/spl/spl_exceptions.lo: /root/php-src/ext/spl/spl_exceptions.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/spl/ -I/root/php-src/ext/spl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/spl/spl_exceptions.c -o ext/spl/spl_exceptions.lo  -MMD -MF ext/spl/spl_exceptions.dep -MT ext/spl/spl_exceptions.lo
-include ext/spl/spl_observer.dep
ext/spl/spl_observer.lo: /root/php-src/ext/spl/spl_observer.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/spl/ -I/root/php-src/ext/spl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/spl/spl_observer.c -o ext/spl/spl_observer.lo  -MMD -MF ext/spl/spl_observer.dep -MT ext/spl/spl_observer.lo
-include ext/spl/spl_dllist.dep
ext/spl/spl_dllist.lo: /root/php-src/ext/spl/spl_dllist.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/spl/ -I/root/php-src/ext/spl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/spl/spl_dllist.c -o ext/spl/spl_dllist.lo  -MMD -MF ext/spl/spl_dllist.dep -MT ext/spl/spl_dllist.lo
-include ext/spl/spl_heap.dep
ext/spl/spl_heap.lo: /root/php-src/ext/spl/spl_heap.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/spl/ -I/root/php-src/ext/spl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/spl/spl_heap.c -o ext/spl/spl_heap.lo  -MMD -MF ext/spl/spl_heap.dep -MT ext/spl/spl_heap.lo
-include ext/spl/spl_fixedarray.dep
ext/spl/spl_fixedarray.lo: /root/php-src/ext/spl/spl_fixedarray.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/spl/ -I/root/php-src/ext/spl/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/spl/spl_fixedarray.c -o ext/spl/spl_fixedarray.lo  -MMD -MF ext/spl/spl_fixedarray.dep -MT ext/spl/spl_fixedarray.lo
-include ext/standard/crypt_freesec.dep
ext/standard/crypt_freesec.lo: /root/php-src/ext/standard/crypt_freesec.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /root/php-src/ext/standard/crypt_freesec.c -o ext/standard/crypt_freesec.lo  -MMD -MF ext/standard/crypt_freesec.dep -MT ext/standard/crypt_freesec.lo
-include ext/standard/crypt_blowfish.dep
ext/standard/crypt_blowfish.lo: /root/php-src/ext/standard/crypt_blowfish.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /root/php-src/ext/standard/crypt_blowfish.c -o ext/standard/crypt_blowfish.lo  -MMD -MF ext/standard/crypt_blowfish.dep -MT ext/standard/crypt_blowfish.lo
-include ext/standard/crypt_sha512.dep
ext/standard/crypt_sha512.lo: /root/php-src/ext/standard/crypt_sha512.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /root/php-src/ext/standard/crypt_sha512.c -o ext/standard/crypt_sha512.lo  -MMD -MF ext/standard/crypt_sha512.dep -MT ext/standard/crypt_sha512.lo
-include ext/standard/crypt_sha256.dep
ext/standard/crypt_sha256.lo: /root/php-src/ext/standard/crypt_sha256.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /root/php-src/ext/standard/crypt_sha256.c -o ext/standard/crypt_sha256.lo  -MMD -MF ext/standard/crypt_sha256.dep -MT ext/standard/crypt_sha256.lo
-include ext/standard/php_crypt_r.dep
ext/standard/php_crypt_r.lo: /root/php-src/ext/standard/php_crypt_r.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS)  -c /root/php-src/ext/standard/php_crypt_r.c -o ext/standard/php_crypt_r.lo  -MMD -MF ext/standard/php_crypt_r.dep -MT ext/standard/php_crypt_r.lo
-include ext/standard/array.dep
ext/standard/array.lo: /root/php-src/ext/standard/array.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/array.c -o ext/standard/array.lo  -MMD -MF ext/standard/array.dep -MT ext/standard/array.lo
-include ext/standard/base64.dep
ext/standard/base64.lo: /root/php-src/ext/standard/base64.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/base64.c -o ext/standard/base64.lo  -MMD -MF ext/standard/base64.dep -MT ext/standard/base64.lo
-include ext/standard/basic_functions.dep
ext/standard/basic_functions.lo: /root/php-src/ext/standard/basic_functions.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/basic_functions.c -o ext/standard/basic_functions.lo  -MMD -MF ext/standard/basic_functions.dep -MT ext/standard/basic_functions.lo
-include ext/standard/browscap.dep
ext/standard/browscap.lo: /root/php-src/ext/standard/browscap.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/browscap.c -o ext/standard/browscap.lo  -MMD -MF ext/standard/browscap.dep -MT ext/standard/browscap.lo
-include ext/standard/crc32.dep
ext/standard/crc32.lo: /root/php-src/ext/standard/crc32.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/crc32.c -o ext/standard/crc32.lo  -MMD -MF ext/standard/crc32.dep -MT ext/standard/crc32.lo
-include ext/standard/crypt.dep
ext/standard/crypt.lo: /root/php-src/ext/standard/crypt.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/crypt.c -o ext/standard/crypt.lo  -MMD -MF ext/standard/crypt.dep -MT ext/standard/crypt.lo
-include ext/standard/datetime.dep
ext/standard/datetime.lo: /root/php-src/ext/standard/datetime.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/datetime.c -o ext/standard/datetime.lo  -MMD -MF ext/standard/datetime.dep -MT ext/standard/datetime.lo
-include ext/standard/dir.dep
ext/standard/dir.lo: /root/php-src/ext/standard/dir.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/dir.c -o ext/standard/dir.lo  -MMD -MF ext/standard/dir.dep -MT ext/standard/dir.lo
-include ext/standard/dl.dep
ext/standard/dl.lo: /root/php-src/ext/standard/dl.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/dl.c -o ext/standard/dl.lo  -MMD -MF ext/standard/dl.dep -MT ext/standard/dl.lo
-include ext/standard/dns.dep
ext/standard/dns.lo: /root/php-src/ext/standard/dns.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/dns.c -o ext/standard/dns.lo  -MMD -MF ext/standard/dns.dep -MT ext/standard/dns.lo
-include ext/standard/exec.dep
ext/standard/exec.lo: /root/php-src/ext/standard/exec.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/exec.c -o ext/standard/exec.lo  -MMD -MF ext/standard/exec.dep -MT ext/standard/exec.lo
-include ext/standard/file.dep
ext/standard/file.lo: /root/php-src/ext/standard/file.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/file.c -o ext/standard/file.lo  -MMD -MF ext/standard/file.dep -MT ext/standard/file.lo
-include ext/standard/filestat.dep
ext/standard/filestat.lo: /root/php-src/ext/standard/filestat.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/filestat.c -o ext/standard/filestat.lo  -MMD -MF ext/standard/filestat.dep -MT ext/standard/filestat.lo
-include ext/standard/flock_compat.dep
ext/standard/flock_compat.lo: /root/php-src/ext/standard/flock_compat.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/flock_compat.c -o ext/standard/flock_compat.lo  -MMD -MF ext/standard/flock_compat.dep -MT ext/standard/flock_compat.lo
-include ext/standard/formatted_print.dep
ext/standard/formatted_print.lo: /root/php-src/ext/standard/formatted_print.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/formatted_print.c -o ext/standard/formatted_print.lo  -MMD -MF ext/standard/formatted_print.dep -MT ext/standard/formatted_print.lo
-include ext/standard/fsock.dep
ext/standard/fsock.lo: /root/php-src/ext/standard/fsock.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/fsock.c -o ext/standard/fsock.lo  -MMD -MF ext/standard/fsock.dep -MT ext/standard/fsock.lo
-include ext/standard/head.dep
ext/standard/head.lo: /root/php-src/ext/standard/head.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/head.c -o ext/standard/head.lo  -MMD -MF ext/standard/head.dep -MT ext/standard/head.lo
-include ext/standard/html.dep
ext/standard/html.lo: /root/php-src/ext/standard/html.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/html.c -o ext/standard/html.lo  -MMD -MF ext/standard/html.dep -MT ext/standard/html.lo
-include ext/standard/image.dep
ext/standard/image.lo: /root/php-src/ext/standard/image.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/image.c -o ext/standard/image.lo  -MMD -MF ext/standard/image.dep -MT ext/standard/image.lo
-include ext/standard/info.dep
ext/standard/info.lo: /root/php-src/ext/standard/info.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/info.c -o ext/standard/info.lo  -MMD -MF ext/standard/info.dep -MT ext/standard/info.lo
-include ext/standard/iptc.dep
ext/standard/iptc.lo: /root/php-src/ext/standard/iptc.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/iptc.c -o ext/standard/iptc.lo  -MMD -MF ext/standard/iptc.dep -MT ext/standard/iptc.lo
-include ext/standard/lcg.dep
ext/standard/lcg.lo: /root/php-src/ext/standard/lcg.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/lcg.c -o ext/standard/lcg.lo  -MMD -MF ext/standard/lcg.dep -MT ext/standard/lcg.lo
-include ext/standard/link.dep
ext/standard/link.lo: /root/php-src/ext/standard/link.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/link.c -o ext/standard/link.lo  -MMD -MF ext/standard/link.dep -MT ext/standard/link.lo
-include ext/standard/mail.dep
ext/standard/mail.lo: /root/php-src/ext/standard/mail.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/mail.c -o ext/standard/mail.lo  -MMD -MF ext/standard/mail.dep -MT ext/standard/mail.lo
-include ext/standard/math.dep
ext/standard/math.lo: /root/php-src/ext/standard/math.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/math.c -o ext/standard/math.lo  -MMD -MF ext/standard/math.dep -MT ext/standard/math.lo
-include ext/standard/md5.dep
ext/standard/md5.lo: /root/php-src/ext/standard/md5.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/md5.c -o ext/standard/md5.lo  -MMD -MF ext/standard/md5.dep -MT ext/standard/md5.lo
-include ext/standard/metaphone.dep
ext/standard/metaphone.lo: /root/php-src/ext/standard/metaphone.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/metaphone.c -o ext/standard/metaphone.lo  -MMD -MF ext/standard/metaphone.dep -MT ext/standard/metaphone.lo
-include ext/standard/microtime.dep
ext/standard/microtime.lo: /root/php-src/ext/standard/microtime.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/microtime.c -o ext/standard/microtime.lo  -MMD -MF ext/standard/microtime.dep -MT ext/standard/microtime.lo
-include ext/standard/pack.dep
ext/standard/pack.lo: /root/php-src/ext/standard/pack.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/pack.c -o ext/standard/pack.lo  -MMD -MF ext/standard/pack.dep -MT ext/standard/pack.lo
-include ext/standard/pageinfo.dep
ext/standard/pageinfo.lo: /root/php-src/ext/standard/pageinfo.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/pageinfo.c -o ext/standard/pageinfo.lo  -MMD -MF ext/standard/pageinfo.dep -MT ext/standard/pageinfo.lo
-include ext/standard/quot_print.dep
ext/standard/quot_print.lo: /root/php-src/ext/standard/quot_print.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/quot_print.c -o ext/standard/quot_print.lo  -MMD -MF ext/standard/quot_print.dep -MT ext/standard/quot_print.lo
-include ext/standard/rand.dep
ext/standard/rand.lo: /root/php-src/ext/standard/rand.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/rand.c -o ext/standard/rand.lo  -MMD -MF ext/standard/rand.dep -MT ext/standard/rand.lo
-include ext/standard/mt_rand.dep
ext/standard/mt_rand.lo: /root/php-src/ext/standard/mt_rand.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/mt_rand.c -o ext/standard/mt_rand.lo  -MMD -MF ext/standard/mt_rand.dep -MT ext/standard/mt_rand.lo
-include ext/standard/soundex.dep
ext/standard/soundex.lo: /root/php-src/ext/standard/soundex.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/soundex.c -o ext/standard/soundex.lo  -MMD -MF ext/standard/soundex.dep -MT ext/standard/soundex.lo
-include ext/standard/string.dep
ext/standard/string.lo: /root/php-src/ext/standard/string.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/string.c -o ext/standard/string.lo  -MMD -MF ext/standard/string.dep -MT ext/standard/string.lo
-include ext/standard/scanf.dep
ext/standard/scanf.lo: /root/php-src/ext/standard/scanf.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/scanf.c -o ext/standard/scanf.lo  -MMD -MF ext/standard/scanf.dep -MT ext/standard/scanf.lo
-include ext/standard/syslog.dep
ext/standard/syslog.lo: /root/php-src/ext/standard/syslog.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/syslog.c -o ext/standard/syslog.lo  -MMD -MF ext/standard/syslog.dep -MT ext/standard/syslog.lo
-include ext/standard/type.dep
ext/standard/type.lo: /root/php-src/ext/standard/type.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/type.c -o ext/standard/type.lo  -MMD -MF ext/standard/type.dep -MT ext/standard/type.lo
-include ext/standard/uniqid.dep
ext/standard/uniqid.lo: /root/php-src/ext/standard/uniqid.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/uniqid.c -o ext/standard/uniqid.lo  -MMD -MF ext/standard/uniqid.dep -MT ext/standard/uniqid.lo
-include ext/standard/url.dep
ext/standard/url.lo: /root/php-src/ext/standard/url.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/url.c -o ext/standard/url.lo  -MMD -MF ext/standard/url.dep -MT ext/standard/url.lo
-include ext/standard/var.dep
ext/standard/var.lo: /root/php-src/ext/standard/var.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/var.c -o ext/standard/var.lo  -MMD -MF ext/standard/var.dep -MT ext/standard/var.lo
-include ext/standard/versioning.dep
ext/standard/versioning.lo: /root/php-src/ext/standard/versioning.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/versioning.c -o ext/standard/versioning.lo  -MMD -MF ext/standard/versioning.dep -MT ext/standard/versioning.lo
-include ext/standard/assert.dep
ext/standard/assert.lo: /root/php-src/ext/standard/assert.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/assert.c -o ext/standard/assert.lo  -MMD -MF ext/standard/assert.dep -MT ext/standard/assert.lo
-include ext/standard/strnatcmp.dep
ext/standard/strnatcmp.lo: /root/php-src/ext/standard/strnatcmp.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/strnatcmp.c -o ext/standard/strnatcmp.lo  -MMD -MF ext/standard/strnatcmp.dep -MT ext/standard/strnatcmp.lo
-include ext/standard/levenshtein.dep
ext/standard/levenshtein.lo: /root/php-src/ext/standard/levenshtein.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/levenshtein.c -o ext/standard/levenshtein.lo  -MMD -MF ext/standard/levenshtein.dep -MT ext/standard/levenshtein.lo
-include ext/standard/incomplete_class.dep
ext/standard/incomplete_class.lo: /root/php-src/ext/standard/incomplete_class.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/incomplete_class.c -o ext/standard/incomplete_class.lo  -MMD -MF ext/standard/incomplete_class.dep -MT ext/standard/incomplete_class.lo
-include ext/standard/url_scanner_ex.dep
ext/standard/url_scanner_ex.lo: /root/php-src/ext/standard/url_scanner_ex.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/url_scanner_ex.c -o ext/standard/url_scanner_ex.lo  -MMD -MF ext/standard/url_scanner_ex.dep -MT ext/standard/url_scanner_ex.lo
-include ext/standard/ftp_fopen_wrapper.dep
ext/standard/ftp_fopen_wrapper.lo: /root/php-src/ext/standard/ftp_fopen_wrapper.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/ftp_fopen_wrapper.c -o ext/standard/ftp_fopen_wrapper.lo  -MMD -MF ext/standard/ftp_fopen_wrapper.dep -MT ext/standard/ftp_fopen_wrapper.lo
-include ext/standard/http_fopen_wrapper.dep
ext/standard/http_fopen_wrapper.lo: /root/php-src/ext/standard/http_fopen_wrapper.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/http_fopen_wrapper.c -o ext/standard/http_fopen_wrapper.lo  -MMD -MF ext/standard/http_fopen_wrapper.dep -MT ext/standard/http_fopen_wrapper.lo
-include ext/standard/php_fopen_wrapper.dep
ext/standard/php_fopen_wrapper.lo: /root/php-src/ext/standard/php_fopen_wrapper.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/php_fopen_wrapper.c -o ext/standard/php_fopen_wrapper.lo  -MMD -MF ext/standard/php_fopen_wrapper.dep -MT ext/standard/php_fopen_wrapper.lo
-include ext/standard/credits.dep
ext/standard/credits.lo: /root/php-src/ext/standard/credits.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/credits.c -o ext/standard/credits.lo  -MMD -MF ext/standard/credits.dep -MT ext/standard/credits.lo
-include ext/standard/css.dep
ext/standard/css.lo: /root/php-src/ext/standard/css.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/css.c -o ext/standard/css.lo  -MMD -MF ext/standard/css.dep -MT ext/standard/css.lo
-include ext/standard/var_unserializer.dep
ext/standard/var_unserializer.lo: /root/php-src/ext/standard/var_unserializer.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/var_unserializer.c -o ext/standard/var_unserializer.lo  -MMD -MF ext/standard/var_unserializer.dep -MT ext/standard/var_unserializer.lo
-include ext/standard/ftok.dep
ext/standard/ftok.lo: /root/php-src/ext/standard/ftok.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/ftok.c -o ext/standard/ftok.lo  -MMD -MF ext/standard/ftok.dep -MT ext/standard/ftok.lo
-include ext/standard/sha1.dep
ext/standard/sha1.lo: /root/php-src/ext/standard/sha1.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/sha1.c -o ext/standard/sha1.lo  -MMD -MF ext/standard/sha1.dep -MT ext/standard/sha1.lo
-include ext/standard/user_filters.dep
ext/standard/user_filters.lo: /root/php-src/ext/standard/user_filters.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/user_filters.c -o ext/standard/user_filters.lo  -MMD -MF ext/standard/user_filters.dep -MT ext/standard/user_filters.lo
-include ext/standard/uuencode.dep
ext/standard/uuencode.lo: /root/php-src/ext/standard/uuencode.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/uuencode.c -o ext/standard/uuencode.lo  -MMD -MF ext/standard/uuencode.dep -MT ext/standard/uuencode.lo
-include ext/standard/filters.dep
ext/standard/filters.lo: /root/php-src/ext/standard/filters.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/filters.c -o ext/standard/filters.lo  -MMD -MF ext/standard/filters.dep -MT ext/standard/filters.lo
-include ext/standard/proc_open.dep
ext/standard/proc_open.lo: /root/php-src/ext/standard/proc_open.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/proc_open.c -o ext/standard/proc_open.lo  -MMD -MF ext/standard/proc_open.dep -MT ext/standard/proc_open.lo
-include ext/standard/streamsfuncs.dep
ext/standard/streamsfuncs.lo: /root/php-src/ext/standard/streamsfuncs.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/streamsfuncs.c -o ext/standard/streamsfuncs.lo  -MMD -MF ext/standard/streamsfuncs.dep -MT ext/standard/streamsfuncs.lo
-include ext/standard/http.dep
ext/standard/http.lo: /root/php-src/ext/standard/http.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/http.c -o ext/standard/http.lo  -MMD -MF ext/standard/http.dep -MT ext/standard/http.lo
-include ext/standard/password.dep
ext/standard/password.lo: /root/php-src/ext/standard/password.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/password.c -o ext/standard/password.lo  -MMD -MF ext/standard/password.dep -MT ext/standard/password.lo
-include ext/standard/random.dep
ext/standard/random.lo: /root/php-src/ext/standard/random.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/random.c -o ext/standard/random.lo  -MMD -MF ext/standard/random.dep -MT ext/standard/random.lo
-include ext/standard/net.dep
ext/standard/net.lo: /root/php-src/ext/standard/net.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/net.c -o ext/standard/net.lo  -MMD -MF ext/standard/net.dep -MT ext/standard/net.lo
-include ext/standard/hrtime.dep
ext/standard/hrtime.lo: /root/php-src/ext/standard/hrtime.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/hrtime.c -o ext/standard/hrtime.lo  -MMD -MF ext/standard/hrtime.dep -MT ext/standard/hrtime.lo
-include ext/standard/crc32_x86.dep
ext/standard/crc32_x86.lo: /root/php-src/ext/standard/crc32_x86.c
	$(LIBTOOL) --mode=compile $(CC) -Iext/standard/ -I/root/php-src/ext/standard/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/ext/standard/crc32_x86.c -o ext/standard/crc32_x86.lo  -MMD -MF ext/standard/crc32_x86.dep -MT ext/standard/crc32_x86.lo
-include TSRM/TSRM.dep
TSRM/TSRM.lo: /root/php-src/TSRM/TSRM.c
	$(LIBTOOL) --mode=compile $(CC) -ITSRM/ -I/root/php-src/TSRM/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/TSRM/TSRM.c -o TSRM/TSRM.lo  -MMD -MF TSRM/TSRM.dep -MT TSRM/TSRM.lo
-include main/main.dep
main/main.lo: /root/php-src/main/main.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/main.c -o main/main.lo  -MMD -MF main/main.dep -MT main/main.lo
-include main/snprintf.dep
main/snprintf.lo: /root/php-src/main/snprintf.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/snprintf.c -o main/snprintf.lo  -MMD -MF main/snprintf.dep -MT main/snprintf.lo
-include main/spprintf.dep
main/spprintf.lo: /root/php-src/main/spprintf.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/spprintf.c -o main/spprintf.lo  -MMD -MF main/spprintf.dep -MT main/spprintf.lo
-include main/fopen_wrappers.dep
main/fopen_wrappers.lo: /root/php-src/main/fopen_wrappers.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/fopen_wrappers.c -o main/fopen_wrappers.lo  -MMD -MF main/fopen_wrappers.dep -MT main/fopen_wrappers.lo
-include main/alloca.dep
main/alloca.lo: /root/php-src/main/alloca.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/alloca.c -o main/alloca.lo  -MMD -MF main/alloca.dep -MT main/alloca.lo
-include main/php_scandir.dep
main/php_scandir.lo: /root/php-src/main/php_scandir.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/php_scandir.c -o main/php_scandir.lo  -MMD -MF main/php_scandir.dep -MT main/php_scandir.lo
-include main/php_ini.dep
main/php_ini.lo: /root/php-src/main/php_ini.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/php_ini.c -o main/php_ini.lo  -MMD -MF main/php_ini.dep -MT main/php_ini.lo
-include main/SAPI.dep
main/SAPI.lo: /root/php-src/main/SAPI.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/SAPI.c -o main/SAPI.lo  -MMD -MF main/SAPI.dep -MT main/SAPI.lo
-include main/rfc1867.dep
main/rfc1867.lo: /root/php-src/main/rfc1867.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/rfc1867.c -o main/rfc1867.lo  -MMD -MF main/rfc1867.dep -MT main/rfc1867.lo
-include main/php_content_types.dep
main/php_content_types.lo: /root/php-src/main/php_content_types.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/php_content_types.c -o main/php_content_types.lo  -MMD -MF main/php_content_types.dep -MT main/php_content_types.lo
-include main/strlcpy.dep
main/strlcpy.lo: /root/php-src/main/strlcpy.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/strlcpy.c -o main/strlcpy.lo  -MMD -MF main/strlcpy.dep -MT main/strlcpy.lo
-include main/strlcat.dep
main/strlcat.lo: /root/php-src/main/strlcat.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/strlcat.c -o main/strlcat.lo  -MMD -MF main/strlcat.dep -MT main/strlcat.lo
-include main/explicit_bzero.dep
main/explicit_bzero.lo: /root/php-src/main/explicit_bzero.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/explicit_bzero.c -o main/explicit_bzero.lo  -MMD -MF main/explicit_bzero.dep -MT main/explicit_bzero.lo
-include main/reentrancy.dep
main/reentrancy.lo: /root/php-src/main/reentrancy.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/reentrancy.c -o main/reentrancy.lo  -MMD -MF main/reentrancy.dep -MT main/reentrancy.lo
-include main/php_variables.dep
main/php_variables.lo: /root/php-src/main/php_variables.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/php_variables.c -o main/php_variables.lo  -MMD -MF main/php_variables.dep -MT main/php_variables.lo
-include main/php_ticks.dep
main/php_ticks.lo: /root/php-src/main/php_ticks.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/php_ticks.c -o main/php_ticks.lo  -MMD -MF main/php_ticks.dep -MT main/php_ticks.lo
-include main/network.dep
main/network.lo: /root/php-src/main/network.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/network.c -o main/network.lo  -MMD -MF main/network.dep -MT main/network.lo
-include main/php_open_temporary_file.dep
main/php_open_temporary_file.lo: /root/php-src/main/php_open_temporary_file.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/php_open_temporary_file.c -o main/php_open_temporary_file.lo  -MMD -MF main/php_open_temporary_file.dep -MT main/php_open_temporary_file.lo
-include main/output.dep
main/output.lo: /root/php-src/main/output.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/output.c -o main/output.lo  -MMD -MF main/output.dep -MT main/output.lo
-include main/getopt.dep
main/getopt.lo: /root/php-src/main/getopt.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/getopt.c -o main/getopt.lo  -MMD -MF main/getopt.dep -MT main/getopt.lo
-include main/php_syslog.dep
main/php_syslog.lo: /root/php-src/main/php_syslog.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/php_syslog.c -o main/php_syslog.lo  -MMD -MF main/php_syslog.dep -MT main/php_syslog.lo
-include main/fastcgi.dep
main/fastcgi.lo: /root/php-src/main/fastcgi.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/fastcgi.c -o main/fastcgi.lo  -MMD -MF main/fastcgi.dep -MT main/fastcgi.lo
-include main/streams/streams.dep
main/streams/streams.lo: /root/php-src/main/streams/streams.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/streams/ -I/root/php-src/main/streams/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/streams/streams.c -o main/streams/streams.lo  -MMD -MF main/streams/streams.dep -MT main/streams/streams.lo
-include main/streams/cast.dep
main/streams/cast.lo: /root/php-src/main/streams/cast.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/streams/ -I/root/php-src/main/streams/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/streams/cast.c -o main/streams/cast.lo  -MMD -MF main/streams/cast.dep -MT main/streams/cast.lo
-include main/streams/memory.dep
main/streams/memory.lo: /root/php-src/main/streams/memory.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/streams/ -I/root/php-src/main/streams/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/streams/memory.c -o main/streams/memory.lo  -MMD -MF main/streams/memory.dep -MT main/streams/memory.lo
-include main/streams/filter.dep
main/streams/filter.lo: /root/php-src/main/streams/filter.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/streams/ -I/root/php-src/main/streams/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/streams/filter.c -o main/streams/filter.lo  -MMD -MF main/streams/filter.dep -MT main/streams/filter.lo
-include main/streams/plain_wrapper.dep
main/streams/plain_wrapper.lo: /root/php-src/main/streams/plain_wrapper.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/streams/ -I/root/php-src/main/streams/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/streams/plain_wrapper.c -o main/streams/plain_wrapper.lo  -MMD -MF main/streams/plain_wrapper.dep -MT main/streams/plain_wrapper.lo
-include main/streams/userspace.dep
main/streams/userspace.lo: /root/php-src/main/streams/userspace.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/streams/ -I/root/php-src/main/streams/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/streams/userspace.c -o main/streams/userspace.lo  -MMD -MF main/streams/userspace.dep -MT main/streams/userspace.lo
-include main/streams/transports.dep
main/streams/transports.lo: /root/php-src/main/streams/transports.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/streams/ -I/root/php-src/main/streams/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/streams/transports.c -o main/streams/transports.lo  -MMD -MF main/streams/transports.dep -MT main/streams/transports.lo
-include main/streams/xp_socket.dep
main/streams/xp_socket.lo: /root/php-src/main/streams/xp_socket.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/streams/ -I/root/php-src/main/streams/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/streams/xp_socket.c -o main/streams/xp_socket.lo  -MMD -MF main/streams/xp_socket.dep -MT main/streams/xp_socket.lo
-include main/streams/mmap.dep
main/streams/mmap.lo: /root/php-src/main/streams/mmap.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/streams/ -I/root/php-src/main/streams/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/streams/mmap.c -o main/streams/mmap.lo  -MMD -MF main/streams/mmap.dep -MT main/streams/mmap.lo
-include main/streams/glob_wrapper.dep
main/streams/glob_wrapper.lo: /root/php-src/main/streams/glob_wrapper.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/streams/ -I/root/php-src/main/streams/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/main/streams/glob_wrapper.c -o main/streams/glob_wrapper.lo  -MMD -MF main/streams/glob_wrapper.dep -MT main/streams/glob_wrapper.lo
-include main/internal_functions.dep
main/internal_functions.lo: main/internal_functions.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c main/internal_functions.c -o main/internal_functions.lo  -MMD -MF main/internal_functions.dep -MT main/internal_functions.lo
-include main/internal_functions_cli.dep
main/internal_functions_cli.lo: main/internal_functions_cli.c
	$(LIBTOOL) --mode=compile $(CC) -Imain/ -I/root/php-src/main/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c main/internal_functions_cli.c -o main/internal_functions_cli.lo  -MMD -MF main/internal_functions_cli.dep -MT main/internal_functions_cli.lo
-include Zend/zend_language_parser.dep
Zend/zend_language_parser.lo: /root/php-src/Zend/zend_language_parser.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_language_parser.c -o Zend/zend_language_parser.lo  -MMD -MF Zend/zend_language_parser.dep -MT Zend/zend_language_parser.lo
-include Zend/zend_language_scanner.dep
Zend/zend_language_scanner.lo: /root/php-src/Zend/zend_language_scanner.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_language_scanner.c -o Zend/zend_language_scanner.lo  -MMD -MF Zend/zend_language_scanner.dep -MT Zend/zend_language_scanner.lo
-include Zend/zend_ini_parser.dep
Zend/zend_ini_parser.lo: /root/php-src/Zend/zend_ini_parser.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_ini_parser.c -o Zend/zend_ini_parser.lo  -MMD -MF Zend/zend_ini_parser.dep -MT Zend/zend_ini_parser.lo
-include Zend/zend_ini_scanner.dep
Zend/zend_ini_scanner.lo: /root/php-src/Zend/zend_ini_scanner.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_ini_scanner.c -o Zend/zend_ini_scanner.lo  -MMD -MF Zend/zend_ini_scanner.dep -MT Zend/zend_ini_scanner.lo
-include Zend/zend_alloc.dep
Zend/zend_alloc.lo: /root/php-src/Zend/zend_alloc.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_alloc.c -o Zend/zend_alloc.lo  -MMD -MF Zend/zend_alloc.dep -MT Zend/zend_alloc.lo
-include Zend/zend_compile.dep
Zend/zend_compile.lo: /root/php-src/Zend/zend_compile.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_compile.c -o Zend/zend_compile.lo  -MMD -MF Zend/zend_compile.dep -MT Zend/zend_compile.lo
-include Zend/zend_constants.dep
Zend/zend_constants.lo: /root/php-src/Zend/zend_constants.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_constants.c -o Zend/zend_constants.lo  -MMD -MF Zend/zend_constants.dep -MT Zend/zend_constants.lo
-include Zend/zend_dtrace.dep
Zend/zend_dtrace.lo: /root/php-src/Zend/zend_dtrace.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_dtrace.c -o Zend/zend_dtrace.lo  -MMD -MF Zend/zend_dtrace.dep -MT Zend/zend_dtrace.lo
-include Zend/zend_execute_API.dep
Zend/zend_execute_API.lo: /root/php-src/Zend/zend_execute_API.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_execute_API.c -o Zend/zend_execute_API.lo  -MMD -MF Zend/zend_execute_API.dep -MT Zend/zend_execute_API.lo
-include Zend/zend_highlight.dep
Zend/zend_highlight.lo: /root/php-src/Zend/zend_highlight.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_highlight.c -o Zend/zend_highlight.lo  -MMD -MF Zend/zend_highlight.dep -MT Zend/zend_highlight.lo
-include Zend/zend_llist.dep
Zend/zend_llist.lo: /root/php-src/Zend/zend_llist.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_llist.c -o Zend/zend_llist.lo  -MMD -MF Zend/zend_llist.dep -MT Zend/zend_llist.lo
-include Zend/zend_vm_opcodes.dep
Zend/zend_vm_opcodes.lo: /root/php-src/Zend/zend_vm_opcodes.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_vm_opcodes.c -o Zend/zend_vm_opcodes.lo  -MMD -MF Zend/zend_vm_opcodes.dep -MT Zend/zend_vm_opcodes.lo
-include Zend/zend_opcode.dep
Zend/zend_opcode.lo: /root/php-src/Zend/zend_opcode.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_opcode.c -o Zend/zend_opcode.lo  -MMD -MF Zend/zend_opcode.dep -MT Zend/zend_opcode.lo
-include Zend/zend_operators.dep
Zend/zend_operators.lo: /root/php-src/Zend/zend_operators.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_operators.c -o Zend/zend_operators.lo  -MMD -MF Zend/zend_operators.dep -MT Zend/zend_operators.lo
-include Zend/zend_ptr_stack.dep
Zend/zend_ptr_stack.lo: /root/php-src/Zend/zend_ptr_stack.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_ptr_stack.c -o Zend/zend_ptr_stack.lo  -MMD -MF Zend/zend_ptr_stack.dep -MT Zend/zend_ptr_stack.lo
-include Zend/zend_stack.dep
Zend/zend_stack.lo: /root/php-src/Zend/zend_stack.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_stack.c -o Zend/zend_stack.lo  -MMD -MF Zend/zend_stack.dep -MT Zend/zend_stack.lo
-include Zend/zend_variables.dep
Zend/zend_variables.lo: /root/php-src/Zend/zend_variables.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_variables.c -o Zend/zend_variables.lo  -MMD -MF Zend/zend_variables.dep -MT Zend/zend_variables.lo
-include Zend/zend.dep
Zend/zend.lo: /root/php-src/Zend/zend.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend.c -o Zend/zend.lo  -MMD -MF Zend/zend.dep -MT Zend/zend.lo
-include Zend/zend_API.dep
Zend/zend_API.lo: /root/php-src/Zend/zend_API.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_API.c -o Zend/zend_API.lo  -MMD -MF Zend/zend_API.dep -MT Zend/zend_API.lo
-include Zend/zend_extensions.dep
Zend/zend_extensions.lo: /root/php-src/Zend/zend_extensions.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_extensions.c -o Zend/zend_extensions.lo  -MMD -MF Zend/zend_extensions.dep -MT Zend/zend_extensions.lo
-include Zend/zend_hash.dep
Zend/zend_hash.lo: /root/php-src/Zend/zend_hash.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_hash.c -o Zend/zend_hash.lo  -MMD -MF Zend/zend_hash.dep -MT Zend/zend_hash.lo
-include Zend/zend_list.dep
Zend/zend_list.lo: /root/php-src/Zend/zend_list.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_list.c -o Zend/zend_list.lo  -MMD -MF Zend/zend_list.dep -MT Zend/zend_list.lo
-include Zend/zend_builtin_functions.dep
Zend/zend_builtin_functions.lo: /root/php-src/Zend/zend_builtin_functions.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_builtin_functions.c -o Zend/zend_builtin_functions.lo  -MMD -MF Zend/zend_builtin_functions.dep -MT Zend/zend_builtin_functions.lo
-include Zend/zend_attributes.dep
Zend/zend_attributes.lo: /root/php-src/Zend/zend_attributes.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_attributes.c -o Zend/zend_attributes.lo  -MMD -MF Zend/zend_attributes.dep -MT Zend/zend_attributes.lo
-include Zend/zend_execute.dep
Zend/zend_execute.lo: /root/php-src/Zend/zend_execute.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_execute.c -o Zend/zend_execute.lo  -MMD -MF Zend/zend_execute.dep -MT Zend/zend_execute.lo
-include Zend/zend_ini.dep
Zend/zend_ini.lo: /root/php-src/Zend/zend_ini.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_ini.c -o Zend/zend_ini.lo  -MMD -MF Zend/zend_ini.dep -MT Zend/zend_ini.lo
-include Zend/zend_sort.dep
Zend/zend_sort.lo: /root/php-src/Zend/zend_sort.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_sort.c -o Zend/zend_sort.lo  -MMD -MF Zend/zend_sort.dep -MT Zend/zend_sort.lo
-include Zend/zend_multibyte.dep
Zend/zend_multibyte.lo: /root/php-src/Zend/zend_multibyte.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_multibyte.c -o Zend/zend_multibyte.lo  -MMD -MF Zend/zend_multibyte.dep -MT Zend/zend_multibyte.lo
-include Zend/zend_stream.dep
Zend/zend_stream.lo: /root/php-src/Zend/zend_stream.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_stream.c -o Zend/zend_stream.lo  -MMD -MF Zend/zend_stream.dep -MT Zend/zend_stream.lo
-include Zend/zend_iterators.dep
Zend/zend_iterators.lo: /root/php-src/Zend/zend_iterators.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_iterators.c -o Zend/zend_iterators.lo  -MMD -MF Zend/zend_iterators.dep -MT Zend/zend_iterators.lo
-include Zend/zend_interfaces.dep
Zend/zend_interfaces.lo: /root/php-src/Zend/zend_interfaces.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_interfaces.c -o Zend/zend_interfaces.lo  -MMD -MF Zend/zend_interfaces.dep -MT Zend/zend_interfaces.lo
-include Zend/zend_exceptions.dep
Zend/zend_exceptions.lo: /root/php-src/Zend/zend_exceptions.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_exceptions.c -o Zend/zend_exceptions.lo  -MMD -MF Zend/zend_exceptions.dep -MT Zend/zend_exceptions.lo
-include Zend/zend_strtod.dep
Zend/zend_strtod.lo: /root/php-src/Zend/zend_strtod.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_strtod.c -o Zend/zend_strtod.lo  -MMD -MF Zend/zend_strtod.dep -MT Zend/zend_strtod.lo
-include Zend/zend_gc.dep
Zend/zend_gc.lo: /root/php-src/Zend/zend_gc.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_gc.c -o Zend/zend_gc.lo  -MMD -MF Zend/zend_gc.dep -MT Zend/zend_gc.lo
-include Zend/zend_closures.dep
Zend/zend_closures.lo: /root/php-src/Zend/zend_closures.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_closures.c -o Zend/zend_closures.lo  -MMD -MF Zend/zend_closures.dep -MT Zend/zend_closures.lo
-include Zend/zend_weakrefs.dep
Zend/zend_weakrefs.lo: /root/php-src/Zend/zend_weakrefs.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_weakrefs.c -o Zend/zend_weakrefs.lo  -MMD -MF Zend/zend_weakrefs.dep -MT Zend/zend_weakrefs.lo
-include Zend/zend_float.dep
Zend/zend_float.lo: /root/php-src/Zend/zend_float.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_float.c -o Zend/zend_float.lo  -MMD -MF Zend/zend_float.dep -MT Zend/zend_float.lo
-include Zend/zend_string.dep
Zend/zend_string.lo: /root/php-src/Zend/zend_string.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_string.c -o Zend/zend_string.lo  -MMD -MF Zend/zend_string.dep -MT Zend/zend_string.lo
-include Zend/zend_signal.dep
Zend/zend_signal.lo: /root/php-src/Zend/zend_signal.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_signal.c -o Zend/zend_signal.lo  -MMD -MF Zend/zend_signal.dep -MT Zend/zend_signal.lo
-include Zend/zend_generators.dep
Zend/zend_generators.lo: /root/php-src/Zend/zend_generators.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_generators.c -o Zend/zend_generators.lo  -MMD -MF Zend/zend_generators.dep -MT Zend/zend_generators.lo
-include Zend/zend_virtual_cwd.dep
Zend/zend_virtual_cwd.lo: /root/php-src/Zend/zend_virtual_cwd.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_virtual_cwd.c -o Zend/zend_virtual_cwd.lo  -MMD -MF Zend/zend_virtual_cwd.dep -MT Zend/zend_virtual_cwd.lo
-include Zend/zend_ast.dep
Zend/zend_ast.lo: /root/php-src/Zend/zend_ast.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_ast.c -o Zend/zend_ast.lo  -MMD -MF Zend/zend_ast.dep -MT Zend/zend_ast.lo
-include Zend/zend_objects.dep
Zend/zend_objects.lo: /root/php-src/Zend/zend_objects.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_objects.c -o Zend/zend_objects.lo  -MMD -MF Zend/zend_objects.dep -MT Zend/zend_objects.lo
-include Zend/zend_object_handlers.dep
Zend/zend_object_handlers.lo: /root/php-src/Zend/zend_object_handlers.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_object_handlers.c -o Zend/zend_object_handlers.lo  -MMD -MF Zend/zend_object_handlers.dep -MT Zend/zend_object_handlers.lo
-include Zend/zend_objects_API.dep
Zend/zend_objects_API.lo: /root/php-src/Zend/zend_objects_API.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_objects_API.c -o Zend/zend_objects_API.lo  -MMD -MF Zend/zend_objects_API.dep -MT Zend/zend_objects_API.lo
-include Zend/zend_default_classes.dep
Zend/zend_default_classes.lo: /root/php-src/Zend/zend_default_classes.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_default_classes.c -o Zend/zend_default_classes.lo  -MMD -MF Zend/zend_default_classes.dep -MT Zend/zend_default_classes.lo
-include Zend/zend_inheritance.dep
Zend/zend_inheritance.lo: /root/php-src/Zend/zend_inheritance.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_inheritance.c -o Zend/zend_inheritance.lo  -MMD -MF Zend/zend_inheritance.dep -MT Zend/zend_inheritance.lo
-include Zend/zend_smart_str.dep
Zend/zend_smart_str.lo: /root/php-src/Zend/zend_smart_str.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_smart_str.c -o Zend/zend_smart_str.lo  -MMD -MF Zend/zend_smart_str.dep -MT Zend/zend_smart_str.lo
-include Zend/zend_cpuinfo.dep
Zend/zend_cpuinfo.lo: /root/php-src/Zend/zend_cpuinfo.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_cpuinfo.c -o Zend/zend_cpuinfo.lo  -MMD -MF Zend/zend_cpuinfo.dep -MT Zend/zend_cpuinfo.lo
-include Zend/zend_gdb.dep
Zend/zend_gdb.lo: /root/php-src/Zend/zend_gdb.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_gdb.c -o Zend/zend_gdb.lo  -MMD -MF Zend/zend_gdb.dep -MT Zend/zend_gdb.lo
-include Zend/zend_observer.dep
Zend/zend_observer.lo: /root/php-src/Zend/zend_observer.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_observer.c -o Zend/zend_observer.lo  -MMD -MF Zend/zend_observer.dep -MT Zend/zend_observer.lo
-include Zend/zend_system_id.dep
Zend/zend_system_id.lo: /root/php-src/Zend/zend_system_id.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_system_id.c -o Zend/zend_system_id.lo  -MMD -MF Zend/zend_system_id.dep -MT Zend/zend_system_id.lo
-include Zend/zend_enum.dep
Zend/zend_enum.lo: /root/php-src/Zend/zend_enum.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_enum.c -o Zend/zend_enum.lo  -MMD -MF Zend/zend_enum.dep -MT Zend/zend_enum.lo
-include Zend/zend_fibers.dep
Zend/zend_fibers.lo: /root/php-src/Zend/zend_fibers.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/zend_fibers.c -o Zend/zend_fibers.lo  -MMD -MF Zend/zend_fibers.dep -MT Zend/zend_fibers.lo
-include Zend/Optimizer/zend_optimizer.dep
Zend/Optimizer/zend_optimizer.lo: /root/php-src/Zend/Optimizer/zend_optimizer.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/Optimizer/zend_optimizer.c -o Zend/Optimizer/zend_optimizer.lo  -MMD -MF Zend/Optimizer/zend_optimizer.dep -MT Zend/Optimizer/zend_optimizer.lo
-include Zend/Optimizer/pass1.dep
Zend/Optimizer/pass1.lo: /root/php-src/Zend/Optimizer/pass1.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/Optimizer/pass1.c -o Zend/Optimizer/pass1.lo  -MMD -MF Zend/Optimizer/pass1.dep -MT Zend/Optimizer/pass1.lo
-include Zend/Optimizer/pass3.dep
Zend/Optimizer/pass3.lo: /root/php-src/Zend/Optimizer/pass3.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/Optimizer/pass3.c -o Zend/Optimizer/pass3.lo  -MMD -MF Zend/Optimizer/pass3.dep -MT Zend/Optimizer/pass3.lo
-include Zend/Optimizer/optimize_func_calls.dep
Zend/Optimizer/optimize_func_calls.lo: /root/php-src/Zend/Optimizer/optimize_func_calls.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/Optimizer/optimize_func_calls.c -o Zend/Optimizer/optimize_func_calls.lo  -MMD -MF Zend/Optimizer/optimize_func_calls.dep -MT Zend/Optimizer/optimize_func_calls.lo
-include Zend/Optimizer/block_pass.dep
Zend/Optimizer/block_pass.lo: /root/php-src/Zend/Optimizer/block_pass.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/Optimizer/block_pass.c -o Zend/Optimizer/block_pass.lo  -MMD -MF Zend/Optimizer/block_pass.dep -MT Zend/Optimizer/block_pass.lo
-include Zend/Optimizer/optimize_temp_vars_5.dep
Zend/Optimizer/optimize_temp_vars_5.lo: /root/php-src/Zend/Optimizer/optimize_temp_vars_5.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/Optimizer/optimize_temp_vars_5.c -o Zend/Optimizer/optimize_temp_vars_5.lo  -MMD -MF Zend/Optimizer/optimize_temp_vars_5.dep -MT Zend/Optimizer/optimize_temp_vars_5.lo
-include Zend/Optimizer/nop_removal.dep
Zend/Optimizer/nop_removal.lo: /root/php-src/Zend/Optimizer/nop_removal.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/Optimizer/nop_removal.c -o Zend/Optimizer/nop_removal.lo  -MMD -MF Zend/Optimizer/nop_removal.dep -MT Zend/Optimizer/nop_removal.lo
-include Zend/Optimizer/compact_literals.dep
Zend/Optimizer/compact_literals.lo: /root/php-src/Zend/Optimizer/compact_literals.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/Optimizer/compact_literals.c -o Zend/Optimizer/compact_literals.lo  -MMD -MF Zend/Optimizer/compact_literals.dep -MT Zend/Optimizer/compact_literals.lo
-include Zend/Optimizer/zend_cfg.dep
Zend/Optimizer/zend_cfg.lo: /root/php-src/Zend/Optimizer/zend_cfg.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/Optimizer/zend_cfg.c -o Zend/Optimizer/zend_cfg.lo  -MMD -MF Zend/Optimizer/zend_cfg.dep -MT Zend/Optimizer/zend_cfg.lo
-include Zend/Optimizer/zend_dfg.dep
Zend/Optimizer/zend_dfg.lo: /root/php-src/Zend/Optimizer/zend_dfg.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/Optimizer/zend_dfg.c -o Zend/Optimizer/zend_dfg.lo  -MMD -MF Zend/Optimizer/zend_dfg.dep -MT Zend/Optimizer/zend_dfg.lo
-include Zend/Optimizer/dfa_pass.dep
Zend/Optimizer/dfa_pass.lo: /root/php-src/Zend/Optimizer/dfa_pass.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/Optimizer/dfa_pass.c -o Zend/Optimizer/dfa_pass.lo  -MMD -MF Zend/Optimizer/dfa_pass.dep -MT Zend/Optimizer/dfa_pass.lo
-include Zend/Optimizer/zend_ssa.dep
Zend/Optimizer/zend_ssa.lo: /root/php-src/Zend/Optimizer/zend_ssa.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/Optimizer/zend_ssa.c -o Zend/Optimizer/zend_ssa.lo  -MMD -MF Zend/Optimizer/zend_ssa.dep -MT Zend/Optimizer/zend_ssa.lo
-include Zend/Optimizer/zend_inference.dep
Zend/Optimizer/zend_inference.lo: /root/php-src/Zend/Optimizer/zend_inference.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/Optimizer/zend_inference.c -o Zend/Optimizer/zend_inference.lo  -MMD -MF Zend/Optimizer/zend_inference.dep -MT Zend/Optimizer/zend_inference.lo
-include Zend/Optimizer/zend_func_info.dep
Zend/Optimizer/zend_func_info.lo: /root/php-src/Zend/Optimizer/zend_func_info.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/Optimizer/zend_func_info.c -o Zend/Optimizer/zend_func_info.lo  -MMD -MF Zend/Optimizer/zend_func_info.dep -MT Zend/Optimizer/zend_func_info.lo
-include Zend/Optimizer/zend_call_graph.dep
Zend/Optimizer/zend_call_graph.lo: /root/php-src/Zend/Optimizer/zend_call_graph.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/Optimizer/zend_call_graph.c -o Zend/Optimizer/zend_call_graph.lo  -MMD -MF Zend/Optimizer/zend_call_graph.dep -MT Zend/Optimizer/zend_call_graph.lo
-include Zend/Optimizer/sccp.dep
Zend/Optimizer/sccp.lo: /root/php-src/Zend/Optimizer/sccp.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/Optimizer/sccp.c -o Zend/Optimizer/sccp.lo  -MMD -MF Zend/Optimizer/sccp.dep -MT Zend/Optimizer/sccp.lo
-include Zend/Optimizer/scdf.dep
Zend/Optimizer/scdf.lo: /root/php-src/Zend/Optimizer/scdf.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/Optimizer/scdf.c -o Zend/Optimizer/scdf.lo  -MMD -MF Zend/Optimizer/scdf.dep -MT Zend/Optimizer/scdf.lo
-include Zend/Optimizer/dce.dep
Zend/Optimizer/dce.lo: /root/php-src/Zend/Optimizer/dce.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/Optimizer/dce.c -o Zend/Optimizer/dce.lo  -MMD -MF Zend/Optimizer/dce.dep -MT Zend/Optimizer/dce.lo
-include Zend/Optimizer/escape_analysis.dep
Zend/Optimizer/escape_analysis.lo: /root/php-src/Zend/Optimizer/escape_analysis.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/Optimizer/escape_analysis.c -o Zend/Optimizer/escape_analysis.lo  -MMD -MF Zend/Optimizer/escape_analysis.dep -MT Zend/Optimizer/escape_analysis.lo
-include Zend/Optimizer/compact_vars.dep
Zend/Optimizer/compact_vars.lo: /root/php-src/Zend/Optimizer/compact_vars.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/Optimizer/compact_vars.c -o Zend/Optimizer/compact_vars.lo  -MMD -MF Zend/Optimizer/compact_vars.dep -MT Zend/Optimizer/compact_vars.lo
-include Zend/Optimizer/zend_dump.dep
Zend/Optimizer/zend_dump.lo: /root/php-src/Zend/Optimizer/zend_dump.c
	$(LIBTOOL) --mode=compile $(CC) -IZend/ -I/root/php-src/Zend/ $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -c /root/php-src/Zend/Optimizer/zend_dump.c -o Zend/Optimizer/zend_dump.lo  -MMD -MF Zend/Optimizer/zend_dump.dep -MT Zend/Optimizer/zend_dump.lo
