// week14-4.cpp �ǲ߭p�e Binary Tree ��1�D �ϥΨ禡�I�s�禡
// LeetCode 104. Maximum Depth of Binary Tree
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0; // �פ���� Terminal Condition ��������
        return 1 + max( maxDepth(root->left) , maxDepth(root->right) );
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
