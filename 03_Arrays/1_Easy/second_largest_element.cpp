#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest = nums[0];
        int slargest = -1;
        for (int i=1;i<nums.size()-1;i++) {
            if (nums[i] > largest) {
                slargest = largest;
                largest = nums[i];
            }
            else if (nums[i] < largest && nums[i] > slargest) {
                slargest = nums[i];
            }
        }
        return slargest; 
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) cin >> arr[i];
    Solution obj;
    cout << obj.secondLargestElement(arr);
    return 0;
}