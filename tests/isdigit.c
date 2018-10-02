#include <assert.h>
#include <ctype.h>

int main() {
	assert(isdigit('9') == 1);
	assert(isdigit('X') == 0);

	return 0;
}