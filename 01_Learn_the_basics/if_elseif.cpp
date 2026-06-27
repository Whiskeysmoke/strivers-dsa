#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void studentGrade(int marks) {
        if (marks >= 35) {
            cout << "Grade ";
            if (marks >= 90) {
                cout << "A";
            }
            else if (marks >= 70) {
                cout << "B";
            }
            else if(marks >= 50) {
                cout << "C";
            }
            else {
                cout << "D";
            }
        }
        else {
            cout << "Fail";
        }
    }
};

int main() {
    int x;
    cin >> x;
    Solution obj;
    obj.studentGrade(x);
    return 0;
}