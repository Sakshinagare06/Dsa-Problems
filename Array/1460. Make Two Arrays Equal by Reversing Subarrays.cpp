class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {

    //  Approach 1
    //    int n=target.size();
    //     sort(target.begin(),target.end());
    //     sort(arr.begin(),arr.end());  
    //     for(int i=0;i<n;i++){
    //         if(target[i]!=arr[i])
    //         return false;
    //     }
    //     return true;

    // Approach 2
    unordered_map<int,int>mp;
    for(int &num: target){
        mp[num]++;
    }
    for(int &num:arr){
        //if num is not in arr return false
        if(mp.find(num)== mp.end()){
            return false;
        }
        //agar mila to uski freq kam krte jayenge
        mp[num]--;
        //agr freq 0 hogayi to usko erase kr denge
        if(mp[num]==0){
            mp.erase(num);
        }
    }
    //return true if the map of size is 0 or it is empty
    //mtlb map ke sare elements erase kr diye
    return mp.size()==0;
    }
};
