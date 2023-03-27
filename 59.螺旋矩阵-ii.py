#
# @lc app=leetcode.cn id=59 lang=python3
#
# [59] 螺旋矩阵 II
#

# @lc code=start
class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        list=[[0]*n for i in range(n)]
        loop=n//2
        mid=n//2
        k=1
        for i in range(0,loop):
            for m in range(n-i*2-1):
                list[i][m+i]=k
                k+=1
            for m in range(n-i*2-1):
                list[i+m][n-i-1]=k
                k+=1
            for m in range(n-i*2-1):
                list[n-i-1][n-1-m-i]=k
                k+=1
            for m in range(n-i*2-1):
                list[n-1-m-i][i]=k
                k+=1  
                
        if(n%2!=0):  
            list[loop][loop]=n**2
        return list
# @lc code=end

