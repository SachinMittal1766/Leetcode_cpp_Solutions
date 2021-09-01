class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n = nums.size();
        vector<int> list;
        
        for(int i=0;i<n;i+=2){
            while(nums[i]--){
                list.push_back(nums[i+1]);
            }
        }
        return list;
    }
};
