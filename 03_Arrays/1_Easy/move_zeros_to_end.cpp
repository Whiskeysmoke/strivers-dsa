#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeros(vector<int>& nums) {
        int i =0;
        int j=0;
        while (j < nums.size()) {
            if (nums[i] != 0) {
                i++;
                j++;
            }
            else if (nums[i]==0 && nums[j]==0) {
                j++;
            }
            else if (nums[i]==0 && nums[j]!=0) {
                swap(nums[i], nums[j]);
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
    obj.moveZeros(arr);
    for (int i=0;i<n;i++) cout << arr[i] << " ";
    return 0;
}