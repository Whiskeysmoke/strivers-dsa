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
    vector<int> insertionSort(vector<int>& nums) {
        sortFunction(nums, 1);
        return nums;
    }
    void sortFunction(vector<int>& nums, int i) {
        if (i >= nums.size()) return;
        int j = i;
        while (j > 0 && nums[j-1] > nums[j]) {
            swap(nums[j-1], nums[j]);
            j--;
        }
        sortFunction(nums, i + 1);
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) cin >> arr[i];
    Solution obj;
    for (auto it : obj.insertionSort(arr)) {
        cout << it << " ";
    }
    return 0;
}