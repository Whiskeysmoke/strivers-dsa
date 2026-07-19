#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution{
public:
    // Better solution:
    // TC = O(N logN) + O(N)
    // int longestConsecutive(vector<int>&nums) {
    //     sort(nums.begin(), nums.end());
    //     int cnt_crr = 0;
    //     int longest = 1;
    //     int last_sml = INT_MIN;
    //     for (int i=0;i<nums.size();i++) {
    //         if (nums[i]-1 == last_sml) {
    //             cnt_crr += 1;
    //             last_sml = nums[i];
    //         }
    //         else if (nums[i] != last_sml){
    //             cnt_crr = 1;
    //             last_sml = nums[1];
    //         }
    //         longest = max(longest, cnt_crr);
    //     }
    //     return longest;
    // }
    // 
    // 
    // TC = O(3N)
    // SC = O(N)
    int longestConsecutive(vector<int>&nums) {
        int n = nums.size();
        if (n == 0) return 0;
        int longest = 1;
        unordered_set<int> st;
        for (int i=0;i<n;i++) {
            st.insert(nums[i]);
        }
        for (auto it : st) {
            if (st.find(it-1) == st.end()) {
                int cnt = 1;
                int x = it;
                while (st.find(x+1) != st.end()) {
                    x += 1;
                    cnt += 1;
                }
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) cin >> arr[i];
    Solution obj;
    cout << obj.longestConsecutive(arr);
    return 0;
}