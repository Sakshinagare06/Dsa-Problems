class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size();    // rows
        int n = matrix[0].size(); // columns
    
        // Approach 1    T.C = (m x n) S.C =( m + n)
        vector<int>result;
        vector<int> rowMin;
        vector<int> colMax;

        for (int row = 0; row < m; row++) {
            int rMin = INT_MAX;
            for (int col = 0; col < n; col++) {
                rMin = min(rMin, matrix[row][col]);
            }
            rowMin.push_back(rMin);
        }

        for (int col = 0; col < n; col++) {
            int cMax = INT_MIN;
            for (int row= 0; row< m; row++) {
                cMax = max(cMax, matrix[row][col]);
            }
            colMax.push_back(cMax);
        }

        for (int row = 0; row < m; row++) {
            int rMin = INT_MAX;
            for (int col = 0; col < n; col++) {
                if(matrix[row][col]==rowMin[row] && matrix[row][col]==colMax[col]){
                
                result.push_back(matrix[row][col]);
                }
            }
            
        }
        return result;
   }
};

****************************************************************************************************************************************************************************************************************


  // Approach 2

   class Solution {
   public:
      vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size();    // rows
        int n = matrix[0].size(); // columns


        int rMinMax = INT_MIN;
        for (int row = 0; row < m; row++) {
            int rMin = INT_MAX;
            for (int col = 0; col < n; col++) {
                rMin = min(rMin, matrix[row][col]);
            }

            rMinMax = max(rMinMax, rMin);
        }

        int cMaxMin = INT_MAX;
        for (int col = 0; col < n; col++) {
            int cMax = INT_MIN;
            for (int row = 0; row < m; row++) {
                cMax = max(cMax, matrix[row][col]);
            }

            cMaxMin = min(cMaxMin, cMax);
        }

        if (rMinMax == cMaxMin) {
            return {rMinMax}; // or  (cMaxMin)
        }
        return {};
    }
};
