#include <iostream>
#include <algorithm>

int max_distance(int arr[], int size) {
	int shop_index = -20;
	int dist_list[size];
	int max_dist = 0;

	for (int i = 0; i < size; ++i) {
		if (arr[i] == 2) {
			shop_index = i;
		} else if (arr[i] == 1) {
			dist_list[i] = std::abs(i - shop_index);
		}
	}
	shop_index = 20;
	for (int i = size - 1; i >= 0; --i) {
		if (arr[i] == 2) {
			shop_index = i;
		} else if (arr[i] == 1) {
			int min_dist = std::min(std::abs(i - shop_index), dist_list[i]);
			max_dist = std::max(max_dist, min_dist);
		}
	}
	return max_dist;
}

int main() {
	int arr[10];

	for (int i = 0; i < 10; ++i) {
		std::cin >> arr[i];
	}
	std::cout << max_distance(arr, 10) << std::endl;
}
