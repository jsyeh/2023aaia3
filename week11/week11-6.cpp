// week11-6.cpp �ǲ߭p�e��9�D �Ӷ���,�ۮt���@��
// LeetCode 1502. Can Make Arithmetic Progression From Sequence
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort( arr.begin(), arr.end() ); //�p��j�Ʀn
        int N = arr.size();
        for(int i=0; i<N-2; i++) { //�j��C�C����
            if( arr[i]-arr[i+1] != arr[i+1]-arr[i+2] ) return false;
        } // �p�G���ۦP, �N����
        //���}�j��, �p�G���S������, �N�O���\, �}��
        return true;
    }
};
