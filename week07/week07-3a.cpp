// (LeetCode�G�X�@)
// week07-3a.cpp �ǲ߭p�e Simulation ��2�D (�A�g�@��)
// LeetCode 657. Robot Return to Origin �����H���S���^���Ӫ���m?
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for(char c : moves) {
            if(c=='U') y--;
            if(c=='D') y++;
            if(c=='L') x--;
            if(c=='R') x++;
        }
        if(x==0 && y==0) return true;
        else return false;
    }
};
