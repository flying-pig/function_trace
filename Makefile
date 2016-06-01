#
## Makefile for func_trace share lib
#

OS := $(shell uname -s)

LIBS = 

ifeq ($(OS), SunOS)
	DEFS = -D_SOLARIS_TRACE
	LIBS += -lfunc_trace
else ifeq ($(OS), Linux)
	DEFS = -D_LINUX_TRACE
else
	$(error $(OS) is not supported!)
endif


all:
	gcc $(DEFS) -fPIC -shared -o libfunc_trace.so func_trace.c 

clean:
	rm -fr libfunc_trace.so

test:
	gcc -g example.c -o example -finstrument-functions $(LIBS)
	LD_PRELOAD=./libfunc_trace.so ./example
	@echo
	gcc -g -finstrument-functions -finstrument-functions-exclude-function-list=foo,bar example.c -o example2
	LD_PRELOAD=./libfunc_trace.so ./example2
	rm example example2
