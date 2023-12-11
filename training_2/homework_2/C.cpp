#include <iostream>

int palindrome_cost(const std::string& str) {
	int cost = 0;
	if (str.length() == 1) {
		return cost;
	}
	int mid_point = str.length()/2;

	for (int i = 0; i <mid_point; ++i) {
		if (str[i] != str[str.length() - i - 1]) {
			++cost;
		}
	}
	return cost;
}

int main() {
	std::string str;
	std::cin >> str;

	std::cout << palindrome_cost(str) << std::endl;
}
