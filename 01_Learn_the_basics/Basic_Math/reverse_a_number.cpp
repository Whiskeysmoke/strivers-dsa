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
    int reverseNumber(int n) {
        int revnum = 0;
        while (n > 0) {
            int last_digit = n % 10;
            n = n / 10;
            revnum = (revnum*10) + last_digit;
        }
        return revnum;
    }
};

int main() {
    int x;
    cin >> x;
    Solution obj;
    int y = obj.reverseNumber(x);
    cout << y;
    return 0;
}