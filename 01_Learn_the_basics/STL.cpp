#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <unordered_set>
#include <utility>
#include <map>
using namespace std;

// Pairs
void explainPairs() {

    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> q = {1, {3, 4}};

    cout << q.first << " " << q.second.second << " " << q.second.first;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};

    cout << arr[1].second;
}

void explainVector() {
    // Can also be written as {value1, value2} while returning if you dont want to take up additional space.
    // {value1, value2}
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    // .emplace_back is faster than .push_back

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2); // emplace_back automatically assumes it to be a pair
    
    vector<int> v(5, 100); // its a container containing 5 instances of 100
    vector<int> v(5); // This will declare a container with size 5 containing 5 garbage values

    vector<int> v1(5, 20);
    vector<int> v2(v1); // v2 vector is a copy of v1 vector

    vector<int>::iterator it = v.begin(); // Suppose vector v = [20, 10, 5, 6, 7]

    it++;
    cout << *(it) << " "; // The star infron of (it) prints the value

    it = it + 2;
    cout << *(it) <<  " "; // This prints 6

    vector<int>::iterator it = v.end(); // Suppose vector v = [10, 20, 30, 40]
    // end will not point to 40 here, it will point to a memory location after 40
    // so it-- will point to 40

    // vector<int>::iterator it = v.rend();
    // Usually this is not used.
    // So it++ here will go to a memory before 10

    // vector<int>::iterator it = v.rbegin();
    // Usually this not used.
    // it will be pointing towards 40
    // it++ will point to 30
    // Like its in the reverse direction

    cout << v.back() << " "; // .back() points to the last element, here it is 40.

    // This prints all the elements of the vector
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    // A shorter form.
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    // Here it directly takes the value of 10, 20, 30. Here auto is playing a role of "int"
    // This is a for each loop. where for each item in "v", "it" takes its value in a loop
    for (auto it : v) {
        cout << it << " ";
    }

    // {10, 20, 12, 23}
    v.erase(v.begin() + 1);
    // Now the vector becomes {10, 12, 23}

    // {10, 20, 12, 23}
    v.erase(v.begin()+1, v.begin()+3);
    // Now the vector becomes {10, 23}
    // it is like [start, end)
    
    // Insert Function.

    vector<int>v(2,100); // {100,100}

    v.insert(v.begin(), 300); // {300,100,100}
    v.insert(v.begin() + 1, 2, 10); // {300,10,10,100,100} Two occurences of ten are inserted

    vector<int>copy(2,50); // {50,50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50,50,300,10,10,100,100}

    // {10,20}
    cout << v.size(); // 2

    // {10,20}
    v.pop_back(); // {10}

    // v1 -> {10,20}
    // v2 -> {30,40}
    v1.swap(v2); // v1 -> {30,40} & v2 -> {10,20}

    v.clear(); // erases the entire vector

    cout << v.empty(); // If the vector is empty this will say True
}

void explainList() {
    list<int> ls;
    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(5); // {5,2,4}
    ls.emplace_front(); // {2,4};

    // rest functions are same as vectors
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainDeque() {
    deque<int>dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1,2}
    dq.push_front(4); //{4,1,2}
    dq.emplace_front(3); //{3,4,1,2}

    dq.pop_back(); // {3,4,1}
    dq.pop_front(); // {4,1}

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainStack() { // All the operations are O(1) operations
    stack<int>st; // LIFO : Last In First Out
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(3); // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}

    cout << st.top(); // prints 5 "** st[2] is invalid **"

    st.pop(); // {3,3,2,1}

    cout << st.top(); // 3

    st.size(); // 4

    st.empty(); // it will give False as it is not empty.

    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue() { // O(1)
    queue<int> q; // FIFO : First In First Out
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.emplace(4); // {1,2,4}
    q.back() += 5;

    cout << q.back(); // prints 9

    // q is {1,2,9}
    cout << q.front(); // prints 1

    q.pop(); // {2,9}

    cout << q.front(); // prints 2

    // size swap empty same as stack
}

void explainPQ() { // known as Max Heap
    priority_queue<int> pq; // largest value stays at the first
    pq.push(5); // {5} O(logN)
    pq.push(2); // {5,2}
    pq.push(8); // {8,5,2} 
    pq.emplace(10); // {10,8,5,2}

    cout << pq.top(); // prints 10 O(1)

    pq.pop(); // {8,5,2} O(logN)

    cout << pq.top(); // prints 8

    // size swap empty finctions are same as the others

    //Minimum Heap also known as Min Heap
    priority_queue<int, vector<int>, greater<int>> pq; 
    pq.push(5); // {5}
    pq.push(2); // {2,5}
    pq.push(8); // {2,5,8}
    pq.emplace(10); // {2,5,8,10}

    cout << pq.top(); // prints 2
}

void explainSet() { // Unique and Sorted
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1,2}
    st.insert(2); // {1,2} does not add value if it already exists
    st.insert(4); // {1,2,4}
    st.insert(3); // {1,2,3,4} does in in acending order

    // {1, 2, 3, 4, 5}
    auto it = st.find(3); // iterator

    auto it = st.find(6); // iterator will point to st.end()

    st.erase(5); // removes the 5 and maintains the sorted order logN time
    // can also do in this way
    auto it = st.find(5);
    st.erase(it); // Constant time O(1)

    int cnt = st.count(1); // it gives 0 or 1 as multiple instances cant exist in a set

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2); // after erase {1, 4, 5} [first, last)
}

void explainMultiSet() { // Sorted
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1); // All 1s are erased

    // only a single one erased
    ms.erase(ms.find(1));

    auto it = ms.find(1);
    ms.erase(it, next(it,2));

    // Rest all functions are same as set
}

void explainUSet() { // Unique but not sorted.
    unordered_set<int> st;
    // lower_nound and upper bound does not work but the rest all function are the same
    // All the cases is O(1), but once in a millenium it can go till O(N), thats it.
}

void explainMap() { // map stores unique keys in sorted manner

    map<int, int> mpp1; // <key, value>

    map<int, pair<int,int>> mpp2;

    map<pair<int,int>, int> mpp3;

    mpp1[1] = 2;

    mpp1.insert({3,1});
    
    mpp1.insert({2,4});

    mpp3[{2,3}] = 10;

    for(auto it : mpp1) {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp1[1];
    cout << mpp1[5]; // prints null or 0

    auto it = mpp1.find(3);
    cout << (*(it)).second;
    
    auto it = mpp1.find(5); // points to mpp1.end()

    // lower_bound and upper_bound functions as well.
    // erase, swap, size, empty, are same as above
}

void explainMultiMap() {
    // everything same as map, only it can store multiple keys
    // only mpp[key] cant be used here
}

void explainUnorderedMap() {
    // same as set and unordered set difference
}

bool comp(pair<int,int> p1, pair<int,int> p2) { // this is a comparator for sorting.
    if (p1.second < p2.second) return false;
    if (p1.second > p2.second) return true;
    // remains one case, where they both are the same

    if (p1.first > p2.first) return true;
    return false;
}

void explainExtra() {
    string s = "123";
    sort(s.begin(), s.end());

    do {
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));

    // max_element and min_element are used to find the the max and the min element respectively.
    // where *max_element(start_iterator, end_iterator)
}


int main() {

    return 0;    
}