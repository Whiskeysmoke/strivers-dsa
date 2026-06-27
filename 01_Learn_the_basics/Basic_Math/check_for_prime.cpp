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
    bool isPrime(int n) {
        int cnt = 0;
        for (int i = 1; i*i <= n; i++) {
            if (n % i == 0) {
                cnt+=1;
                if (n/i != i) cnt+=1;
            }
        }
        if (cnt == 2) return true;
        else return false;
    }
};

int main() {
    int x;
    cin >> x;
    Solution obj;
    bool y = obj.isPrime(x);
    cout << y;
    return 0;
}