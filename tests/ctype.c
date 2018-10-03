#include <assert.h>
#include <ctype.h>

int main() {
	assert(isdigit('9') == 1);
	assert(isdigit('X') == 0);

	assert(islower('f') == 1);
	assert(islower('F') == 0);
	assert(islower('9') == 0);
	assert(islower('\\') == 0);

	assert(isupper('f') == 0);
	assert(isupper('F') == 1);
	assert(isupper('9') == 0);
	assert(isupper('\\') == 0);

	return 0;
}