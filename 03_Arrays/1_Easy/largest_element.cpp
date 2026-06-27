#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest = nums[0];
        for (int i=0;i<nums.size()-1;i++) {
            if (nums[i] > largest) largest = nums[i];
        }
        return largest;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) cin >> arr[i];
    Solution obj;
    cout << obj.largestElement(arr);
    return 0;
}