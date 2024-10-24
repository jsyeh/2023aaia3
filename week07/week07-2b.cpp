// (�g��@�b) week07-2b.cpp �ǲ߭p�e Simulation ��3�D ���r�C��
// LeetCode 1275. Find Winner on a Tic Tac Toe Game
// Ū�G���}�C, �o�� i,j, �A�Х� board[i][j] = 1
// 1��2��1��2��1��2��1��2��1....  �] 1+2=3 => 3-1�o2, 3-2�o1
class Solution {
public:
    void myPrintBoard(int board[3][3]) {
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    bool myTestWin(int board[3][3], int now) {
        if(board[0][0]==now && board[0][1]==now && board[0][2]==now) return true; //�W����
        if(board[1][0]==now && board[1][1]==now && board[1][2]==now) return true; //������
        if(board[2][0]==now && board[2][1]==now && board[2][2]==now) return true; //�U����

        if(board[0][0]==now && board[1][0]==now && board[2][0]==now) return true; //�����u
        if(board[0][1]==now && board[1][1]==now && board[2][1]==now) return true; //�����u
        if(board[0][2]==now && board[1][2]==now && board[2][2]==now) return true; //�k���u
        //�﨤�u
        if(board[0][0]==now && board[1][1]==now && board[2][2]==now) return true; //���W�k�U
        if(board[2][0]==now && board[1][1]==now && board[0][2]==now) return true; //�k�W���U
        return false; //���S���\, �N�O����
    }//�n�ݬ�,�ֳs�u���\
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {}; //�̭����� 0
        int now = 1; // ��1�ӤU���H, �s 1:"A", 2:"B"
        for(auto move : moves) { //�� auto ���|���A�g�n
            int i = move[0], j = move[1];
            board[i][j] = now; // �令 now
            //myPrintBoard(board);
            if(myTestWin(board, now)) {//�n�ݬ�,�ֳs�u���\
                if(now==1) return "A";
                else return "B";
            }
            now = 3 - now; //1��2,2��1,1��2,2��1
        }
        return "Draw"; //���S���H�ӧQ����
    }
};
