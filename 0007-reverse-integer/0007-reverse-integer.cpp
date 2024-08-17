class Solution {
public:
    int reverse(int x) {
        long int new1=0;
       
        while(x!=0){
        int digit=x%10;
            if(new1>INT_MAX/10 || (new1==INT_MAX/10 && digit>7)){return 0;}
            if(new1<INT_MIN/10 || (new1==INT_MIN/10 && digit<-8)){return 0;}
            new1=(new1*10)+(x%10);
            x=x/10;
        }
        return new1;
        
    }
};