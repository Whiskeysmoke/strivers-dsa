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
    vector<int> bubbleSort(vector<int>& nums) {
        sortFunction(nums, 0, nums.size());
        return nums;
    }
    void sortFunction(vector<int>& nums, int i, int j) {
        if (j <= 1) return;
        while (i < j-1) {
            if (nums[i] > nums[i+1]) {
                swap(nums[i], nums[i+1]);
            }
            i++;
        }
        sortFunction(nums, 0, j - 1);
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) cin >> arr[i];
    Solution obj;
    for (auto it : obj.bubbleSort(arr)) {
        cout << it << " ";
    }
    return 0;
}