// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem151.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=151 lang=cpp
 *
 * [151] 反转字符串中的单词
 */

// @lc code=start
class Solution {
    void removespace(string& s){
        int slow = 0;
        for (int i = 0; i < s.size(); i++){
            if(s[i] != ' '){
                if (slow != 0) s[slow++] = ' ';
                while (i < s.size() && s[i] != ' '){
                    s[slow++] = s[i++];
                }             
            }
        }
        s.resize(slow);
    }
    
    void reverseString(int start, int end, string& s){
        for (int i = start, j = end; i < j; i++, j--){
            swap(s[i], s[j]);
        }
    }

public:
    string reverseWords(string s) {
        removespace(s);
        reverseString(0, s.size() - 1, s);
        int start = 0;
        for (int i = 0; i <= s.size(); i++){
            if (s[i] == ' ' || i == s.size()){
                reverseString(start, i - 1, s);
                start = i + 1;
            }
        }
        return s;   
    }

};
// @lc code=end

