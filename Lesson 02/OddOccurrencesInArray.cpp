// you can use includes, for example:
#include <bits/stdc++.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &v) {
    // write your code in C++14 (g++ 6.2.0)
    int k = 0;

	for (int i = 0; i < v.size(); i++) {
		k ^= v[i];
	}
	return k;
	
}
