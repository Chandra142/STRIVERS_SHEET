class Solution {
public:
    int reverse(int x) {
        int original = x;
        int a = 0;
        int reverse = 0;
        while(x != 0){
            a = x%10; // last number
            reverse  = (reverse*10+a); // appending the digit by 1 reverse number
            
            // Checking  for overflow/underflow before updating revers
            if((reverse  > INT_MAX/10) || (reverse <INT_MIN/ 10)){
                return 0; 
                // Returuning 0 if reverse x would cause overflow/underflow; 
            }
            x = x/10; //decreasing number by 1 digit
        }
        return reverse;
    }
};