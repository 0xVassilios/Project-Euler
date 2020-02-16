#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(int number) {
	std::string numberString = std::to_string(number);
	
	std::string reverseString = numberString;
	std::reverse(std::begin(reverseString), std::end(reverseString));

	if (numberString == reverseString) {
		return true;
	}

	return false;
}

int main() {
	int largestNumber = 0;

	for (int x = 100; x <= 999; x++) {
		for (int y = 100; y <= 999; y++) {
			if (isPalindrome(x*y) && x*y > largestNumber) {
				largestNumber = x*y;
			}
		}
	}

	std::cout << largestNumber << std::endl;
	return 0;
}

