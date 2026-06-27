#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <unordered_set>
#include <utility>
#include <map>
using namespace std;

class Solution{
public:
    int i = 0;
    void reverse(int arr[], int n){
        if (i >= n/2) return;
        swap(arr[i], arr[n-i-1]);
        i += 1;
        reverse(arr, n);
    }
};

int main() {
    Solution obj;
    int x;
    cin >> x;
    int arr[x];
    for (int j = 0;j<x;j++) cin >> arr[j];
    obj.reverse(arr, x);
    for (int j = 0;j<x;j++) cout << arr[j] << " ";
}