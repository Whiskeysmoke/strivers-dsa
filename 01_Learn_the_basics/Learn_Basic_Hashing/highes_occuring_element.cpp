#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <unordered_set>
#include <utility>
#include <map>
using namespace std;

class Solution {
public:
    int mostFrequencyElement(vector<int>& nums) {
        map<int, int> mpp;
        int ans = 0;
        int ans_rep=0;
        for (int i=0;i<nums.size();i++) mpp[nums[i]]++;
        for (auto it : mpp) {
            if (it.second > ans_rep) {
                ans_rep = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) cin >> arr[i];
    Solution obj;
    cout << obj.mostFrequencyElement(arr);
    return 0;
}