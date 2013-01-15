/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int depth = 0;
        if(root == NULL)
        {
            return 0;
        }
        if(root->left == NULL && root->right == NULL)
        {
            return 1;
        }
        if(root->left == NULL)
        {
            depth++;
            return depth + minDepth(root->right);
        }
        else if(root->right == NULL)
        {
            depth++;
            return depth + minDepth(root->left);
        }
        else
        {
            depth++;
            return depth + min(minDepth(root->left),minDepth(root->right));
        }
    }
};
