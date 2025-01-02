# LeetCode 2559. Count Vowel Strings in Ranges
# words[i] �̥ѥ����]a e i o u�^�}�Y�B�������r�A���X�ӡH
# queries[i] �� [left, right] ���� words[left]...words[right] �d�򤺡u�X��v���r
class Solution:
    def vowelStrings(self, words: List[str], queries: List[List[int]]) -> List[int]:
        vowel = set(['a','e','i','o','u'])  # �ֳt��X�u�����v
        # ���w��u�����}�Y�B�����v�إ� prefix sum �έp���X��
        preSum = [0]  # �Q�� prefix sum �ֿn�u���X�ӦX�檺�r�v
        for word in words:
            if word[0] in vowel and word[-1] in vowel:
                preSum.append(preSum[-1]+1)  # �X�檺�r +1
            else:  # ���X�檺�r
                preSum.append(preSum[-1])  # ����
        ans = []
        for left, right in queries:  # �w��C�@�� query �߰�
            ans.append( preSum[right+1] - preSum[left] )
            # �Q�δ�k�A�ֳt���D�u�d�򤺡v���X�ӦX�檺�r
        return ans
