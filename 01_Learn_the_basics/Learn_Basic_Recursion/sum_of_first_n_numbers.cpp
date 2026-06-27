#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <unordered_set>
#include <utility>
#include <map>
using namespace std;

class Solution{	
	public:
		int NnumbersSum(int N){
			if ( N == 0 ) return 0;
            return N + NnumbersSum(N-1);
		}
};

int main() {
    int x;
    cin >> x;
    Solution obj;
    int y = obj.NnumbersSum(x);
    cout << y;
    return 0;
}