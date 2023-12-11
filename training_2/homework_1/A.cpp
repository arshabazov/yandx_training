#include <iostream>
// #include <map>
// #include <algorithm>

#if 0
int main() {
	std::string str;
	std::cin >> str;
	int count = 0;
	char answer = str[0];

	for (int i = 0; i < str.length() - 1; ++i) {
		int cur_count = 1;
		for (int j = i + 1; j < str.length(); ++j) {
			if (str[i] == str[j]) {
				++cur_count;
			}
		}
		if (count < cur_count) {
			answer = str[i];
			count = cur_count;
		}
	}
	std::cout << "char: " << answer << ", count = " << count << std::endl;
}

int main() {
	std::string str;
	std::cin >> str;
	std::map<char, int> char_map;

	for (int i = 0; i < str.size(); ++i) {
		++char_map[str[i]];
	}
	#if 0
	auto it = std::max_element(char_map.begin(), char_map.end(),
		[](const std::pair<char, int>& a, const std::pair<char, int>& b) {
			return a.second < b.second;
		}
	);
	std::cout << "char " << it->first
		<< " count = " <<it->second << std::endl;
	#endif
	char c;
	int count = 0;
	for (const auto& [key, value] : char_map) {
		if (count < value) {
			c = key;
			count = value;
		}
	}
	std::cout << "char " << c << " count = " << count << std::endl;
 }
 #endif

 int main() {
	int end, interactor, checker, final = 0;
	std::cin >> end >> interactor >> checker;
	switch (interactor)
	{
	case 0:
		if (end != 0) {
			final = 3;
		} else {
			final = checker;
		}
		break;
	case 1:
		final = checker;
		break;
	case 4:
		if (end != 0) {
			final = 3;
		} else {
			final = 4;
		}
		break;
	case 6:
		final = 0;
		break;
	case 7:
		final = 1;
		break;
	default:
		final = interactor;
	}
	std::cout << final << std::endl;
 }