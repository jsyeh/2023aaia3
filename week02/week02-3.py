# week02-3.cpp LeetCode 1768. Merge Strings Alternately
# 把兩個字串, 交錯合在一起
class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        ans=""
        i=0
        while i<len(word1) or i<len(word2):
            if i<len(word1): ans+=word1[i]
            if i<len(word2): ans+=word2[i]
            i+=1
        return ans