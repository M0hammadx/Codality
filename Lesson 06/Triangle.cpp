// you can use includes, for example:
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A) {
	if (A.size() < 3) {
		return 0;
	}

	sort(A.begin(), A.end());

	for (int i = 2; i < A.size(); i++) {
		if (A[i] < (long long) A[i - 2] + A[i - 1]) {
			return 1;
		}
	}
	return 0;
}

