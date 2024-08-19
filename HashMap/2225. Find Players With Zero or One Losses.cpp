class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>lostMap;
        for(int i=0;i<matches.size();i++){
            int loser= matches[i][1];
            lostMap[loser]++;
        }
        vector<int>neverLost;
        vector<int>lostOnce;

        for(int i=0;i<matches.size();i++){

            int loser=matches[i][1];
            int winner=matches[i][0];

            if(lostMap.find(winner)==lostMap.end()){
                neverLost.push_back(winner);
                lostMap[winner]=2;
            }
            if(lostMap[loser]==1){
                lostOnce.push_back(loser);
            }
        }
        sort(neverLost.begin(),neverLost.end());
        sort(lostOnce.begin(),lostOnce.end());

        return{neverLost,lostOnce};
    }
};
