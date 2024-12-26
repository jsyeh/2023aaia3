// week16-5.cpp �ǲ߭p�e Binary Search ��3�D, �Q�Ψ禡�I�s�禡, �� inorder traversal
// LeetCode 94. Binary Tree Inorder Traversal
class Solution {
public:
    void helper(TreeNode* root, vector<int>& ans) {
        if(root==nullptr) return;

        helper(root->left, ans); // ���b�� �禡�I�s�禡
        ans.push_back(root->val); // ����, �[�� ans �̭�
        helper(root->right, ans); // �k�b�� �禡�I�s�禡
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;

        helper(root, ans);

        return ans;
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
