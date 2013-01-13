//
//  MaximumDepthofBinaryTree.cpp
//  LeetCode
//
//  Created by liu xinhao on 13-1-14.
//  Copyright (c) 2013年 liu xinhao. All rights reserved.
//

#include "MaximumDepthofBinaryTree.h"

 struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };


class Solution {
public:
    int maxDepth(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int count = 0;
        if(root == NULL)
        {
            return count;
        }
        else
        {
            count++;
            return   count + max(maxDepth(root->left),maxDepth(root->right));
        }
        
    }
};
