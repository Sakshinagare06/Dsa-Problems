class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;
        while(n!=0){
            int digit=n%10;

            prod=prod*digit;
            sum=sum+digit;

            n=n/10;
        }

            int answer=prod-sum;
            return answer;
        }
};


// Input: n = 234
// Output: 15 
// Explanation: 
// Product of digits = 2 * 3 * 4 = 24 
// Sum of digits = 2 + 3 + 4 = 9 
// Result = 24 - 9 = 15


// prod=1,sum=0

// 1)digit=234%10= 4
// prod=1*4=4
// sum=0+4=4
// n=234/10=23


// 2)digit=23%10= 3
// prod=4*3=12
// sum=4+3=7
// n=23/10=2

// 3)2%10= 2
// prod=12*2=24
// sum=7+2=9

// final answer=24-9=15
