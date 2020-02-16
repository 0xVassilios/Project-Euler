#include <iostream>

int fibonacci(int A, int B, int result) {
	if (A + B > 4000000) {
		return result;
	}

	if ((A + B) % 2 == 0) {
		return fibonacci(B, A+B, result+(A+B));
	}

	return fibonacci(B, A+B, result);
}

int main() {
	std::cout << fibonacci(1, 2, 0) << std::endl;
	return 0;
}

