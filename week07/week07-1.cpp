// (�g��@�b) week07-1.cpp �ǲ߭p�e Simulation ��3�D ���r�C��
// LeetCode 1275. Find Winner on a Tic Tac Toe Game
// Ū�G���}�C, �o�� i,j, �A�Х� board[i][j] = 1
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
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {}; //�̭����� 0
        //for(vector<int> move : moves) { �쥻�� 2���}�C��,���X1���}�C
        for(auto move : moves) { //�� auto ���|���A�g�n
            int i = move[0], j = move[1];
            board[i][j] = 1;
            myPrintBoard(board);
        }
        return "A"; //�ӧQ���O��?
    }
};
