class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //    unordered_map<int, int>mp;
    //     int n=nums.size();
    //     for(int i=0; i<n; i++){
    //         int comp=target-nums[i];
    //         if(mp.find(comp)!=mp.end()){
    //             return {mp[comp], i};
    //         }
    //          mp[nums[i]]=i;
    //     }
    //     return {};
  
    vector<pair<int, int>>ans;
    for(int i=0; i<nums.size(); i++){
        ans.push_back({nums[i], i});
    }
    sort(ans.begin(), ans.end());
    int right=nums.size()-1, left=0;
    while(left<right){
        int sum=ans[right].first+ans[left].first;
        if(sum==target){
            return{ans[left].second, ans[right].second};
        }
      else  if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    return {};
    }
};