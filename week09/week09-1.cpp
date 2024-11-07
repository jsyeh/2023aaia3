// week09-1.cpp �ǲ߭p�e Matrix ��1�D �̦������H, ���h�ֿ�
// LeetCode 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M = accounts.size(); // ���X�ӤH
        int N = accounts[0].size(); // �o�ӤH, ���X�ӱb��
        int ans = 0;
        for(int i=0; i<M; i++) { // ��i�ӤH

            int total = 0; // �j��e�� total �O 0
            for(int j=0; j<N; j++) { // �L���� j �ӱb��
                total += accounts[i][j]; //�j�餤�� total �W�[
            }
            if(total>ans) ans = total; //�j��᭱ total ���ӥ�
        }
        return ans;
    }
};
