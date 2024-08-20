class Solution {
public:
    int search(vector<int>& nums, int target) {
        int right=nums.size()-1;
        int left=0;
        while(left<=right){
        int mid=((left+right)/2);
             cout<<mid;
            if(nums[mid]==target){
                return mid;
            }
           
            else if(nums[mid]>target){
                right=mid-1;
                // mid=
            }
            else{
                left=mid+1;
            }
        }
        return -1;
    }
};