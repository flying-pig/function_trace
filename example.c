#include <stdio.h>

#if 0
void __cyg_profile_func_enter(void *this_fn, void *call_site)
	__attribute__((no_instrument_function));
	void __cyg_profile_func_enter(void *this_fn, void *call_site) {
		printf("ENTER: %p, from %p\n", this_fn, call_site);
	} /* __cyg_profile_func_enter */

void __cyg_profile_func_exit(void *this_fn, void *call_site)
	__attribute__((no_instrument_function));
	void __cyg_profile_func_exit(void *this_fn, void *call_site) {
		printf("EXIT:  %p, from %p\n", this_fn, call_site);
	} /* __cyg_profile_func_enter */
#endif

int foo() {
	return 2;
}

int bar() {
	return 1;
}

int main(int argc, char** argv) {
	printf("foo=%d bar=%d\n", foo(), bar());
}
