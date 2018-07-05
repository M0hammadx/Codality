// you can use includes, for example:
#include <bits/stdc++.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int X, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    set<int> s;
    for(int i=0;i<A.size();i++){
        s.insert(A[i]);
        if(s.size()==X)return i;
    }
    return -1;
}
