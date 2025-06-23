#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        // code here
        a = a+1;
        b = b+2;
        return {a,b};
    }
};

int main() {
    Solution sol;
    int a = 5;
    int b = 10;
    vector<int> result = sol.passedBy(a, b);
    cout << "After passedBy: a = " << result[0] << ", b = " << result[1] << endl;
    cout << "Value of b after function call: " << b << endl;
    return 0;
}