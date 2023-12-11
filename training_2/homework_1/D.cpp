#include <iostream>

int getSchoolLocation(int arr[], int size) {
	return arr[size/2];
}

int main() {
	int n;
	std::cin >> n;
	int houses[n];

	for (int i = 0; i < n; ++i) {
		std::cin >> houses[i];
	}

	std::cout << getSchoolLocation(houses, n) << std::endl;
}