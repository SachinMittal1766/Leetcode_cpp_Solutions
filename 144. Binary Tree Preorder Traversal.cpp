class Solution {
public:
    vector<int> order;
    
    void preorderTraversalR(TreeNode* root){
        if(root==NULL) 
            return;
        
        order.push_back(root->val);
        
        
        if(root->left)
            preorderTraversal(root->left);
        
        if(root->right)
            preorderTraversal(root->right);
        
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        preorderTraversalR(root);
            return order;
    }
};
