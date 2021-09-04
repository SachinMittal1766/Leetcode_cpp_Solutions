class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int K = nums.size();
        int n;
        for(int i=0;i<K;i++){
            for(int j=(i+1);j<K;j++){
                if(nums[j]==nums[i]){
                   n = nums[i];
                    break;
                }
                   
            }
        }
        return n;
    }
};
