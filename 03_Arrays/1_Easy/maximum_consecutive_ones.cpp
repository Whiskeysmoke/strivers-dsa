#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int ans = 0;
        while (j < nums.size()) {
            if (nums[j] == 1) {
                j++;
            }
            else {
                ans = max(ans, j-i);
                j++;
                i=j;
            }
        }
        ans = max(ans, j-i);
        return ans;    
    }
};


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    Solution obj;
    cout << obj.findMaxConsecutiveOnes(arr);
    return 0;
}