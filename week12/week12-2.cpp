// week12-2.cpp �ǲ߭p�e Linked List ��1�D (������)
// LeetCode 21. Merge Two Sorted Lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //ListNode* ans = list1; //�ŧi����, (1) �ñ���list1
        //ListNode* ans = new ListNode(99); // (2) �s�W �ȬO99
        ListNode* ans = new ListNode(99, new ListNode(88));
        // (3) �s�W1�� �ȬO99 �B�k��S �s�W1�� �ȬO90
        return ans;  // �m�߻{�Ѥ@�U��Ƶ��c struct �������ާ@
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
