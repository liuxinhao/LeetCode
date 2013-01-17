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
    bool hasPathSum(TreeNode *root, int sum) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int s = 0;
        if(root == NULL)
        {
            return false;
        }
        
        s = s + root->val;
        if(root->left == NULL && root->right == NULL)
        {
            return s == sum;
        }
        else
        {
            
            return hasPathSum(root->left,sum - s) || hasPathSum(root->right,sum - s);
            
        }
        
    }
};
