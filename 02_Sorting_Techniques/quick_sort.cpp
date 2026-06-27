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
    int partition(vector<int>&nums, int low, int high) {
        int pivot = nums[low];
        int i = low;
        int j = high;
        while (i < j) {
            while (nums[i] <= pivot && i <= high - 1) {
                i++;
            }
            while (nums[j] > pivot && j >= low + 1) {
                j--;
            }
            if (i < j) swap(nums[i], nums[j]);
        }
        swap(nums[low], nums[j]);
        return j;
    }

    void qs(vector<int>&nums, int low, int high) {
        if (low<high) {
            int pindex = partition(nums, low, high);
            qs(nums, low, pindex-1);
            qs(nums, pindex+1, high);
        }
    }

    vector<int> quickSort(vector<int>& nums) {
       qs(nums, 0, nums.size()-1);
       return nums;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) cin >> arr[i];
    Solution obj;
    for (auto it : obj.quickSort(arr)) {
        cout << it << " ";
    }
    return 0;
}