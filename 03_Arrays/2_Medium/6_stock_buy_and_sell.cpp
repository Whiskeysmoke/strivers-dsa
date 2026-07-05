#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // TC = O(N)
    // SC = O(1)
    int stockBuySell(vector<int>&nums, int n) {
        int mini = nums[0];
        int profit = 0;
        for (int i=1;i<n;i++) {
            int cost = nums[i] - mini;
            profit = max(profit, cost);
            mini = min(mini, nums[i]);
        }
        return profit;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) cin >> arr[i];
    Solution obj;
    cout << obj.stockBuySell(arr, n);
    return 0;
}