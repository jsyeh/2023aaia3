// week18-1b.cpp
// LeetCode 2185. Counting Words With a Given Prefix
// ���Ѫ��D���D
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        int L = pref.length(); // �r������
        for(string word : words) { // �� words ���Ҧ����r
            if( pref == word.substr(0, L) ) ans++; // �p�G�e��L�Ӧr��,�M pref�ۦP, +1
        }
        return ans;
    }
};
