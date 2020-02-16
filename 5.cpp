#include <iostream>

int main() {

	while (true) {
		int x = 2;
		// Evenly Divisible.
		bool isED = true;

		for (int i = 1; i <= 10; i++) {
			if (i % x != 0) {
				isED = false;
			}
		}

		if (isED) {
			std::cout << x << std::endl;
			break;
		}
	}

	return 0;
}

