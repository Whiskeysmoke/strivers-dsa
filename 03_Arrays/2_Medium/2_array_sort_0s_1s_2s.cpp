#include <iostream>
#include <vector>
using namespace std;

// Dutch National Flag Algortim
// 
// 0 to low-1 : 0s
// low to mid-1 : 1s
// mid to high+1 : 0s/1s/2s
// high to n-1 : 2s

// TC = O(N)
// CS = O(1)
class Solution {
public:
    void sortZeroOneTwo(vector<int>&nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) cin >> arr[i];
    Solution obj;
    obj.sortZeroOneTwo(arr);
    for (auto it : arr) cout << it << " ";
    return 0;
}