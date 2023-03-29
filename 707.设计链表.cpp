// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem707.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=707 lang=cpp
 *
 * [707] 设计链表
 */
//有点问题题目意思
// @lc code=start
class MyLinkedList {
public:

    struct LinkNode
    {
        int val;
        LinkNode* next;
        LinkNode():val(0), next(nullptr){}
        LinkNode(int val):val(val), next(nullptr){}
        LinkNode(int val, LinkNode* next):val(val), next(next){}
    };

    int size;
    LinkNode* head;

    MyLinkedList() {
        head = new LinkNode(0);
        size = 0;
    }
    
    int get(int index) {
        if (index > size - 1 || index < 0){
            return -1;
        }
        LinkNode* p = head;
        for (int i = 0; i <index; i++){
            p = p->next;
        }
        return p->val;
    }
    
    void addAtHead(int val) {
        LinkNode* temp = new LinkNode(val);
        temp->next = head;
        head = temp;
        size++;
    }
    
    void addAtTail(int val) {
        LinkNode* p=new LinkNode(val);
        LinkNode* temp=head;
        while (temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = p;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index > size) return;
        if (index < 0) index = 0;
        LinkNode* newNode=new LinkNode(val);
        LinkNode* p = head;
        if (index == 0){
            newNode->next = p;
            head = newNode;
            size++;
        }else {
            for (int i = 1; i<index; i++){
            p = p->next;
            }
            newNode->next = p->next;
            p->next = newNode;
            size++;
        }
        
    }
    
    void deleteAtIndex(int index) {
        LinkNode* p = head;
        if (index == 0){
            head = head->next;
            delete p;
            size--;
        }
        if (index > 0 && index < size){
            while (--index){
                p = p->next;
            }
            LinkNode* temp = p->next;
            p->next = temp->next;
            delete temp;
            size--;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end

