class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int ht[n+1];
        ht[0]=0;
        
        for(int i=1;i<=n;i++){
            ht[i]=gain[i-1]+ht[i-1];
        }
        
        sort(ht,ht+n+1);
        
        return ht[n];
    }
};
