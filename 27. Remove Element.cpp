class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int K=-1, flag = 0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                K++;
                flag++;
                nums[K]=nums[i];
            }
        }
        if(flag==0){
            return 0;
        }
        return K+1;
    }
};
