source ./assert.sh

# The following test should work, since our incorrect assertion is ignored
../testbin/asserttest-ndebug
assert "$?" "0"
# The following test should fail, as it's testing that sydlibc assert works
../testbin/asserttest
assert_fail "$?" "0"

../testbin/ctypetest
assert "$?" "0"