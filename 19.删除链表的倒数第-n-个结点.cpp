/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = new ListNode(0);
        ListNode* low = new ListNode(0);
        fast->next = head;
        low->next = head;
        while (n--){
            fast = fast->next;
        }
        while (fast->next !=nullptr){
            fast = fast->next;
            low = low->next;
        }
        if (low ->next == head){
            head = head->next;
        }
        low->next = low->next->next;
        return head;
    }
};
// @lc code=end

