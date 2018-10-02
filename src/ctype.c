const char numbers[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

int isdigit(int c) {
	// Check if the passed char is one of these numbers
	for (int i = 0; i < sizeof(numbers); i++) {
		if (c == numbers[i]) {
			return 1;
		}
	}

	// If we get here, it is not one of these numbers
	return 0;
}