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
    int factorial(int n) {
			if ( n == 0 ) return 1;
            return n * factorial(n-1);
		}
};

int main() {
    int x;
    cin >> x;
    Solution obj;
    int y = obj.factorial(x);
    cout << y;
    return 0;
}