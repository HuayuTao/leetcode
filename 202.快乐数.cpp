/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
class Solution {

    int getSum(int n){
        int sum = 0;
        while (n != 0){
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        return sum;
    }

public:
    bool isHappy(int n) {
        unordered_set<int> set;
        while(1){
            int sum = getSum(n);
            if (sum == 1) return true;
            if (set.find(sum) != set.end()){
                return false;
            } else{
                set.insert(sum);
                n = sum;
            }
        }
    }
};
// @lc code=end

