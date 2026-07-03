#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    // TC = O(N logN) + O(N)
    // SC = O(N)
    // int majorityElement(vector<int>&nums) {
    //     map<int, int> mpp;
    //     for (int i=0;i<nums.size();i++) {
    //         mpp[nums[i]]++;
    //     }
    //     for (auto it : mpp) {
    //         if (it.second > (nums.size()/2)) {
    //             return it.first;
    //         }
    //     }
    //     return -1;
    // }

    // Moore's Voting Algorithm
    // TC = O(N) + O(N)
    // The extra O(N) only if it is not mentioned that there does not exist a majority element.
    // SC = O(1)
    int majorityElement(vector<int>&nums) {
        int cnt = 0;
        int el;
        for (int i=0;i<nums.size(); i++) {
            if (cnt == 0) {
                cnt = 1;
                el = nums[i];
            }
            else if (nums[i] == el) {
                cnt++;
            }
            else {
                cnt--;
            }
        }
        int cnt1 = 0;
        for (int i=0;i<nums.size();i++) {
            if (nums[i] == el) {
                cnt1++;
            }
        }
        if (cnt1 > (nums.size()/2)) {
            return el;
        }
        return -1;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) cin >> arr[i];
    Solution obj;
    cout << obj.majorityElement(arr);
    return 0;
}