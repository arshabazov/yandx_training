#include <iostream>

int getMax(int arr[], int size) {
	int max = arr[0];

	for (int i = 1; i < size; ++i) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

const std::pair<int, int> getTwoMax(int arr[], int size) {
	int max1 = (arr[0] > arr[1]) ? arr[0] : arr[1];
	int max2 = (arr[0] < arr[1]) ? arr[0] : arr[1];

	for (int i = 2; i < size; ++i) {
		if (arr[i] > max1) {
			max2 = max1;
			max1 = arr[i];
		} else if (arr[i] > max2) {
			max2 = arr[i];
		}
	}
	return {max1, max2};
}

int getEvenMin(int arr[], int size) {
	#if 0
	int i = 0;
	while (i < size && arr[i]%2 != 0) { ++i; }
	if (i == size) {
		return -1;
	}
	int even_min = arr[i++];
	for (; i < size; ++i) {
		if (arr[i]%2 == 0 && even_min > arr[i]) {
			even_min = arr[i];
		}
	}
	return even_min;
	#endif
	int even_min = -1;

	for (int i = 0; i < size; ++i) {
		if (arr[i]%2 == 0 && (even_min == -1 || arr[i] < even_min)) {
			even_min = arr[i];
		}
	}
	return even_min;
}

void rle(const std::string& str) {
	if (str.empty()) {
		return;
	}
	std::string s;
	s.reserve(str.length());
	char lastC = str[0];
	s.push_back(lastC);
	for (int i = 1; i < str.length(); ++i) {
		if (str[i] != lastC) {
			s.push_back(str[i]);
			lastC = str[i];
		}
	}
	s.shrink_to_fit();
	std::cout << s << std::endl;
}

int main() {
	std::string str;
	std::cin >> str;
	rle(str);
}