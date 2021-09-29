class Solution {
public:
    string defangIPaddr(string address) {
        int length= address.length();
        string New;
        for(int i=0;i<length;i++){
            if(address[i]=='.')
                New+="[.]";
            else
                New+=address[i];
                
        }
        return New;
    }
};
