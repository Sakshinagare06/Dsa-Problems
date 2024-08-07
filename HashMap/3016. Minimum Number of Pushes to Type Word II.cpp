class Solution {
public:
    static int minimumPushes(string& word) {
        vector<int>mp(26,0);
        for(char &ch: word){
            mp[ch-'a']++;
        }
        sort(mp.rbegin(),mp.rend());//decending order
        int result=0;

        for(int i=0;i<26;i++){
            int freq=mp[i];
            int press=(i/8+1);//this is formula for how many times we have to press a number
            //8 bcz we have 8 numbers 2 to 9
            //ex.0/8 +1=0+1=1
            //ex.8/8 +1=1+1=2
            result+=(press*freq);//we have to multiply the press each many time the freq is 
        }
        return result;
    }
};
