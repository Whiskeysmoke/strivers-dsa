#include <iostream>
#include <vector>
using namespace std;

class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			for (int i=1;i<nums.size()-1;i++) {
                if (nums[i] >= nums[i-1]) {

                }
                else return false;
            }
            return true;
		}
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) cin >> arr[i];
    Solution obj;
    cout << obj.isSorted(arr);
    return 0;
}