#include <iostream>
#include <cmath>

int main() {
	int squareOfSum = 0;
	int sumOfSquares = 0;

	for (int i = 1; i <= 100; i++) {
		squareOfSum += i;
		sumOfSquares += std::pow(i, 2);
	}
	
	std::cout << std::fixed;
	std::cout << pow(squareOfSum, 2) - sumOfSquares << std::endl;

	return 0;
}

