/*
 * @lc app=leetcode.cn id=454 lang=cpp
 *
 * [454] 四数相加 II
 */

// @lc code=start
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int count = 0;
        unordered_map<int,int> map;
        for (int a : nums1){
            for (int b : nums2){
                map[a + b]++;
            }
        }
        for (int c : nums3){
            for (int d : nums4){
                if (map.find( - c - d) != map.end()){
                    count += map[- c - d];
                }
            }
        }
        return count;
    }
};
// @lc code=end

