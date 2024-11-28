class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy=prices[0];
        int sell=prices[0];
        int mx=0;
        for(int i=1; i<n; i++){
            if(buy>prices[i]){
                buy=prices[i];
            }else {
                sell=prices[i]-buy;
                mx=max(sell, mx);
            }
        }
        return mx;
    }
};