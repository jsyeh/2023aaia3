// week13-3.cpp 解 Advent of Code 2024 Day 1 題目
// LeetCode 右上角圖示,My Playground New Playground, +新的 Playground
// Input 放在右下角的 stdin 的標準輸入區
// 前面 LeetCode 幫你寫好 #include <iostream> 和 #include <vector>
// using namespace std; 都幫你寫好了, 你不用寫, 方便你在遊樂場玩程式
int main() {
    vector<int> A, B; // 2個陣列 (伸縮自如)
    int a, b; //兩個數
    while( cin >> a >> b ) { // Step01: Input
        A.push_back(a); // Step02: 放到陣列
        B.push_back(b);
    }
    for(int i=0; i<A.size(); i++) { // Step03: Output
        cout << A[i] << " ";
    }
}

