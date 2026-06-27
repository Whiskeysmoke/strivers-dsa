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
    vector<int> selectionSort(vector<int>& nums) {
        for (int i=0;i<=((nums.size())-2);i++) {
            int mini = i;
            for (int j=i;j<=((nums.size())-1);j++) {
                if (nums[j] < nums[mini]) {
                    mini = j;
                }
            }
            int temp = nums[mini];
            nums[mini] = nums[i];
            nums[i] = temp;
        }
        return nums;
    }

    vector<int> bubbleSort(vector<int>& nums) {
        for (int i=((nums.size())-1);i>=1;i--){
            for (int j=0;j<=i-1;j++) {
                if (nums[j] > nums[j+1]) {
                    swap(nums[j], nums[j+1]);
                }
            }
        }
        return nums;
    }

    vector<int> insertionSort(vector<int>& nums) {
        for (int i=0;i<=((nums.size())-1);i++) {
            int j = i;
            while (j > 0 && nums[j-1] > nums[j]) {
                swap(nums[j-1], nums[j]);
                j--;
            }
        }
        return nums;
    }
};

int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) cin >> arr[i];
    Solution obj;
    for (auto it : obj.insertionSort(arr)) {
        cout << it << " ";
    }
    return 0;
}