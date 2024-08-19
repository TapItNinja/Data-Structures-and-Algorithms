class Solution {
private:
    void dfs(int start, vector<int>adj[], vector<int>&vis){
        vis[start]=1;
        // ls.push_back(start);
        for(auto it: adj[start]){
            // count++;
            if(!vis[it]){
                dfs(it,  adj, vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int >adjls[n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(isConnected[i][j]==1 && i!=j){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);

                }
            }
        }
        vector<int> vis(n, 0);
        // vis[0]=1;
        int count=0;
        for(int i=0; i<n; i++){
            if(!vis[i]){
                count++;
                dfs(i,adjls, vis);
            }
        }        
        return count;

    }
};