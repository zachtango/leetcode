#pragma once
#include <vector>
#include <map>

class Solution
{
public:
	std::vector<int> twoSum(std::vector<int>& nums, int target) {
		std::map<int, int> s;

		for (int i = 0; i < nums.size(); i += 1) {
			int a = target - nums[i];
			if (s.count(a)) {
				return {s[a], i};
			}
			s[nums[i]] = i;
		}

		return { -1, -1 };
	}
};

