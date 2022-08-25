use std::path::Path;

use anyhow::Result;
use wasmtime::*;
use wasmtime_wasi::sync::WasiCtxBuilder;

fn main() -> Result<()> {
    let mut config = Config::default();
    config.cranelift_opt_level(OptLevel::None);
    let engine = Engine::new(&config).expect("failure creating the engine");
    let mut linker = Linker::new(&engine);
    wasmtime_wasi::add_to_linker(&mut linker, |s| s)?;

    macro_rules! dummy_signature {
        (sig0) => { (|_: i32, _: i32, _: i32| (0 as i32)) };
        (sig2) => { (|_: i32| (0 as i32)) };
        (sig4) => { (|_: i32, _: i32| (0 as i32)) };
        (sig5) => { (|_: i32, _: i32, _: i32, _: i32| (0 as i32)) };
        (sig7) => { (|_: i32, _: i32, _: i32| ()) };
        (sig11) => { (|| ()) };
        (sig15) => { (|_: i32, _: i32, _: i32, _: i32, _: i32, _: i32| (0 as i32)) };
        (sig10) => { (|_: i32, _: i32, _: i32, _: i32, _: i32| (0 as i32)) };
        (sig12) => { (|| (0 as i32)) };
        (sig13) => { (|_: i32| {}) };
        (sig24) => { (|_: i32, _: i32, _: i32, _: i32, _: i32, _: i32, _: i32| (0 as i32)) };
        (sig26) => { (|_: i32, _: i32, _: i64| (0 as i32)) };
    }

    linker.func_wrap("env", "kill", dummy_signature!(sig4))?;
    linker.func_wrap("env", "getppid", dummy_signature!(sig12))?;
    linker.func_wrap("env", "getuid", dummy_signature!(sig12))?;
    linker.func_wrap("env", "getgid", dummy_signature!(sig12))?;
    linker.func_wrap("env", "geteuid", dummy_signature!(sig12))?;
    linker.func_wrap("env", "getegid", dummy_signature!(sig12))?;
    linker.func_wrap("env", "setuid", dummy_signature!(sig2))?;
    linker.func_wrap("env", "setgid", dummy_signature!(sig2))?;
    linker.func_wrap("env", "seteuid", dummy_signature!(sig2))?;
    linker.func_wrap("env", "setegid", dummy_signature!(sig2))?;
    linker.func_wrap("env", "getgroups", dummy_signature!(sig4))?;
    linker.func_wrap("env", "getlogin", dummy_signature!(sig12))?;
    linker.func_wrap("env", "getpgrp", dummy_signature!(sig12))?;
    linker.func_wrap("env", "setsid", dummy_signature!(sig12))?;
    linker.func_wrap("env", "setpgid", dummy_signature!(sig4))?;
    linker.func_wrap("env", "getpgid", dummy_signature!(sig2))?;
    linker.func_wrap("env", "getsid", dummy_signature!(sig2))?;
    linker.func_wrap("env", "ctermid", dummy_signature!(sig2))?;
    linker.func_wrap("env", "ttyname", dummy_signature!(sig2))?;
    linker.func_wrap("env", "mkfifo", dummy_signature!(sig4))?;
    linker.func_wrap("env", "mknod", dummy_signature!(sig26))?;
    linker.func_wrap("env", "getgrnam", dummy_signature!(sig2))?;
    linker.func_wrap("env", "getgrgid", dummy_signature!(sig2))?;
    linker.func_wrap("env", "getpwnam", dummy_signature!(sig2))?;
    linker.func_wrap("env", "getpwuid", dummy_signature!(sig2))?;
    linker.func_wrap("env", "initgroups", dummy_signature!(sig4))?;
    linker.func_wrap("env", "flock", dummy_signature!(sig4))?;
    linker.func_wrap("env", "umask", dummy_signature!(sig2))?;
    linker.func_wrap("env", "tzset", dummy_signature!(sig12))?;
    linker.func_wrap("env", "getservbyname", dummy_signature!(sig4))?;
    linker.func_wrap("env", "getservbyport", dummy_signature!(sig4))?;
    linker.func_wrap("env", "getprotobyname", dummy_signature!(sig2))?;
    linker.func_wrap("env", "getprotobynumber", dummy_signature!(sig2))?;
    linker.func_wrap("env", "chmod", dummy_signature!(sig4))?;
    linker.func_wrap("env", "getloadavg", dummy_signature!(sig4))?;
    linker.func_wrap("env", "chroot", dummy_signature!(sig2))?;
    linker.func_wrap("env", "dlopen", dummy_signature!(sig4))?;
    linker.func_wrap("env", "dlerror", dummy_signature!(sig12))?;
    linker.func_wrap("env", "dlsym", dummy_signature!(sig4))?;
    linker.func_wrap("env", "dlclose", dummy_signature!(sig2))?;
    linker.func_wrap("env", "gethostname", dummy_signature!(sig4))?;
    linker.func_wrap("env", "getnameinfo", dummy_signature!(sig24))?;
    linker.func_wrap("env", "popen", dummy_signature!(sig4))?;
    linker.func_wrap("env", "nice", dummy_signature!(sig2))?;
    linker.func_wrap("env", "statvfs", dummy_signature!(sig4))?;
    linker.func_wrap("env", "lchown", dummy_signature!(sig0))?;
    linker.func_wrap("env", "chown", dummy_signature!(sig0))?;
    linker.func_wrap("env", "pclose", dummy_signature!(sig2))?;
    linker.func_wrap("env", "dup", dummy_signature!(sig2))?;
    linker.func_wrap("env", "getdtablesize", dummy_signature!(sig12))?;
    linker.func_wrap("env", "ftok", dummy_signature!(sig4))?;
    linker.func_wrap("env", "pipe", dummy_signature!(sig2))?;
    linker.func_wrap("env", "socketpair", dummy_signature!(sig5))?;
    linker.func_wrap("env", "openpty", dummy_signature!(sig10))?;
    linker.func_wrap("env", "getifaddrs", dummy_signature!(sig2))?;
    linker.func_wrap("env", "freeifaddrs", dummy_signature!(sig13))?;
    linker.func_wrap("env", "connect", dummy_signature!(sig0))?;
    linker.func_wrap("env", "socket", dummy_signature!(sig0))?;
    linker.func_wrap("env", "setsockopt", dummy_signature!(sig10))?;
    linker.func_wrap("env", "bind", dummy_signature!(sig0))?;
    linker.func_wrap("env", "getpeername", dummy_signature!(sig0))?;
    linker.func_wrap("env", "accept", dummy_signature!(sig0))?;
    linker.func_wrap("env", "gethostbyname_r", dummy_signature!(sig15))?;
    linker.func_wrap("env", "mkstemp", dummy_signature!(sig2))?;
    linker.func_wrap("env", "std_syslog", dummy_signature!(sig5))?;
    linker.func_wrap("env", "openlog", dummy_signature!(sig7))?;
    linker.func_wrap("env", "closelog", dummy_signature!(sig11))?;
    linker.func_wrap("env", "copy_file_range", dummy_signature!(sig15))?;
    linker.func_wrap("env", "listen", dummy_signature!(sig4))?;
    linker.func_wrap("env", "sendto", dummy_signature!(sig15))?;
    linker.func_wrap("env", "recvfrom", dummy_signature!(sig15))?;
    linker.func_wrap("env", "madvise", dummy_signature!(sig0))?;
    linker.func_wrap("env", "zend_fiber_switch_block", dummy_signature!(sig11))?;
    linker.func_wrap("env", "zend_fiber_switch_unblock", dummy_signature!(sig11))?;
    linker.func_wrap("env", "zend_register_fiber_ce", dummy_signature!(sig11))?;
    linker.func_wrap("env", "setproctitle", dummy_signature!(sig4))?;

    // Create a WASI context and put it in a Store; all instances in the store
    // share this context. `WasiCtxBuilder` provides a number of ways to
    // configure what the target program will have access to.
    let wasi = WasiCtxBuilder::new()
        .preopened_dir(cap_std::fs::Dir::open_ambient_dir(Path::new("/home/ereslibre/projects/php/my-wasmtime/misc"), cap_std::ambient_authority())?, Path::new("."))?
        .inherit_stdio()
        .args(&[String::from("hello.php")])?
        .build();
    let mut store = Store::new(&engine, wasi);

    // Instantiate our module with the imports we've created, and run it.
    let module = Module::from_file(&engine, std::env::var("MODULE").unwrap_or(String::from("/home/ereslibre/projects/php/sapi/cli/php")))?;
    linker.module(&mut store, "", &module)?;
    linker
        .get_default(&mut store, "")?
        .typed::<(), (), _>(&store)?
        .call(&mut store, ())?;

    Ok(())
}
