/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 找出字符串中第一个匹配项的下标
 */

// @lc code=start
class Solution {
    void getNext(string& s, int* next){
        int j = 0;
        next[0] = j;
        for (int i = 1; i < s.size(); i++){
            while (j > 0 && s[i] != s[j]){
                j = next[j - 1];
            }
            if(s[i] == s[j]){
                j++;
            }
            next[i] = j;
        }
        
    }
public:
    int strStr(string haystack, string needle) {
        if (needle.size() == 0) return 0;
        int next[needle.size()];
        getNext(needle, next);
        int j = 0;
        for (int i = 0; i < haystack.size(); i++){
            while (j > 0 && needle[j] != haystack[i]){
                j = next[j - 1];
            }
            if (needle[j] == haystack[i]){
                j++;
            }
            if (j == needle.size()){
                return (i - needle.size() + 1);
            }
        }
        return -1;
    }
};
// @lc code=end

