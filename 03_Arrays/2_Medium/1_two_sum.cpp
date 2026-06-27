#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    // TC = O(NlogN)
    // SC = O(N)
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        for (int i=0;i<nums.size();i++) {
            int a = nums[i];
            int more = target - a;
            if (mpp.find(more) != mpp.end()) {
                return {mpp[more], i};
            }
            mpp[a] = i;
        }
        return {-1,-1};
    }
    // If no maps data structure was not allowed to be used,
    // 
    // for Yes or no we can use this, but not for returning the indexes 
    // TC = O(N) + O(NlogN)
    // SC = O(1)
    // if considering the fact that we changing the array then SC = O(N)
    // string twoSum(vector<int>&nums, int target) {
    //     int n = nums.size();
    //     int left = 0, right = n-1;
    //     sort(nums.begin(), nums.end());
    //     while (left < right) {
    //         int sum = nums[left] + nums[right];
    //         if (sum == target) {
    //             return "YES";
    //         }
    //         else if (sum < target) left++;
    //         else right--;
    //     }
    //     return "NO";
    // }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) cin >> arr[i];
    int target;
    cin >> target;
    Solution obj;
    for (auto it : obj.twoSum(arr, target)) {
        cout << it << " ";
    }
    return 0;
}