// you can use includes, for example:
//credits: Толя

#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A) {
	int n = A.size();
	int result = 0;

	int dps[n]={0};
	int dpe[n]={0};

	for (int i = 0, t = n - 1; i < n; i++) {
		int s = i > A[i] ? i - A[i] : 0;
		int e = t - i > A[i] ? i + A[i] : t;
		dps[s]++;
		dpe[e]++;
	}

	int t = 0;
	for (int i = 0; i < n; i++) {
		if (dps[i] > 0) {
			result += t * dps[i];
			result += dps[i] * (dps[i] - 1) / 2;
			if (10000000 < result)
				return -1;
			t += dps[i];
		}
		t -= dpe[i];
	}

	return result;
}

