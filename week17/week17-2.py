# week17-2.py �ǲ߭p�e Basic ��7�D +1
# LeetCode 66. Plus One
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        # Python
        N = len(digits) # ���X���
        carry = 1
        for i in range(N-1,-1,-1): # �˹L�Ӫ��j��
            digits[i] = digits[i] + carry  # �[1
            if digits[i] >= 10:  # �p�G�[�� >=10 ���i��
                carry = 1  # �i��
                digits[i] = digits[i] % 10  # �l��,�d�b��a
            else: # �S���i��
                carry = 0  # �N�]��0

        if carry==0:
            return digits
        else:
            return [carry] + digits
