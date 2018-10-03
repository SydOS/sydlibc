/**
 * Function to check if the passed char contains a number
 * @param a char
 * @return 1 if is a number, 0 if not
 */
int isdigit(int c) {
	return c >= '0' && c <= '9';
}

/**
 * Function to check if the passed char contains a lower case letter
 * @param a char
 * @return 1 if is a lower case letter, 0 if not
 */
int islower(int c) {
	return c >= 'a' && c <= 'z';
}

/**
 * Function to check if the passed char contains a upper case letter
 * @param a char
 * @return 1 if is an upper case letter, 0 if not
 */
int isupper(int c) {
	return c >= 'A' && c <= 'Z';
}