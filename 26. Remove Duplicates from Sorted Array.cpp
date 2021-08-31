class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
       if (n==0 || n==1)
        return n;
 
        set<int> S;
        for(int i=0;i<n;i++){
            S.insert(nums[i]);
        }
        int K = S.size();
        set<int, greater<int> >::iterator itr;
        
        int i=0;
        for (itr = S.begin(); itr != S.end(); itr++){
           nums[i]=*itr;
             i++;
        }
     return K;   
    }
};
