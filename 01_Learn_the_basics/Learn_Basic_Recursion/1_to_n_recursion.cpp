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
    void printNumbers(int n) {
        f(1,n);
    }
    void f(int i, int n1) {
            if (i > n1) return;
            cout << i << endl;
            f(i+1, n1);
        }
};

int main() {
    int x;
    cin >> x;
    Solution obj;
    obj.printNumbers(x);
    return 0;
}