class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int K = encoded.size();
        vector<int> arr(K+1);
        arr[0]=first;
       
        for(int i=0;i<K;i++ ){
            arr[i+1] = (arr[i]^encoded[i]);
        }
        
        return arr;
    }
};
