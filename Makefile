.PHONY: tests
tests:
	mkdir -p testbin
	gcc tests/assert-ndebug.c src/assert.c -o testbin/asserttest-ndebug -Isrc/include
	gcc tests/assert.c src/assert.c -o testbin/asserttest -Isrc/include
	gcc tests/isdigit.c src/ctype.c src/assert.c -o testbin/isdigittest -Isrc/include