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
    vector<int> mergeSort(vector<int>& nums) {
        if (nums.size() <= 1) return nums;
        int mid = nums.size() / 2;
        vector<int> left(nums.begin(), nums.begin() + mid);
        vector<int> right(nums.begin() + mid, nums.end());
        left = mergeSort(left);
        right = mergeSort(right);
        vector<int> result;
        int i = 0;
        int j = 0;
        while (i < left.size() && j < right.size()) {
            if (left[i] <= right[j]) {
                result.push_back(left[i]);
                i++;
            }
            else {
                result.push_back(right[j]);
                j++;
            }
        }
        while (i < left.size()) {
            result.push_back(left[i]);
            i++;
        }
        while (j < right.size()) {
            result.push_back(right[j]);
            j++;
        }
        return result;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0;i<n;i++) cin >> arr[i];
    Solution obj;
    for (auto it : obj.mergeSort(arr)) {
        cout << it << " ";
    }
    return 0;
}