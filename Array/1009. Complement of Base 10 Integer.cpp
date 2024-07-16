class Solution {
public:
    int bitwiseComplement(int n) {
        int m=n;
        int mask=0;

        if(m==0)
            return 1;

        while(m!=0){
            mask= (mask<<1) | 1;
            m=m>>1;
        }
        int ans=(~n) & mask;
        return ans;
    }
};

// Input: n = 5
// Output: 2
// Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.

