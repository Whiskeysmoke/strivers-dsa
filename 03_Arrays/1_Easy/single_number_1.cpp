#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution{    
public:    
    // int singleNumber(vector<int>& nums){
    //     unordered_map<int, int> mpp;
    //     for (int num : nums) {
    //         mpp[num] = mpp[num] + 1;
    //     }
    //     for (int num : nums) {
    //         if (mpp[num] == 1) {
    //             return num;
    //         }
    //     }
    //     return -1;
    // }
    int singleNumber(vector<int>& nums) {
        int xor1 = 0;
        for (int num : nums) {
            xor1 ^= num;
        }
        return xor1;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) cin >> arr[i];
    Solution obj;
    cout << obj.singleNumber(arr);
    return 0;
}