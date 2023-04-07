/*
 * @lc app=leetcode.cn id=150 lang=cpp
 *
 * [150] 逆波兰表达式求值
 */

// @lc code=start
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        for (int i = 0; i < tokens.size(); i++){
            if (tokens[i] == "+"){
                long long num1 = st.top();
                st.pop();
                long long num2 = st.top();
                st.pop();
                st.push(num1 + num2);
            }else if (tokens[i] == "-"){
                long long num1 = st.top();
                st.pop();
                long long num2 = st.top();
                st.pop();
                st.push( - num1 + num2);
            }else if (tokens[i] == "*"){
                long long num1 = st.top();
                st.pop();
                long long num2 = st.top();
                st.pop();
                st.push(num1 * num2);
            }else if (tokens[i] == "/"){
                long long num1 = st.top();
                st.pop();
                long long num2 = st.top();
                st.pop();
                st.push(num2 / num1);
            }else{
                st.push(stoll(tokens[i]));
            }
        }
        return st.top();
    }
};
// @lc code=end

