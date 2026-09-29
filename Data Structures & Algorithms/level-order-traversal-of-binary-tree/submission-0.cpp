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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> master;
        if (root == nullptr){return master;}
        queue<TreeNode*> nodeQueue;
        nodeQueue.push(root);
        while (!nodeQueue.empty()){
            vector<int> temp;
            int qsize = nodeQueue.size();
            for (int i =0; i < qsize;i++){
                temp.push_back(nodeQueue.front()->val);
                if (nodeQueue.front()->left!=nullptr){
                    nodeQueue.push(nodeQueue.front()->left);
                }
                if (nodeQueue.front()->right!=nullptr){
                    nodeQueue.push(nodeQueue.front()->right);
                }
                nodeQueue.pop();
            }
            master.push_back(temp);
        }
        return master;
    }
};