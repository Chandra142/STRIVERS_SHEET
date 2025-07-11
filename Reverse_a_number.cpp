#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int original = x;
        int a = 0;
        int reverse = 0;
        while(x != 0){
            a = x%10; // last number
            reverse  = (reverse*10+a); // appending the digit by 1 reverse number
            
            // Checking  for overflow/underflow before updating reverse
            if((reverse  > INT_MAX/10) || (reverse <INT_MIN/ 10)){
                return 0; 
                // Returning 0 if reverse x would cause overflow/underflow; 
            }
            x = x/10; //decreasing number by 1 digit
        }
        return reverse;
    }
};

int main() {
    Solution sol;
    int x;
    cin >> x; // You can change this number to test
    int reversed = sol.reverse(x);
    cout << "Original: " << x << endl;
    cout << "Reversed: " << reversed << endl;
    return 0;
}