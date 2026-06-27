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
    int GCD(int n1,int n2) {
        while (n1 > 0 && n2 > 0) {
            if (n1 > n2) n1 = n1 % n2;
            else n2 = n2 % n1;
        }
        if (n1 == 0) return n2;
        else return n1;
    }
};

int main () {
    int x;
    int y;
    cin >> x;
    cin >> y;
    Solution obj;
    int z = obj.GCD(x, y);
    cout << z;
    return 0;
}