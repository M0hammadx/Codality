// you can use includes, for example:
#include <bits/stdc++.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {

	double avgs = double(A[0] + A[1]) / 2;
	long long minStart = 0;
	double min = avgs;
	long long ans = 0;

	int mem[A.size()];
	mem[0] = A[0];
	for (int i = 1; i < A.size(); i++) {
		mem[i] = mem[i - 1] + A[i];
	}
	for (int i = 1; i < A.size(); i++) {

//		cout << i << " " << avgs << " " << minStart << " " << endl;

//	avgs *= i - minStart;
//	cout << avgs << endl;

//avgs += A[i];
//			cout << avgs << endl;

//avgs /= i - minStart + 1;
		avgs = double(mem[i] - mem[minStart] + A[minStart])
				/ (i - minStart + 1);

		if (min > avgs) {
			ans = minStart;
			min = avgs;
		}
		if (avgs > A[i]) {
			avgs = A[i];
			minStart = i;
		}

	}
	return ans;

}
