// week14-1.cpp ������ �u�ƻs list 1
// �ǲ߭p�e Linked List ��3�D ��Ƭۥ[ �̦h100���
// LeetCode 2. Add Two Numbers
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(); // �ǳƦn�s������
        ListNode* now = ans; // �u�{�b�v�n�B�z�� node
        while(l1 != nullptr) { // �� list 1 ���ƻs�� ans �� now ��
            now->next = new ListNode(l1->val); // �s�ǳƤ@�ӭ�
            now = now->next; // ���U�@��
            l1 = l1->next; // ���U�@��
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
