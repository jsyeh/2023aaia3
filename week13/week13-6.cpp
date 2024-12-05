// week13-6.cpp �ǲ߭p�e Linked List ��2�D
// LeetCode 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a; // ���Y�ۦp���u�}�C�v,�̭��� val��
        while( head != nullptr ) { //�٤��O�Ū�, �N�~��
            a.push_back( head->val ); // ��J��
            head = head->next;// �A�B�z�U�@��
        }
        ListNode* ans = new ListNode(); //�ǳƵ���
        ListNode* now = ans; // �@���@����J
        int N = a.size();
        for(int i=N-1; i>=0; i--) { // �˹L�Ӫ��j��
            now->next = new ListNode( a[i] ); // ��J�˹L�Ӫ���
            now = now->next; // �A�B�z�U�@��
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
