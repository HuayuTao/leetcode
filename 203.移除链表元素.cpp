/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        while (head != NULL && head->val == val){
            ListNode* temp = head->next;
            delete head;
            head = temp;
        }
        
        ListNode* p = head;

        while (p != NULL && p->next != NULL){
            if (p->next->val == val){
                ListNode* temp = p->next;
                p->next = temp->next;
                delete temp;
            } else {
                p = p->next;
            }
        }
        return head;
    }
};
// @lc code=end

