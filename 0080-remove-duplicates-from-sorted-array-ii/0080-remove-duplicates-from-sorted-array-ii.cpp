class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp ;//created a map 
        unordered_map<int,int>::iterator itr;//created an iterator to find the nums[i] in the map if it existed ever
        int index=0;//index would be used to replace the value 
        for(int i=0;i<nums.size();i++)
        {
            itr=mp.find(nums[i]);// find the number
            if(itr==mp.end()) // if number not found then add that to map and change that value with nums[i]and then move index
            {
                mp[nums[i]]++;
                nums[index]=nums[i];
                index++;
            }else{ // if number is found 
                if(itr->second <2) // if the number is found in map and is less than 2 then increase add the count and then change the nums[index] at that point and then increase index as we want two times at most
                {
                    mp[nums[i]]++; 
                    nums[index]=nums[i];
                    index++;
                }
                else{ // if its greater than two times in the map just update map or if you dont update , that would be okay as well . This helps in keeping track of occurences and we dont have to consider that 
                    mp[nums[i]]++;
                }
            }
        }
        return index;
    }
};

// Here we are overwriting the array again and making sure that it repeat twice. Overwriting is only possible with index variable.