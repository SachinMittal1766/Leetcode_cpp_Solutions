class Solution {
public:
     vector<int> order;
    
    void postorderTraversalR(TreeNode* root){
        if(root==NULL) 
            return;
        
        
        if(root->left)
            postorderTraversal(root->left);
        
        if(root->right)
            postorderTraversal(root->right);
        
        order.push_back(root->val);
        
    }
    vector<int> postorderTraversal(TreeNode* root) {
        postorderTraversalR(root);
        return order;
    }
};
