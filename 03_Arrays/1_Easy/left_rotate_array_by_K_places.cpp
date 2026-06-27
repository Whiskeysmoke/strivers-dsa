#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
        reverse(nums.begin(), nums.end());
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
    obj.rotateArray(arr, k);
    for (int j=0;j<n;j++) cout << arr[j] << " ";
    return 0;
}