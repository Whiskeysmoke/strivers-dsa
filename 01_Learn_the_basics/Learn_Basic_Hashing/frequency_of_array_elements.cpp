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
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        map<int,int> mpp;
        vector<vector<int>> temp_vect1;
        for (int i=0;i<nums.size();i++) mpp[nums[i]]++;
        for (auto it : mpp){
            vector<int> temp_vect2;
            temp_vect2.emplace_back(it.first);
            temp_vect2.emplace_back(it.second);
            temp_vect1.emplace_back(temp_vect2);
        }
        return temp_vect1;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    Solution obj;
    vector<vector<int>> result = obj.countFrequencies(arr);
    for (auto &row : result) {
        cout << row[0] << " " << row[1] << endl;
    }
    return 0;
}