#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

class Solution {
public:
    // int missingNumber(vector<int>& nums) {
    //     vector<int> hash_arr(nums.size());
    // }
    // Build on code above.
    // 
    // 
    // int missingNumber(vector<int>& nums) {
    //     unordered_map<int, bool> mpp;
    //     for (int num : nums) {
    //         mpp[num] = true;
    //     }
    //     for (int i = 0; i<=nums.size();i++) {
    //         if (mpp.find(i) == mpp.end()) {
    //             return i;
    //         }
    //     }
    //     return -1;
    // }
    // 
    // int missingNumber(vector<int>& nums) {
    //     int sum1 = (nums.size() * (nums.size() + 1)) / 2;
    //     int sum2 = 0;
    //     for (int i=0;i<nums.size();i++) sum2 = sum2 + nums[i];
    //     if (sum2 - sum1 == 0) {
    //         return -1;
    //     }
    //     return sum1 - sum2;
    // }
    int missingNumber(vector<int>& nums) {
        int xor1 = 0, xor2 = 0;
        for (int i=0;i<nums.size();i++) {
            xor2 = xor2 ^ nums[i];
            xor1 = xor1 ^ (i+1);
        }
        return xor1 ^ xor2;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) cin >> arr[i];
    Solution obj;
    cout << obj.missingNumber(arr);
    return 0;
}