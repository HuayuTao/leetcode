/*
 * @lc app=leetcode.cn id=459 lang=cpp
 *
 * [459] 重复的子字符串
 */

// @lc code=start
class Solution {
    void getNext(int* next, string& s){
        int j = 0;
        next[0] = j;
        for(int i = 1; i < s.size(); i++){
            while (j > 0 && s[i] != s[j]){
                j = next[j - 1];
            }
            if (s[i] == s[j]){
                j++;
            }
            next[i] = j;
        }
    }
public:
    bool repeatedSubstringPattern(string s) {
        int next[s.size()];
        getNext(next, s);
        int len = s.size();
        if (len == 0) return false;
        if (next[len - 1] != 0 && len % (len - next[len - 1]) ==0){
            return true;
        }
        return false;
    }
};
// @lc code=end

