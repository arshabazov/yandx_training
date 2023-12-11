#include <iostream>
#include <vector>
#include <algorithm>

int timeToFind(const std::vector<int>& vec) {
	int seconds = 0;

	for (size_t i = 0; i < vec.size() - 1; ++i) {
		seconds += vec[i];
	}
	return seconds;
}

int main() {
	int size;
	std::vector<int> vec;
	std::cin >> size;
	vec.reserve(size);

	for (int i = 0; i < size; ++i) {
		int n;
		std::cin >> n;
		vec.push_back(n);
	}
	std::sort(vec.begin(), vec.end());
	std::cout << timeToFind(vec) << std::endl;
}
