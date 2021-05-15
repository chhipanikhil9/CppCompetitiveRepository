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




// O(1) Space Complexity
class Solution {
public:
    
    void flatten(TreeNode* root) {
        if(root==nullptr or (root->left == nullptr and root->right == nullptr)) 
            return;
        
        if(root->left != nullptr){
        	// untill we reach on a node that does not have any grandchilren
            flatten(root->left);
            // store right child
            TreeNode* temp = root->right;
            // make left child to right child
            root->right = root->left;
            // and assin left child null
            root->left = nullptr;

            TreeNode* r = root->right;
            // traverse right end
            while(r->right != nullptr){
                r = r->right;
            }
            r->right = temp;
        }
        
        if(root->right != nullptr){
            flatten(root->right);
        }
        
    }
};
