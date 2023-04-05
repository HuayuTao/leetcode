/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> resultSet;
        unordered_set<int> numset(nums1.begin(),nums1.end());
        for (int num : nums2){
            if (numset.find(num) != numset.end()){
                resultSet.insert(num);
            }
        }
        return vector<int>(resultSet.begin(),resultSet.end());
    }
};
// @lc code=end

