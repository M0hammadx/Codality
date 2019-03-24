// you can use includes, for example:
//https://app.codility.com/demo/results/trainingJUPC33-YQ3/
	// #include <algorithm>
#include <bits/stdc++.h>
	// you can write to stdout for debugging purposes, e.g.
	// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B) {
	// write your code in C++14 (g++ 6.2.0)
	stack<int> s0,s1;
	int dir = B[0];
	for (int i = 0; i < A.size(); i++) {
		if (B[i] == 1) {
			s1.push(A[i]);
		} else {
			s0.push(A[i]);
			while(s1.size()>0&&A[i]>s1.top())s1.pop();
			if(s1.size())s0.pop();
		}
	}
	return s0.size()+s1.size();
}
