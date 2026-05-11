#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

class Solution {
public:
    bool isPalindrome(std::string s) {
        std::string filtered = "";
        for (char c : s) {
            if (std::isalnum(c)) {
                filtered += std::tolower(c);
            }
        }
        std::string rev = filtered;
        reverse(rev.begin(), rev.end());

        return filtered == rev;
    }
};