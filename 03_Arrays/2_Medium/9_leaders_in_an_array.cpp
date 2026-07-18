#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    // TC = O(2N)
    // SC = O(N)
    vector<int> leaders(vector<int>&nums) {
        vector<int> ans;
        int maxi = INT_MIN;
        int n = nums.size();
        for (int i=n-1;i>=0;i--) {
            if (nums[i] > maxi) {
                ans.push_back(nums[i]);
            }
            maxi = max(maxi, nums[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    // TC = O(N) + O(N logN) --> if asked to return a sorted vector.
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) cin >> arr[i];
    Solution obj;
    for (auto it:obj.leaders(arr)) cout << it << " ";
    return 0;
}