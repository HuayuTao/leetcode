/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode*> que;
        if (root == NULL) return result;
        que.push(root);
        while (!que.empty()){
            int size = que.size();
            vector<int> vec;
            for (int i = 0; i < size; i++){
                TreeNode* p = que.front();
                que.pop();
                vec.push_back(p->val);
                if (p->left) que.push(p->left);
                if (p->right) que.push(p->right);             
            }
            result.push_back(vec);
        }
        return result;
    }
};
// @lc code=end

