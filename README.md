# function_trace

used as a dynamic library

usage: LD_PRELOAD=/path/to/libfunc_trace.so /path/to/program

Note:

1. compile with -g and -finstrument-functions opthions
2. use -finstrument-functions-exclude-function-list=*func1*,*func2* to exclude function which you won't trace
3. in C++ project, functions declear must be in extern "C" block, otherwise, the trace result can't be human readable; but the member function is still unreadable

copy from [bigwhite/func_trace](https://github.com/bigwhite/experiments/tree/master/func_trace)
