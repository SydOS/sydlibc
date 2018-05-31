#include <stdio.h>
#include <stdlib.h>

void __assert(const char *message, const char* function, const char* file, int line) {
	printf("Assertion failed: %s, function %s, file %s, line %u.\nApplication will now terminate.\n", message, function, file, line);
	//TODO: Convert exit() to abort()
	exit(-1);
}