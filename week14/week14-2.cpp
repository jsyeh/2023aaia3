// week14-2.cpp ������
// �ǲ߭p�e Linked List ��3�D ��Ƭۥ[ �̦h100���
// LeetCode 2. Add Two Numbers
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(); // �ǳƦn�s������
        ListNode* now = ans; // �u�{�b�v�n�B�z�� node
        int carry = 0;
        while(l1 != nullptr && l2 != nullptr) { // �� list 1 ���ƻs�� ans �� now ��
            int here = l1->val + l2->val + carry;
            carry = here / 10;
            now->next = new ListNode( here%10 ); // �s�ǳƤ@�ӭ�
            now = now->next; // ���U�@��
            l1 = l1->next; // ���U�@��
            l2 = l2->next;
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
