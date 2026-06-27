#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <unordered_set>
#include <utility>
#include <map>
using namespace std;

void f(int i,int n) {
    if (i > n) return;
    f(i+1, n);
    cout << i;
}

int main() {
    int x;
    cin >> x;
    f(1,x);
    return 0;
}