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
    vector<int> divisors(int n) {
        vector<int> v;
        for (int i = 1; i*i <= n; i++) {
            if (n % i == 0) {
                v.emplace_back(i);
                if (n/i != i) v.emplace_back(n/i);
            }
        }
        sort(v.begin(), v.end());
        return v;
    }
};

int main() {
    int x;
    cin >> x;
    Solution obj;
    vector<int> y = obj.divisors(x);
    for (auto it : y) {
        cout << it << " ";
    }
    return 0;
}