#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
	printf(1, "Hello World\n");
	/*
	   기존의 알던 printf와 인자가 다르다.
	   첫 인자에 fd가 포함된다. (1은 stdout)
	 */
	return 0;
}
