// Problem: Binary Tree Level Order Traversal II
// Link: https://leetcode.com/explore/featured/card/july-leetcoding-challenge/544/week-1-july-1st-july-7th/3378/

// Solution: 

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
class Solution {
public:
    void helper(TreeNode* root,vector<vector<int>> &ans, int h){
        if(root==NULL) return;
        else {
            if(h>=ans.size()) ans.resize(h+1);
            ans.at(h).push_back(root->val);
            helper(root->left,ans,h+1);
            helper(root->right,ans,h+1);
        }
    } 
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        helper(root,ans,0);
        vector<vector<int>> Bottom;
        for(int i=ans.size()-1;i>=0;i--){
            Bottom.push_back(ans[i]);
        }
        return Bottom;
    }
};
