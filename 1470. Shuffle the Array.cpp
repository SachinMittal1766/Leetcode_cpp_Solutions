class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
     
        int K = 2*n; 
        vector<int> ans(K);
        
        for(int i=0;i<K;i++){
            if(i<n)
                ans[2*i]=nums[i];
            else
                ans[2*(i-n)+1]=nums[i];
        }
        
        return ans;
    }
};
