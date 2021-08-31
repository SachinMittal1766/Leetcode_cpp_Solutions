class Solution {
public:
    vector<int> order;
    
    void inorderTraversalR(TreeNode* root){
        if(root==NULL) 
            return;
        
        if(root->left)
            inorderTraversal(root->left);
        
        order.push_back(root->val);
        
        if(root->right)
            inorderTraversal(root->right);
        
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        inorderTraversalR(root);
        return order;
    }
};
