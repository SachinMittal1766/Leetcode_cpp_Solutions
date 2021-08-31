class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> Sum(n);
        
        for(int i=0;i<n;i++){
                int add =0;
           for(int j=0;j<=i;j++){
                add=add+nums[j];
           }
            Sum[i]=add;
        }
        return Sum;
        
    }
};
