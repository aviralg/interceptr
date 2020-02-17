# interceptr

*interceptr* is a C library designed to intercept calls to C functions. 
It forwards the arguments of overriden C functions to user defined callbacks.
This is made possible by using `LD_PRELOAD` to inject this library on application startup.


## Build

To build the library, run the following command:

```sh
$ make build
```

## Clean

To clean the build, run the following command:

```sh
$ make clean
```
