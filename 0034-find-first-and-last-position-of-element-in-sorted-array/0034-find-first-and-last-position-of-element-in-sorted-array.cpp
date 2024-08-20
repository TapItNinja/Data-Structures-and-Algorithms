class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int res=-1;
        int res1=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                res=mid;
                start=mid+1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        start=0, end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                res1=mid;
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return {res1, res};
    }
};