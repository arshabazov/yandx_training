#include <iostream>
#include <cmath>

int shortest_path(int n, int i, int j) {
	int route = 0;
	int dist = std::abs(i - j);
	if (dist < (n - dist)) {
		route = dist - 1;
	} else {
		route = n - dist - 1;
	}
	return route;
}

int main() {
	int n, i, j;
	std::cin >> n >> i >> j;
	std::cout << shortest_path(n, i, j) << std::endl;
}