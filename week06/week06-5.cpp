// week06-5.cpp ���Ѫ��D���D(�����D)
// LeetCode 670 670. Maximum Swap �i�H��num��,��2�r���洫,��̤j����
class Solution {
public:
    int maximumSwap(int num) {
        int ans = num; //��²�檺����,�N�O����
        string s = to_string(num); //stoi()�ϹL��
        //for(int i=0; i<s.length(); i++){//�����n�ΰj��,��s����
        //    cout << s[i] << ' '; //�m�ߦL�ݬ�
        //}
        for(int i=0; i<s.length()-1; i++){ // ����i
            for(int j=i+1; j<s.length(); j++){ //�k��j
                swap(s[i], s[j]); // �洫s[i] s[j]���
                ans = max(ans, stoi(s)); // �ݬO�_��j,��s
                swap(s[i], s[j]); // �A�洫�^��
            }
        }
        return ans;
    }
};
