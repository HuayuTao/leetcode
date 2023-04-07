/*
 * @lc app=leetcode.cn id=239 lang=cpp
 *
 * [239] 滑动窗口最大值
 */

// @lc code=start
class Solution {
private:
    class Myqueue{
    public:
        deque<int> que;
        void pop(int x){
            if (!que.empty() && x == que.front()){
                que.pop_front();
            }
        }
        void push(int x){
            while (!que.empty() && que.back() < x){
                que.pop_back();
            }
            que.push_back(x);
        }
        int front(){
            return que.front();
        }
    };
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        Myqueue que;
        vector<int> result;
        for (int i = 0; i < k; i++){
            que.push(nums[i]);
        }
        result.push_back(que.front());
        for (int i = 0; i + k < nums.size(); i++){
            que.pop(nums[i]);
            que.push(nums[i + k]);
            result.push_back(que.front());
        }
        return result;
    }
};
// @lc code=end

