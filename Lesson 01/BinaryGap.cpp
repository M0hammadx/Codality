// you can use includes, for example:
#include <bits/stdc++.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int n) {
    // write your code in C++14 (g++ 6.2.0)
    
    int mx = 0, cnt = -1;
	while (n) {
		if (n & 1) {
			mx = max(mx, cnt);
			cnt = 0;
		} else if (cnt != -1) {
			cnt++;
		}
		n >>= 1;
	}
	return mx;
}
