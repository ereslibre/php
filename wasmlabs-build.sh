#!/bin/bash

if [[ ! -v WASI_SDK_ROOT ]]
then
    echo "Please set WASI_SDK_ROOT and run again"
    exit 1
fi

if [[ ! -v WASMLABS_BUILD_OUTPUT ]]
then
    echo "Assuming $PWD/wasmlabs-build-output as WASMLABS_BUILD_OUTPUT"
    export WASMLABS_BUILD_OUTPUT=$PWD/wasmlabs-build-output
fi

function onExit {
    echo "=============================================================="
    echo "Build progress logs:"
    cat wasmlabs-progress.log
}
trap onExit EXIT

echo "$(date --iso-8601=ns) | Using WASI_SDK_ROOT=$WASI_SDK_ROOT " > wasmlabs-progress.log

function logStatus {
    echo "$(date --iso-8601=ns) | $@" >> wasmlabs-progress.log
}

export WASI_SYSROOT="${WASI_SDK_ROOT}/share/wasi-sysroot"

export CC=${WASI_SDK_ROOT}/bin/clang
export LD=${WASI_SDK_ROOT}/bin/wasm-ld
export CXX=${WASI_SDK_ROOT}/bin/clang++
export NM=${WASI_SDK_ROOT}/bin/llvm-nm
export AR=${WASI_SDK_ROOT}/bin/llvm-ar
export RANLIB=${WASI_SDK_ROOT}/bin/llvm-ranlib

# export CFLAGS_CONFIG="-O3 -g"
export CFLAGS_CONFIG="-O2"

export CFLAGS_WASI="--sysroot=${WASI_SYSROOT} -D_WASI_EMULATED_MMAN -D_WASI_EMULATED_GETPID -D_WASI_EMULATED_SIGNAL -D_WASI_EMULATED_PROCESS_CLOCKS"
export LDFLAGS_WASI="--sysroot=${WASI_SYSROOT} -lwasi-emulated-mman -lwasi-emulated-getpid -lwasi-emulated-signal -lwasi-emulated-process-clocks"

export CFLAGS_SQLITE='-DSQLITE_OMIT_LOAD_EXTENSION=1'
export LDFLAGS_SQLITE='-lsqlite3'

export CFLAGS_LIBS="-I$WASMLABS_BUILD_OUTPUT/include"
export LDFLAGS_LIBS="-L$WASMLABS_BUILD_OUTPUT/lib"

export CFLAGS_PHP='-D_POSIX_SOURCE=1 -D_GNU_SOURCE=1 -DHAVE_FORK=0 -DWASM_WASI'

# We need to add LDFLAGS ot CFLAGS because autoconf compiles(+links) to binary when checking stuff
export LDFLAGS="$LDFLAGS_WASI $LDFLAGS_LIBS $LDFLAGS_SQLITE"
export CFLAGS="$CFLAGS_CONFIG $CFLAGS_WASI $CFLAGS_SQLITE $CFLAGS_LIBS $CFLAGS_PHP $LDFLAGS"

logStatus "Generating configure script... "
./buildconf --force

export PHP_CONFIGURE=' --without-libxml --disable-dom --without-iconv --without-openssl --disable-simplexml --disable-xml --disable-xmlreader --disable-xmlwriter --without-pear --disable-phar --disable-opcache --disable-zend-signals --without-pcre-jit --with-sqlite3 --enable-pdo --with-pdo-sqlite'

logStatus "Configuring build with '$PHP_CONFIGURE'... "
./configure --host=wasm32-wasi host_alias=wasm32-musl-wasi --target=wasm32-wasi target_alias=wasm32-musl-wasi $PHP_CONFIGURE

logStatus "Building php-cgi... "
make cgi

logStatus "Preparing artifacts... "
mkdir -p $WASMLABS_BUILD_OUTPUT/bin 2>/dev/null

cp sapi/cgi/php-cgi $WASMLABS_BUILD_OUTPUT/bin/

logStatus "DONE. Artifacts in $WASMLABS_BUILD_OUTPUT"
