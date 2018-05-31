#include <stdio.h>
#include <stdlib.h>

// Internal assertion defintition
void __assert(const char *message, const char* function, const char* file, 
			  int line) {
	// Print debug line
	printf("Assertion failed: %s, function %s, file %s, line %u.\n"
		   "Application will now terminate.\n", message, function, file, line);
	//TODO: Convert exit() to abort()
	// Terminate program
	exit(-1);
}