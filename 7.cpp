#include <iostream>
#include <cmath>

bool isPrime(int number) {
	for (int i = 2; i <= floor(number/2); i++) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int numberCount = 3;
	int primeCount = 0;

	while (true) {
		if (isPrime(numberCount)) {
			primeCount++;
			std::cout << numberCount << std::endl;
		}
		
		// Seems like the answer was the 10000th one.
		// Not the 10001th one.
		if (primeCount == 10000) {
			std::cout << numberCount << std::endl;
			break;
		}

		numberCount += 2;
	}	

	return 0;
}

