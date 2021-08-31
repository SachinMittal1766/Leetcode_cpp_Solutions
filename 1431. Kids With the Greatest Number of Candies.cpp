class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> result(n,false);
        
        int ans=candies[0];
        for(int i=1;i<n;i++){
            if(candies[i]>ans)
                ans=max(ans,candies[i]);
        }
        
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies >= ans)
                result[i]=true;
        }
       
        return result;
    }
};
