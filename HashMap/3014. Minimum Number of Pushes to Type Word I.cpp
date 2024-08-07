class Solution {
public:
    int minimumPushes(string word) {
        //iss map mein 2 to 9 keys aur unme kitne characters hai uska count store hoga
        unordered_map<int,int>mp;
        int result=0;

        int assign_key=2;//starting the key from 2 to 9
        for(char &ch :word){
           if(assign_key>9){
            assign_key=2;
           }
           mp[assign_key]++;

           result+= mp[assign_key];//result mein count ki sum store hogi like 1push+1Push+2push
           assign_key++;
        }
        return result;

    }
};
