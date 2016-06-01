#include <iostream>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

int foo();
int bar();

#ifdef __cplusplus
};
#endif

int foo() {
	return 2;
}

int bar() {
	return 1;
}

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	//std::cout << "Program: " << argv[0] << std::endl;
	printf("foo=%d bar=%d\n", foo(), bar());

	return 0;
}
