class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            int sum_left=0,sum_right=0;
            for(int j=0;j<n;j++){
                if(j<i){
                    sum_left+=nums[j];
                }
                else if(j>i){
                    sum_right+=nums[j];
                }
            }
            if(sum_left==sum_right)
                return i;
        }
        return -1;
    }
};
