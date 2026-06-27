#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void printNumber(int x) {
        cout << x;
    }
};

int main() {
    int x ;
    cin >> x;
    
    Solution obj;
    obj.printNumber(x);
    return 0;
}