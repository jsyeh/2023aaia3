// week16-3.cpp �ǲ߭p�e Math �̫�1�D
// 50. Pow(x, n) ���e�յۥ� for�j��,���j��Ӧh�ӺC
class Solution {
public:
    double helper(double x, long long int n) { //�禡�I�s�禡
        if(n==0) return 1;
        double now = helper(x, n/2);
        if(n%2==0) return now * now;
        else return now * now * x; // �_��,�h���@��x
    }
    double myPow(double x, long long int n) { // �n�令 �ܪ��B�ܪ������
        double ans = 1;
        if(n<0){ // �J�� �t�� �|����, �ҥH�n�� n �ܦ�����
            n = -n; // n �ܦ�����
            x = 1/x; // -1����,�N�O 1/x
        }
        return helper(x,n); //�Х����n�e�X, �u�n 3�� Testcase�q�L, Moodle�N�W�ǺI��
    }
};
