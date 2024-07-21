//there are 3 conditions that we have to check
// 1)if the array is sorted--> 1,2,3,4,5 so here arr[n-1] i.e 5 > arr[0] i.e 1
// we want only 1 or 0 pair of such numbers from array.if there are more pairs then 
// the array is not sorted and rotated.

// 2)if the array is sorted and rotated like--> 4,5,1,2,3 sp here will be only one pair 
// which satisfy the below condition
// i.e nums[i-1]>nums[i] ex 5>1;


class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int count=0;

        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i])
                count++;
            
        }
        if(nums[n-1]>nums[0])
                count++;

        return count<=1;
    }
};

