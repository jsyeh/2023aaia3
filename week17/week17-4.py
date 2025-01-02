# week17-4.py �ǲ߭p�e Basic ��10�D(�˼Ʋ�2�D) �G�X�@
# LeetCode 896. Monotonic Array
class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
        # �Ʊ��� �u�W�[ or �u��� (���i�H�S�W�[�B�S���)
        N = len(nums)  # �� N �ӼƦr
        big, small = False, False  # �@�}�l,�٤����D���S���ܤj�B�ܤp
        for i in range(N-1): # �n�] N-1 ���j�� (�����,�|��1��)
            d = nums[i+1] - nums[i]
            if d>0: big = True  # �ܤj
            if d<0: small = True  # �ܤp
        if big and small: return False  # �S�j? �S�p? ����!
        else: return True
