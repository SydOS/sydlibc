.PHONY: tests
tests:
	gcc tests/assert.c src/assert.c -o asserttest -Isrc/include