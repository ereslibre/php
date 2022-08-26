- devshell zig bison re2c pkg-config libxml2 sqlite

-
    export CC="zig cc"
    export LD="zig cc"

- ./configure --host=x86_64-linux-musl --disable-xml --without-libxml --disable-dom  --without-iconv --without-openssl --disable-simplexml --disable-xml --disable-xmlreader --disable-xmlwriter --without-pear --without-sqlite3 --disable-pdo --without-pdo-sqlite --disable-phar --disable-opcache --disable-zend-signals --without-pcre-jit

- make
