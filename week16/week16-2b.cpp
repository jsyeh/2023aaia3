// week16-2b.cpp �ǲ߭p�e Math �̫�1�D
// LeetCode 50. Pow(x, n) �յۥ� for�j��ݬ�
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        if(n<0){ // �J�� �t�� �|����, �ҥH�n�� n �ܦ�����
            n = -n; // n �ܦ�����
            x = 1/x; // -1����,�N�O 1/x
        }
        for(int i=0; i<n; i++) {//�������O, �|����! �J��u�t��n�v�|����!!!
            ans *= x;
        }
        return ans; //�Х����n�e�X, �u�n 3�� Testcase�q�L, Moodle�N�W�ǺI��
    }
};
