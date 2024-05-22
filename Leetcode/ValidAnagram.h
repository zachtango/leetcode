#pragma once
#include <string>
#include <set>

class Solution
{
public:
	bool isAnagram(std::string s, std::string t) {
		std::string alphabet = "abcdefghijklmnopqrstuvwxyz";

		std::multiset<char> count1(s.begin(), s.end());
		std::multiset<char> count2(t.begin(), t.end());

		for (auto ch : alphabet) {
			if (count1.count(ch) != count2.count(ch)) {
				return false;
			}
		}

		return true;
	}
};

