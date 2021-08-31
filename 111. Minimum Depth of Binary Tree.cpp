class Solution {
public:
    int minDepth(TreeNode* root) {
          if(root==NULL)
     return 0;

  int ldis = minDepth(root->left);
  int rdis = minDepth(root->right);
  if(ldis == 0 )
  return (rdis +1);
  else if(rdis ==0)
  return (ldis +1);
  else 
  return min(ldis,rdis) + 1;
    }
};
