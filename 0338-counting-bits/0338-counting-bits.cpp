class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++)
        {
            int sum=0;
            int num =i;
            while(num!=0)
            {
                num = num&(num-1);
                sum++;
            }
            ans.push_back(sum);
        }
        return ans;
        
    }
};