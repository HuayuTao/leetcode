/*
 * @lc app=leetcode.cn id=347 lang=cpp
 *
 * [347] 前 K 个高频元素
 */

// @lc code=start
class Solution {
    class Mycomparation{
    public:
        bool operator()(const pair<int, int>& a, const pair<int, int>& b){
            return a.second > b.second;
        }
    };
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, Mycomparation> que;

        for (unordered_map<int, int>::iterator it = map.begin(); it != map.end(); it++){
            que.push(*it);
            if(que.size() > k){
                que.pop();
            }
        }

        vector<int> res(k);
        for (int i = k - 1; i >= 0; i--){
            res[i] = que.top().first;
            que.pop();
        } 
        return res;
    }
};
// @lc code=end

