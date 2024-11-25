#include <iostream>
using namespace std;
#include <stack>
class Solution {
public:
    bool isPalindrome(string s) {
        stack<char> s1;
        string sen = "";
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
                (c >= '0' && c <= '9')) {
                if (c >= 'A' && c <= 'Z') {
                    c = c - 'A' + 'a';
                }
                sen += c;
            }
        }
        for (char c : sen) {
            s1.push(c);
        }
        for (char c : sen) {
            if (c != s1.top()) {
                return false;
            }
            s1.pop();
        }
        return true;
    }
};