// week13-4b.cpp �� Advent of Code 2024 Day 1 �D��
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
    sort(A.begin(), A.end()); // Step04: sort �p��j�Ʀn
    sort(B.begin(), B.end());
    int ans = 0;
    for(int i=0; i<A.size(); i++) { // Step03: Output
        cout << A[i] << " ";
        ans += abs(A[i]-B[i]);
    }
    cout << " ���׬O: " << ans ;

    ans = 0;
    for(int a : A){
        for(int b : B){
            if(a==b) ans += b;
        }
    }

    cout << " �s�����׬O: " << ans;
}
