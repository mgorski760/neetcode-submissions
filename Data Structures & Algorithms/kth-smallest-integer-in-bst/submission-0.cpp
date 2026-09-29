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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> values;
        h_kthSmallest(root, values);
        return values[k-1];
    }

    void h_kthSmallest(TreeNode* curr, vector<int>& values){
        if(curr == nullptr){
            return;
        }

        h_kthSmallest(curr->left, values);
        values.push_back(curr->val);
        h_kthSmallest(curr->right, values);
    }

    

    

};
