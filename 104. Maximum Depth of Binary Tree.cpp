class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        
        int ldis= maxDepth(root->left);
        int rdis = maxDepth(root->right);
        
        return (max(ldis,rdis) + 1);
    }
};
