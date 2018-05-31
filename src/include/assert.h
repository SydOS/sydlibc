// Assert.h defines the assert macro and internal function. This is used to
// verify an expression is true (such as 4+4 = 8). It kills the app if the
// evaluated expression is false. This is mostly used to make sure sane values
// are sent along in debugging or mission critial stuff

#ifndef _ASSERT_H
#define _ASSERT_H

// Check if N(o)DEBUG is a defined macro, if it is place a stub so assert
// doesn't trigger. Otherwise, define a macro to call our internal function.
// We don't do assert as a function itself since a marco can automatically grab
// the data we need to conform to the C99 standard
#if defined (NDEBUG)
#define assert(expression) ((void)0)
#else
#define assert(expression) (void)((expression) || (__assert(#expression, \
								   __func__, __FILE__, __LINE__), 0))
#endif

// Internal assertion function definition
extern void __assert(const char *message, const char* function, 
					 const char* file, int line);

#endif