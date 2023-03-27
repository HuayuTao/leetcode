#
# @lc app=leetcode.cn id=27 lang=python3
#
# [27] 移除元素
#

# @lc code=start
class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        i=0
        while i<len(nums):
            if(nums[i]!=val):
                i+=1
            else:
                del nums[i]
        return len(nums)
# @lc code=end

