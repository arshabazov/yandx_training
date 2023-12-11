#include <iostream>
#include <vector>
#include <map>

std::pair<int, int> twoSum(const std::vector<int>& nums, int target) {
	std::map<int, int> map;

	for (size_t i = 0; i < nums.size(); ++i) {
		auto it = map.find(target - nums[i]);
		if (it != map.end()) {
			return {it->second, i};
		} else {
			map[nums[i]] = i;
		}
	}
	return {0, 0};
}

int main() {
	std::vector<int> nums1 = {2,7,11,15};
	std::vector<int> nums2 = {3,2,4};
	std::vector<int> nums3 {3,3};

	std::pair<int, int> pair = twoSum(nums1, 9);
	std::cout << pair.first << " " << pair.second << std::endl;

	pair = twoSum(nums2, 6);
	std::cout << pair.first << " " << pair.second << std::endl;

	pair = twoSum(nums3, 6);
	std::cout << pair.first << " " << pair.second << std::endl;
}