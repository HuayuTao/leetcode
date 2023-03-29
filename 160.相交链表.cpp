/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 1;
        int lenB = 1;
        ListNode* pA = headA;
        ListNode* pB = headB;
        while (pA->next !=nullptr){
            pA = pA->next;
            lenA++;
        }
        while (pB->next !=nullptr){
            pB = pB->next;
            lenB++;
        }
        pA = headA;
        pB = headB;
        if (lenA > lenB){
            for (int i = 0; i < lenA - lenB; i++){
                pA = pA->next;
            }
        }
        if (lenA < lenB){
            for (int i = 0; i < lenB - lenA; i++){
                pB = pB->next;
            }
        }
        while(pA != nullptr){
            if (pA == pB){
                return pA;
            }
            pA = pA->next;
            pB = pB->next;
        }
        return NULL;
    }
};
// @lc code=end

