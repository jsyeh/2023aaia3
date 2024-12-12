// week14-1.cpp ゼЧΘ 狡籹 list 1
// 厩策璸礶 Linked List 材3肈 ㄢ计 程100计
// LeetCode 2. Add Two Numbers
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(); // 非称穝氮
        ListNode* now = ans; // 瞷璶矪瞶 node
        while(l1 != nullptr) { // р list 1 常狡籹 ans  now 柑
            now->next = new ListNode(l1->val); // 穝非称
            now = now->next; // 传掸
            l1 = l1->next; // 传掸
        }
        return ans->next;
    }
};
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
