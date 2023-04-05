/*
 * @lc app=leetcode.cn id=18 lang=cpp
 *
 * [18] 四数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] >= 0 && nums[i] > target) break;
            if (i > 0 && nums[i] == nums[i-1]) continue;
            for (int j = i + 1; j < nums.size(); j++){
                if (nums[i] + nums[j] >= 0 && nums[i] + nums[j] > target)  break;
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                int left = j + 1;
                int right = nums.size() - 1;
                while (left < right){
                    if ((long) nums[i] + nums[j] + nums[left] + nums[right] > target){
                        right--;
                    } else if ((long) nums[i] + nums[j] + nums[left] + nums[right] < target){
                        left++;
                    } else{
                        result.push_back(vector<int>{nums[i], nums[j], nums[left], nums[right]});
                        while (left < right && nums[left] == nums[left + 1]) left++;
                        while (left < right && nums[right] == nums[right - 1]) right--;
                        left++;
                        right--;
                    }
                }
            }
        }
        return result;
    }
};
// @lc code=end

