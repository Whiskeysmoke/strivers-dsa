#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // TC = O(N)
    // SC = O(1)
    int maxSubArray(vector<int>&nums) {
        int sum = 0;
        int maxi = INT_MIN;
        for (int i=0;i<nums.size();i++) {
            sum += nums[i];
            if (sum > maxi) {
                maxi = sum;
            }
            if (sum < 0) sum = 0;
        }
        return maxi;
    }

    // If asked to print the sub array:
    // TC = O(N)
    // SC = O(1)
    vector<int> maxSubArrayPrint(vector<int>&nums) {
        int sum = 0;
        int maxi = 0;
        int ansStart = -1;
        int ansEnd = -1;
        int start = 0;
        for (int i=0;i<nums.size();i++) {
            if (sum == 0) start = i;
            sum += nums[i];
            if (sum > maxi) {
                maxi = sum;
                ansStart = start, ansEnd = i;
            }
            if (sum < 0) sum = 0;
        }
        return {ansStart, ansEnd};
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) cin >> arr[i];
    Solution obj;
    cout << obj.maxSubArray(arr) << endl;
    for (auto it : obj.maxSubArrayPrint(arr)) cout << it << " ";
    return 0;
}