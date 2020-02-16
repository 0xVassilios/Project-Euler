#include <iostream>
#include <vector>

int main() {
	long number = 600851475143;

	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			number = number / i;
		}
	}
	
	std::cout << "Largest prime factor: " << number << std::endl;

	return 0;
}

