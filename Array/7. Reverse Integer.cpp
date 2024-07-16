class Solution {
public:
    int reverse(int x) {
        
        int ans=0;
        while(x!=0){
            int digit=x%10;

            if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
                return 0;
            }
            ans=(ans*10)+digit;
            x=x/10;
        }
        
        return ans;
    }
};

//example:
//123
// digit=123%10= 3
// ans=(0*10)+3= 3
// x=x/10=123/10= 12

// digit=12%10= 2
// ans=(3*10)+2= 32
// x=x/10=12/10= 1

// digit=1%10=1 
// ans=(32*10)+1= 321
// x=x/10=1/10=0
// break

// final answer is 321
