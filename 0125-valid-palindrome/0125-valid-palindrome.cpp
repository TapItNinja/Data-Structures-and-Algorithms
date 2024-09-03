class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==0){return true;}
        string b;
        for(char ch:s){
            if(isalnum(ch)){
                b+=tolower(ch);
            }
        }
        int i=0;
        int j=b.size()-1;
        while(i<j){
            if(b[i]!=b[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};