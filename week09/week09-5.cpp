// week09-5.cpp �ǲ߭p�e Math ��1�D (�Y���]�t)�d��, ���X�ӡu��ơv
// LeetCode 1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low)/2; //�n���o�ӬO����, �����ɭԷ|�p�@�I
        if(low%2==1 || high%2==1) ans++; //�]��, �p�G�Y�������, �n�A�[1�Ӽ�
        return ans;
    }
};
