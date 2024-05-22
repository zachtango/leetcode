#pragma once
#include <vector>
#include <set>

class Solution
{
public:
	bool hasDuplicate(std::vector<int>& nums) {
		std::set<int> s(nums.begin(), nums.end());

		return s.size() != nums.size();
	}
};


