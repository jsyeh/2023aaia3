// week09-2.cpp �ǲ߭p�e��2�D �﨤�u�[�_��
// LeetCode 1572. Matrix Diagonal Sum
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int M = mat.size();
        int ans = 0;
        for(int i=0; i<M; i++) {
            ans += mat[i][i];     //���W�B�k�U
            ans += mat[i][M-1-i]; //�k�W�B���U
        }
        //��Ʈ�, �n��������(��Ӥe�e�����I)
        if(M%2==1) ans -= mat[M/2][M/2];
        return ans;
    }
};
