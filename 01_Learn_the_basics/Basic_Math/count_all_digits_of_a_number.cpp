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
    int countDigit(int n) {
        int cnt = 0;
        while(n > 0) {
            cnt = cnt + 1;
            n = n/10;
        }
        return cnt;
    }
};

int main() {
    int x;
    cin >> x;
    Solution obj;
    int y = obj.countDigit(x);
    cout << y;
    return 0;
}