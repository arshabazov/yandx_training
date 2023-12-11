#include <iostream>

int main() {
	int n1, n2, year;
	std::cin >> n1 >> n2 >> year;
	if (n1 > 12 || n2 > 12 || n1 == n2) {
		std::cout << 1 << std::endl;
	} else {
		std::cout << 0 << std::endl;
	}
}