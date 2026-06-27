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
    bool isPalindrome(int n) {
        int revnum = 0;
        int n1 = n;
        while (n > 0) {
            int last_digit = n % 10;
            n = n / 10;
            revnum = (revnum*10) + last_digit;
        }
        if (revnum == n1) return true;
        else return false;
    }
};

int main() {
    int x;
    cin >> x;
    Solution obj;
    bool y = obj.isPalindrome(x);
    cout << y;
    return 0;
}