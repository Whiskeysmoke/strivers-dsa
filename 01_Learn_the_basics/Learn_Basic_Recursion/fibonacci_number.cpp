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
    int fib(int n) {
        if (n <= 1) return n;
        int last = fib(n-1);
        int slast = fib(n-2);
        return last + slast;
    }
};

int main(){
    int x;
    cin >> x;
    Solution obj;
    cout << obj.fib(x);
    return 0;
}