// week06-5.cpp さぱ珼驹肈(肈)
// LeetCode 670 670. Maximum Swap рnum柑,ヴ2ダユ传,т程计
class Solution {
public:
    int maximumSwap(int num) {
        int ans = num; //程虏虫氮,碞琌セō
        string s = to_string(num); //stoi()は筁ㄓ
        //for(int i=0; i<s.length(); i++){//い丁璶ノ癹伴,穝氮
        //    cout << s[i] << ' '; //絤策
        //}
        for(int i=0; i<s.length()-1; i++){ // オもi
            for(int j=i+1; j<s.length(); j++){ //もj
                swap(s[i], s[j]); // ユ传s[i] s[j]ㄢ计
                ans = max(ans, stoi(s)); // 琌,穝
                swap(s[i], s[j]); // ユ传ㄓ
            }
        }
        return ans;
    }
};
