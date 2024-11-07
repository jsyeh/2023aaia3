// week09-3.cpp �ǲ߭p�e Matrix ��4�D (�]����3�D���I��,�䭷���ҡB���L)
// LeetCode 73. Set Matrix Zeroes
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size(); //����M
        int N = matrix[0].size(); //�k��N
        vector<bool> left(M); //���䪺�Ĥ�, ��M��
        vector<bool> up(N);  //��W�����Ĥ�, ��N��
        for(int i=0; i<M; i++) { // ���Χ��㪺�j��, �ˬd������0�b����
            for(int j=0; j<N; j++) {
                if( matrix[i][j]==0 ){ // �p�G�O0, �N�b����B�W�����Ĥ�
                    left[i] = true; // ���� left[i] ���Ĥ�
                    up[j] = true; // �W�� up[j] ���Ĥ�
                }
            }
        }
        for(int i=0; i<M; i++) { // ���Ӱj��, �ӵۨ� left[i] ����
            if(left[i]==true){
                for(int j=0; j<N; j++) matrix[i][j] = 0; //�A���泣�M��0
            }
        }
        for(int j=0; j<N; j++) { // ���Ӱj��, �ӵۨ� up[j] ����
            if(up[j]==true){
                for(int i=0; i<M; i++) matrix[i][j] = 0; //�A���泣�M��0
            }
        }
    }
};
