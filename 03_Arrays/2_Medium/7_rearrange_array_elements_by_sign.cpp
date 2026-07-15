#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    // Only if the number of positives and the negatives are equal.
    // vector<int> rearrangeArray(vector<int>&nums) {
    //     vector<int> arr(nums.size());
    //     int pos = 0;
    //     int neg = 1;
    //     for (int i=0;i<nums.size();i++) {
    //         if (nums[i] > 0) {
    //             arr[pos] = nums[i];
    //             pos += 2;
    //         }
    //         else {
    //             arr[neg] = nums[i];
    //             neg += 2;
    //         }
    //     }
    //     return arr;
    // }
    // 
    // 
    // TC = O(2N)
    // SC = O(N)
    vector<int> rearrangeArray(vector<int>&nums) {
        vector<int> pos, neg;
        for (int i=0;i<nums.size();i++) {
            if (nums[i] > 0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }
        if (pos.size() > neg.size()) {
            for (int i;i<neg.size();i++) {
                nums[2*i] = pos[i];
                nums[2*i+1] = neg[i];
            }
            int index = neg.size()*2;
            for (int i=neg.size();i<pos.size();i++) {
                nums[index] = pos[i];
                index++;
            }
        }
        else {
            for (int i;i<pos.size();i++) {
                nums[2*i] = pos[i];
                nums[2*i+1] = neg[i];
            }
            int index = pos.size()*2;
            for (int i=pos.size();i<neg.size();i++) {
                nums[index] = neg[i];
                index++;
            }
        }
        return nums;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) cin >> arr[i];
    Solution obj;
    for (auto it:obj.rearrangeArray(arr)) cout << it << " ";
    return 0;
}