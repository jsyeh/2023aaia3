// (LeetCode�G�X�@) week07-3b.cpp �ǲ߭p�e Simulation ��4�D
// LeetCode 1041. Robot Bounded In Circle �S���]�X�h�������H
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int dx[4] = {1, 0, -1, 0};
        int dy[4] = {0, 1, 0, -1};
        int x = 0, y = 0, dir = 0; //��Vdirection 0:�k 1:�U 2:�� 3:�W
        for(char c : instructions) {
            if(c=='G') {
                x += dx[dir];
                y += dy[dir];
            }
            if(c=='L') dir = (dir + 3) % 4; //-1 �˹L����, �|���t��, +4
            if(c=='R') dir = (dir + 1) % 4; //+1 �k�B�U�B���B�W�B�A�k�B...
        }
        if(x==0 && y==0) return true;
        else if(dir==0) return false;
        else return true;
    }
};
