// week13-3.cpp �� Advent of Code 2024 Day 1 �D��
// LeetCode �k�W���ϥ�,My Playground New Playground, +�s�� Playground
// Input ��b�k�U���� stdin ���зǿ�J��
// �e�� LeetCode ���A�g�n #include <iostream> �M #include <vector>
// using namespace std; �����A�g�n�F, �A���μg, ��K�A�b�C�ֳ����{��
int main() {
    vector<int> A, B; // 2�Ӱ}�C (���Y�ۦp)
    int a, b; //��Ӽ�
    while( cin >> a >> b ) { // Step01: Input
        A.push_back(a); // Step02: ���}�C
        B.push_back(b);
    }
    for(int i=0; i<A.size(); i++) { // Step03: Output
        cout << A[i] << " ";
    }
}

