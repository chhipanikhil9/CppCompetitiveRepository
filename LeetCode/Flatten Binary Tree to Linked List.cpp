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

// O(n) space complexity
class Solution {
public:
    
    void preOrder(TreeNode* root,vector<int>& nodes){
        if(root == nullptr) return ;
        nodes.push_back(root->val);
        preOrder(root->left,nodes);
        preOrder(root->right,nodes);
    }
    void flatten(TreeNode* root) {
        if(root==nullptr) return;
        vector<int> nodes;
        preOrder(root,nodes);
        root->val = nodes[0];
        root->left = root->right = nullptr;
        TreeNode* temp = root;
        for(int i=1;i<nodes.size();i++){
            // cout<<nodes[i]<<" ";
            temp->right = new TreeNode(nodes[i]);
            temp = temp->right;
        }
    }
};
