#include <iostream>
#include <vector>

int get_max_num_occurences(const std::vector<int>& n) {
    int max = n[0];
    int count = 1;

    for (int i = 1; i < n.size(); ++i) {
        if (max < n[i]) {
            max = n[i];
            count = 1;
        } else if (max == n[i]) {
            ++count;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums;
    int n = 1;

    while (n != 0) {
        std::cin >> n;
        nums.push_back(n);
    }
    int occur = get_max_num_occurences(nums);
    std::cout << occur << std::endl;

    return 0;
}
