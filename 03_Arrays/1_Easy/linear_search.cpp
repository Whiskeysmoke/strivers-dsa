#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        for (int i=0;i<nums.size();i++) {
            if (nums[i]==target) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) cin >> arr[i];
    int target;
    cin >> target;
    Solution obj;
    cout << obj.linearSearch(arr, target);
    return 0;
}