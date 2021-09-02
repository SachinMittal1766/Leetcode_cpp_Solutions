class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int n = nums.size();
        int pro = 0;
        
        for(int i=0;i<n;i++){
           for(int j=(i+1);j<n;j++){
                 int K = (nums[i]-1)*(nums[j]-1);
               pro = max(pro, K);       
           }
        
        }
        return pro;
    }
};
