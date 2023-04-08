/*
 * @lc app=leetcode.cn id=145 lang=cpp
 *
 * [145] 二叉树的后序遍历
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
    vector<int> postorderTraversal(TreeNode* root) {
         vector<int> res;
        TreeNode* p;
        stack<TreeNode*> st;
        if (root == NULL) return res;
        st.push(root);
        while (!st.empty()){
            TreeNode* p = st.top();
            res.push_back(p->val);
            st.pop();  
            if (p->left) st.push(p->left);
            if (p->right) st.push(p->right);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end

