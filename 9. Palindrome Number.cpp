class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long long int original = x;
        long long int reverse=0;
        while(x>0){
            reverse = reverse*10 + x%10;
            x=x/10;
        }
        if(original == reverse )
            return true;
        
        return false;
    }
};
