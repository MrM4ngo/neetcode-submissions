#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

class Solution {
public:
    bool isAnagram(string s, string t) {
        int sLength = s.length();
        int tLength = t.length();

        if (sLength != tLength){
            return false;
        }
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        char Sarr[sLength + 1];
        char Tarr[tLength + 1]; 
        strcpy(Sarr, s.c_str());
        strcpy(Tarr, t.c_str());
    

        for (int i = 0; i < sLength; i++){
            if (Sarr[i] != Tarr[i]){
                return false;
            }
        }

        return true;
    }
};