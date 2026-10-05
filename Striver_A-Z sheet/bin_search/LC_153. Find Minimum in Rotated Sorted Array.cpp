/*
IMP:
1. Tricky to solve; couldn't think of edge cases [lack mech. simulation]
2. Think edge case in terms of combining:
    arr[start], arr[mid], arr[end]
3. Could ve solved in 2 lines, if considerd logic: 
        "ans only-in unsorted part"
*/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=INT_MAX;
        int start=0, end=nums.size()-1;

        while(start<=end){
            int mid=start+(end-start)/2;

            if(nums[start]<nums[mid]){
                if(nums[start]<ans) ans=nums[start];
                start=mid+1;
            }
            else if (nums[mid]<nums[end])
            {
                if(nums[mid]<ans) ans=nums[mid];
                end=mid-1;
            }
            else
            {
                if(nums[start]<ans) ans=nums[start];
                start=mid+1;
            }
        }
        return ans;
    }
};