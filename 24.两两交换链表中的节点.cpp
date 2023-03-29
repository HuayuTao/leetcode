/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
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
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* head_pre = new ListNode(0);
        head_pre->next=head->next;

        ListNode* pre = new ListNode(0);
        pre->next = head;
        ListNode* p = head;
        while (p != nullptr && p->next !=nullptr){
            ListNode* temp = p->next;
            ListNode* temp1 = temp->next;
            pre->next = temp;
            temp->next = p;
            p->next = temp1;
            pre = p;
            p =temp1;
        }
        return head_pre->next; 
    }
};
// @lc code=end

