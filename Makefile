.PHONY: tests
tests:
	mkdir -p testbin
	gcc tests/assert-ndebug.c src/assert.c -o testbin/asserttest-ndebug -Isrc/include
	gcc tests/assert.c src/assert.c -o testbin/asserttest -Isrc/include
	gcc tests/ctype.c src/ctype.c src/assert.c -o testbin/ctypetest -Isrc/include