class Solution {
public:
    int reverse(int x) {
     long long int reverse=0, rem;  
  while(x!=0)    
  {    
        if (abs(reverse) > 214748364) 
            return 0;
     rem=x%10;      
     reverse=reverse*10+rem;    
     x/=10;    
  }    
   return reverse; 
    }
};
