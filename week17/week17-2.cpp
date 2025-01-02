// week17-2.cpp �ǲ߭p�e Basic ��7�D
// LeetCode 66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size();
        int carry = 1;
        for(int i=N-1; i>=0; i--) {
            digits[i] = digits[i] + carry;
            if(digits[i] >= 10) { // �j�󵥩�10,�i��
                carry = 1;
                digits[i] = digits[i] % 10; //�l��
            } else {
                carry = 0;
            }
        }
        if(carry==0) return digits; // �S�i��,��������
        else {
            vector<int> ans(N+1); // �h1��(�i�쪺carry)
            ans[0] = carry; // �i�쪺carry��̫e��
            for(int i=0; i<N; i++) {
                ans[i+1] = digits[i]; // ����n�׶} carry �����@��
            }
            return ans;
        }
    }
};
