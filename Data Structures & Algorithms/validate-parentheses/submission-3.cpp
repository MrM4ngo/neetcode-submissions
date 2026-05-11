#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        bool case1 = true;
        bool case2 = true;
        char check = '\0';

        int Length = s.size();
        int Half = (Length/2);
    
        if(Length%2 == 1){
            return false;
        }

        unordered_map<char, char> parmap = 
        {
            {'[', ']'},
            {'(', ')'},
            {'{', '}'}            
        };


            for(int i = 0; i <= Length-1; i++){
                check = parmap[s[i]];
                if (s[i+1] != parmap[s[i]]){
                    case2 = false;
                }
                i++;         
            }

            for(int i = 0; i < Half; i++){
                check = parmap[s[i]];
                if (parmap[s[i]] != s[Length - 1 - i]){
                    case1 = false;
                }
            }

        if (case1 == false && case2 == false){
            return false;
        } else {
            return true;
        }
    }
};
