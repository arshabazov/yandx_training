#include <iostream>

void blocksToRemain(int arr[], int size, int length) {
	int mid = (length%2 == 0) ? length/2 - 1 : length/2;
	int lower = 0;
	int upper = 0;

	int i = 0;
	while (i < size && arr[i] <= mid) {
		lower = arr[i];
		++i;
	}
	if (!(length%2 != 0 && lower == mid)) {
		upper = arr[i];
		std::cout << lower << " " << upper << std::endl;
	} else {
		std::cout << lower << std::endl;
	}
}

int main() {
	int length, count;
	std::cin >> length >> count;
	int blocks[count];

	for (int i = 0; i < count; ++i) {
		std::cin >> blocks[i];
	}
	blocksToRemain(blocks, count, length);
}
