#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int temp = nums[0];
        for(int i=1;i<nums.size();i++) {
            swap(nums[i], nums[i-1]);
        }
        nums[nums.size()-1] = temp;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    Solution obj;
    obj.rotateArrayByOne(arr);
    for(int j=0;j<n;j++) cout << arr[j] << " ";
    return 0;
}