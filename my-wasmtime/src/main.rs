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
        (sig0, $symbol:ident) => {
            (|_: i32, _: i32, _: i32| {
                println!("Symbol called: {}", stringify!($symbol));
                (0 as i32)
            })
        };
        (sig2, $symbol:ident) => {
            (|_: i32| {
                println!("Symbol called: {}", stringify!($symbol));
                (0 as i32)
            })
        };
        (sig4, $symbol:ident) => {
            (|_: i32, _: i32| {
                println!("Symbol called: {}", stringify!($symbol));
                (0 as i32)
            })
        };
        (sig5, $symbol:ident) => {
            (|_: i32, _: i32, _: i32, _: i32| {
                println!("Symbol called: {}", stringify!($symbol));
                (0 as i32)
            })
        };
        (sig7, $symbol:ident) => {
            (|_: i32, _: i32, _: i32| {
                println!("Symbol called: {}", stringify!($symbol));
                ()
            })
        };
        (sig8, $symbol:ident) => {
            (|_: i32| {
                println!("Symbol called: {}", stringify!($symbol));
                (0 as i64)
            })
        };
        (sig11, $symbol:ident) => {
            (|| {
                println!("Symbol called: {}", stringify!($symbol));
                ()
            })
        };
        (sig15, $symbol:ident) => {
            (|_: i32, _: i32, _: i32, _: i32, _: i32, _: i32| {
                println!("Symbol called: {}", stringify!($symbol));
                (0 as i32)
            })
        };
        (sig10, $symbol:ident) => {
            (|_: i32, _: i32, _: i32, _: i32, _: i32| {
                println!("Symbol called: {}", stringify!($symbol));
                (0 as i32)
            })
        };
        (sig12, $symbol:ident) => {
            (|| {
                println!("Symbol called: {}", stringify!($symbol));
                (0 as i32)
            })
        };
        (sig13, $symbol:ident) => {
            (|_: i32| {
                println!("Symbol called: {}", stringify!($symbol));
            })
        };
        (sig24, $symbol:ident) => {
            (|_: i32, _: i32, _: i32, _: i32, _: i32, _: i32, _: i32| {
                println!("Symbol called: {}", stringify!($symbol));
                (0 as i32)
            })
        };
        (sig26, $symbol:ident) => {
            (|_: i32, _: i32, _: i64| {
                println!("Symbol called: {}", stringify!($symbol));
                (0 as i32)
            })
        };
        (sig27, $symbol:ident) => {
            (|_: i32, _: i32, _: i32, _: i32, _: i32, _: i64| {
                println!("Symbol called: {}", stringify!($symbol));
                (0 as i32)
            })
        };
    }

    linker.func_wrap("env", "kill", dummy_signature!(sig4, kill))?;
    linker.func_wrap("env", "getpid", dummy_signature!(sig12, getpid))?;
    linker.func_wrap("env", "getppid", dummy_signature!(sig12, getppid))?;
    linker.func_wrap("env", "getuid", dummy_signature!(sig12, getuid))?;
    linker.func_wrap("env", "getgid", dummy_signature!(sig12, getgid))?;
    linker.func_wrap("env", "geteuid", dummy_signature!(sig12, geteuid))?;
    linker.func_wrap("env", "getegid", dummy_signature!(sig12, getegid))?;
    linker.func_wrap("env", "setuid", dummy_signature!(sig2, setuid))?;
    linker.func_wrap("env", "setgid", dummy_signature!(sig2, setgid))?;
    linker.func_wrap("env", "seteuid", dummy_signature!(sig2, seteuid))?;
    linker.func_wrap("env", "setegid", dummy_signature!(sig2, setegid))?;
    linker.func_wrap("env", "getgroups", dummy_signature!(sig4, getgroups))?;
    linker.func_wrap("env", "getlogin", dummy_signature!(sig12, getlogin))?;
    linker.func_wrap("env", "getpgrp", dummy_signature!(sig12, getpgrp))?;
    linker.func_wrap("env", "setsid", dummy_signature!(sig12, setsid))?;
    linker.func_wrap("env", "setpgid", dummy_signature!(sig4, setpgid))?;
    linker.func_wrap("env", "getpgid", dummy_signature!(sig2, getpgid))?;
    linker.func_wrap("env", "getsid", dummy_signature!(sig2, getsid))?;
    linker.func_wrap("env", "ctermid", dummy_signature!(sig2, ctermid))?;
    linker.func_wrap("env", "ttyname", dummy_signature!(sig2, ttyname))?;
    linker.func_wrap("env", "mkfifo", dummy_signature!(sig4, mkfifo))?;
    linker.func_wrap("env", "mknod", dummy_signature!(sig26, mknod))?;
    linker.func_wrap("env", "getgrnam", dummy_signature!(sig2, getgrnam))?;
    linker.func_wrap("env", "getgrgid", dummy_signature!(sig2, getgrgid))?;
    linker.func_wrap("env", "getpwnam", dummy_signature!(sig2, getpwnam))?;
    linker.func_wrap("env", "getpwuid", dummy_signature!(sig2, getpwuid))?;
    linker.func_wrap("env", "initgroups", dummy_signature!(sig4, initgroups))?;
    linker.func_wrap("env", "flock", dummy_signature!(sig4, flock))?;
    linker.func_wrap("env", "umask", dummy_signature!(sig2, umask))?;
    linker.func_wrap("env", "tzset", dummy_signature!(sig12, tzset))?;
    linker.func_wrap("env", "getservbyname", dummy_signature!(sig4, getservbyname))?;
    linker.func_wrap("env", "getservbyport", dummy_signature!(sig4, getservbyport))?;
    linker.func_wrap("env", "getprotobyname", dummy_signature!(sig2, getprotobyname))?;
    linker.func_wrap("env", "getprotobynumber", dummy_signature!(sig2, getprotobynumer))?;
    linker.func_wrap("env", "chmod", dummy_signature!(sig4, chmod))?;
    linker.func_wrap("env", "getloadavg", dummy_signature!(sig4, getloadavg))?;
    linker.func_wrap("env", "chroot", dummy_signature!(sig2, chroot))?;
    linker.func_wrap("env", "dlopen", dummy_signature!(sig4, dlopen))?;
    linker.func_wrap("env", "dlerror", dummy_signature!(sig12, dlerror))?;
    linker.func_wrap("env", "dlsym", dummy_signature!(sig4, dlsym))?;
    linker.func_wrap("env", "dlclose", dummy_signature!(sig2, dlclose))?;
    linker.func_wrap("env", "gethostname", dummy_signature!(sig4, gethostname))?;
    linker.func_wrap("env", "getnameinfo", dummy_signature!(sig24, getnameinfo))?;
    linker.func_wrap("env", "popen", dummy_signature!(sig4, popen))?;
    linker.func_wrap("env", "nice", dummy_signature!(sig2, nice))?;
    linker.func_wrap("env", "statvfs", dummy_signature!(sig4, statvfs))?;
    linker.func_wrap("env", "lchown", dummy_signature!(sig0, lchown))?;
    linker.func_wrap("env", "chown", dummy_signature!(sig0, chown))?;
    linker.func_wrap("env", "pclose", dummy_signature!(sig2, pclose))?;
    linker.func_wrap("env", "dup", dummy_signature!(sig2, dup))?;
    linker.func_wrap("env", "getdtablesize", dummy_signature!(sig12, getdtablesize))?;
    linker.func_wrap("env", "ftok", dummy_signature!(sig4, ftok))?;
    linker.func_wrap("env", "pipe", dummy_signature!(sig2, pipe))?;
    linker.func_wrap("env", "socketpair", dummy_signature!(sig5, socketpair))?;
    linker.func_wrap("env", "openpty", dummy_signature!(sig10, openpty))?;
    linker.func_wrap("env", "getifaddrs", dummy_signature!(sig2, getifaddrs))?;
    linker.func_wrap("env", "freeifaddrs", dummy_signature!(sig13, freeifaddrs))?;
    linker.func_wrap("env", "connect", dummy_signature!(sig0, connect))?;
    linker.func_wrap("env", "socket", dummy_signature!(sig0, socket))?;
    linker.func_wrap("env", "setsockopt", dummy_signature!(sig10, setsocket))?;
    linker.func_wrap("env", "bind", dummy_signature!(sig0, bind))?;
    linker.func_wrap("env", "getpeername", dummy_signature!(sig0, getpeername))?;
    linker.func_wrap("env", "accept", dummy_signature!(sig0, accept))?;
    linker.func_wrap("env", "gethostbyname_r", dummy_signature!(sig15, gethostbyname_r))?;
    linker.func_wrap("env", "mkstemp", dummy_signature!(sig2, mkstemp))?;
    linker.func_wrap("env", "std_syslog", dummy_signature!(sig5, std_syslog))?;
    linker.func_wrap("env", "openlog", dummy_signature!(sig7, openlog))?;
    linker.func_wrap("env", "closelog", dummy_signature!(sig11, closelog))?;
    linker.func_wrap("env", "copy_file_range", dummy_signature!(sig15, copy_file_range))?;
    linker.func_wrap("env", "listen", dummy_signature!(sig4, listen))?;
    linker.func_wrap("env", "sendto", dummy_signature!(sig15, sendto))?;
    linker.func_wrap("env", "recvfrom", dummy_signature!(sig15, recvfrom))?;
    linker.func_wrap("env", "madvise", dummy_signature!(sig0, madvise))?;
    linker.func_wrap("env", "zend_fiber_switch_block", dummy_signature!(sig11, zend_fiber_switch_block))?;
    linker.func_wrap("env", "zend_fiber_switch_unblock", dummy_signature!(sig11, zend_fiber_switch_unblock))?;
    linker.func_wrap("env", "zend_register_fiber_ce", dummy_signature!(sig11, zend_register_fiber_ce))?;
    linker.func_wrap("env", "setproctitle", dummy_signature!(sig4, setproctitle))?;
    linker.func_wrap("env", "times", dummy_signature!(sig8, times))?;
    linker.func_wrap("env", "getrusage", dummy_signature!(sig4, getrusage))?;
    linker.func_wrap("env", "munmap", dummy_signature!(sig4, munmap))?;
    linker.func_wrap("env", "mmap", dummy_signature!(sig27, mmap))?;
    linker.func_wrap("env", "signal", dummy_signature!(sig4, signal))?;
    linker.func_wrap("env", "__SIG_IGN", dummy_signature!(sig13, __SIG_IGN))?;

    // Create a WASI context and put it in a Store; all instances in the store
    // share this context. `WasiCtxBuilder` provides a number of ways to
    // configure what the target program will have access to.
    let wasi = WasiCtxBuilder::new()
        .preopened_dir(cap_std::fs::Dir::open_ambient_dir(Path::new("/home/ereslibre/projects/php/my-wasmtime/misc"), cap_std::ambient_authority())?, Path::new("."))?
        .inherit_stdio()
    //        .args(&[String::from("--version")])?
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
