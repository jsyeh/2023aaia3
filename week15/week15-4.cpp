// week15-4.cpp �ǲ߭p�e Linked List ��4�D �n�Ψ�W�g��3�D(�[�_��)�B�W�W�g��2�D(�˹L��)
// LeetCode 445. Add Two Numbers II
class Solution {
public:
    ListNode* myReverse(ListNode* l1) {
        vector<int> a; // ���Y�ۦp���}�C
        while(l1 != nullptr) { // �u�n�٦� node
            a.push_back( l1->val ); // �N��ƭ�,��J�}�C��
            l1 = l1->next; // ���U�@��
        } // �Q�����u�˹L�ӡv
        ListNode* ans = new ListNode(); // �s�ǳƦn ans node
        ListNode* now = ans; // �{�b�b�B�z�� node
        int N = a.size();
        for(int i=N-1; i>=0; i--) { // �˹L�Ӫ� for�j��
            now->next = new ListNode(a[i]); // �s����1��node
            now = now->next; // ���U�@��
        }
        return ans->next; // ���ans�O�Ū�,�����U�@��,�~����
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return myReverse(l1);
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
