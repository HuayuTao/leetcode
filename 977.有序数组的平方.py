#
# @lc app=leetcode.cn id=977 lang=python3
#
# [977] 有序数组的平方
#

# @lc code=start
class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        n=len(nums)
        output_array=[-1]*n
        k=n-1
        index1=0
        index2=k
        while k>=0:
            if(nums[index1]**2<nums[index2]**2):
               output_array[k]=nums[index2]**2
               index2-=1
            else:
               output_array[k]=nums[index1]**2
               index1+=1
            k-=1
        return output_array
# @lc code=end

