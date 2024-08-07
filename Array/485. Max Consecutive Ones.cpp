class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;int n=nums.size();int count=0;
        vector<int>temp;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
            }
            else{
                temp.push_back(count);
                count=0;
            }
        }
        temp.push_back(count);
        int maxi=*max_element(temp.begin(),temp.end());
        return maxi;
        
    }
};


//space complexity O(1)
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();int count=0,maxi=-1 ;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
            }
            else{
                maxi=max(maxi,count);
                count=0;
            }
        }
        maxi=max(maxi,count);
        return maxi;
        
    }
};
