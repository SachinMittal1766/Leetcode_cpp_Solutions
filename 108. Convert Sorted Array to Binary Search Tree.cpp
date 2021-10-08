
TreeNode* ans(vector<int>& nums,int start,int end){
    if(start > end)
        return NULL;
    
    int mid = (start+end)/2;
    TreeNode* root = new TreeNode;
    root->val = nums[mid];
    root->left = ans(nums,start,mid-1);
    root->right = ans(nums,mid+1,end);
    
    return root;
}

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return ans(nums,0,n-1);
    }
};

