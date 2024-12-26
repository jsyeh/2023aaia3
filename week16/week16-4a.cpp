// week16-4a.cpp �ǲ߭p�e Binary Tree (����) ��1�D
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        //�ݭn �פ����/�������� Terminal Condition

        int ans1 = maxDepth(root->left);
        int ans2 = maxDepth(root->right);
        return max(ans1, ans2) + 1;
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
