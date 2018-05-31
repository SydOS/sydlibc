#ifndef _ASSERT_H
#define _ASSERT_H

#if defined (NDEBUG)
#define assert(expression) ((void)0)
#else
#define assert(expression) (void)((expression) || (__assert(#expression, __FILE__, __LINE__), 0))
#endif

extern void __assert(const char *message, const char* file, int line);

#endif