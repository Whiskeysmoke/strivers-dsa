#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution{
public:
    // This code below is for Positives, Zeros and Negatives
    // int longestSubarray(vector<int> &nums, int k){
    //     map<int, int> presum;
    //     int sum = 0;
    //     int maxlen = 0;
    //     for (int i=0;i<nums.size();i++) {
    //         sum += nums[i];
    //         if (sum == k) {
    //             maxlen = max(maxlen, i-1);
    //         }
    //         int rem = sum - k;
    //         if (presum.find(rem) != presum.end()) {
    //             int len = i - presum[rem];
    //             maxlen = max(maxlen, len);
    //         }
    //         if (presum.find(sum) == presum.end()) {
    //             presum[sum] = i;
    //         }
    //     }
    //     return maxlen;
    // }

    // The code below is optimised for Positives and Zeros only:
    // TC = O(2N)
    // SC = O(1)
    int longestSubarray(vector<int>&nums, int k) {
        int left = 0, right = 0;
        int sum = nums[0];
        int maxLen = 0;
        int n = nums.size();
        while (right < n) {
            while (left <= right && sum > k) {
                sum -= nums[left];
                left++;
            }
            if (sum == k) {
                maxLen = max(maxLen, right - left + 1);
            }
            right++;
            if (right < n) sum += nums[right];

        }
        return maxLen;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) cin >> arr[i];
    int k;
    cin >> k;
    Solution obj;
    cout << obj.longestSubarray(arr, k);
    return 0;
}