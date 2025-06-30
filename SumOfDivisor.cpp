#include <iostream>
using namespace std;    
 
class Solution
{
  public:
    long long sumOfDivisors(long long n) 
    {
        // Function to calculate the sum of all divisors of numbers from 1 to n
        // The sum of divisors of a number i is calculated as i * (n / i)
        // where n is the upper limit and i is the divisor.
        // The total sum is accumulated for all i from 1 to n.
        
        if(n <= 0) return 0; // Handle edge case for non-positive n 
        long long f_sum = 0;
        
        for(long long i = 1;i<=n;i++)
        {
            f_sum+= i*(n/i);
        }
        return f_sum;
    }
};
int main()
{
    Solution sc;
    long long n;
    cout<<"enter a number: ";
    cin>>n;
    
    
    cout<<sc.sumOfDivisors(n);
    return 0;
}