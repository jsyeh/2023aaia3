// week10-5.cpp �ǲ߭p�e Math ��3�D
// LeetCode 860. Lemonade Change
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5 = 0, d10 = 0, d20 = 0; // �}�l��, �ѪO�S�s��
        for(int c : bills) { // �i��for�j��
            if(c==5) d5++; //�ȤH���A5��,���_��
            if(c==10) { //�ȤH�n�A��� 5��
                if(d5>0){ //�p�G��5���i�H���
                    d10++; //����10��
                    d5--; //���^5��
                }else return false; //�S��k���, ���ѤF
            }
            if(c==20) { //�ȤH���A20��,�A�n��15��
                if(d10>0 && d5>0){ //1��10���B1��5��
                    d20++;
                    d10--;
                    d5--;
                }else if(d5>=3){
                    d20++;
                    d5-=3;
                }else return false; //�S��k���, ���ѤF
            }
        }
        return true; //�������S�X��, ���\�����������ͷN,�}��!
    }
};
