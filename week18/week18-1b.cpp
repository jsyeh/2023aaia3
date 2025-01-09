// week18-1b.cpp
// LeetCode 2185. Counting Words With a Given Prefix
// 今天的挑戰題
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        int L = pref.length(); // 字的長度
        for(string word : words) { // 對 words 的所有的字
            if( pref == word.substr(0, L) ) ans++; // 如果前面L個字母,和 pref相同, +1
        }
        return ans;
    }
};
