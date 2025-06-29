#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:

    bool armstrongNumber(int n) {
        // code here
        int original = n;
        int duplicate = 0;
        while(n>0){
            int a = n%10;
            
            duplicate += a*a*a;
            n/=10;
        }
            if(duplicate  == original){
                return true;
            }
            else{
                return false;
            }
    }
};

int main() {
    Solution sc;
    bool armstrongNumber = true;
    
    int n;
    cout << "Enter the numbers: ";
    cin >> n;
    
    cout<<boolalpha<<sc.armstrongNumber(n);

    return 0;
}
// Output will be true if the number is an Armstrong number, otherwise false
// Example: For input 153, the output will be true since 1^3 + 5^3 + 3^3 = 153
// For input 123, the output will be false since 1^3 + 2^3 + 3^3 != 123
// Note: The code checks for 3-digit Armstrong numbers specifically, but can be modified to check for any number of digits by changing the power calculation accordingly.
// The code uses a simple loop to extract each digit, raise it to the power of 3, and sum them up. It then compares the sum with the original number to determine if it is an Armstrong number or not.
// The code is efficient and straightforward, making it easy to understand and modify for different requirements.     2