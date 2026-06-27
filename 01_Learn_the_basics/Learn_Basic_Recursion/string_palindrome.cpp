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
        int i = 0;
		bool palindromeCheck(string& s){
			if (i >= (s.size() / 2)) return true;
            if (s[i] != s[s.size()-i-1]) return false;
            i += 1;
            return palindromeCheck(s);
		}
};

int main() {
    string s;
    cin >> s;
    Solution obj;
    bool y = obj.palindromeCheck(s);
    cout << y;
    return 0;
}