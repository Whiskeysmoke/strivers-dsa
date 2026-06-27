#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <unordered_set>
#include <utility>
#include <map>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        int armnum = 0;
        int n1 = n;
        while (n > 0) {
            int last_digit = n % 10;
            n = n / 10;
            armnum = armnum + (last_digit*last_digit*last_digit);
        }
        if (armnum == n1) return true;
        else return false;
    }
};

int main() {
    int x;
    cin >> x;
    Solution obj;
    bool y = obj.isArmstrong(x);
    cout << y;
    return 0;
}