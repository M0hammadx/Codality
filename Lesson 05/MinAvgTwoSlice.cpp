// you can use includes, for example:
#include <bits/stdc++.h>
//sad solution :(

int solution(vector<int> &A) {

	double avgs = (A[0] + A[1]) / 2;
	long long minStart = 0;
	double min = avgs;
	long long ans = 0;
	int i;

	for (i = 1; i < A.size() - 1; i++) {

		if (double(A[i] + A[i + 1]) / 2 < min) {
			min = double(A[i] + A[i + 1]) / 2;
			minStart = i;
			//   cout<<"2 "<<i<<endl;
		}
		if (i < A.size() - 2)
			if (double(A[i] + A[i + 1] + A[i + 2]) / 3 < min) {
				//   cout<<"3 "<<i<<" "<<min<<" "<<double(A[i]+A[i+1]+A[i+2])/3 <<endl;
				min = double(A[i] + A[i + 1] + A[i + 2]) / 3;
				minStart = i;
			}
		if (i < A.size() - 3)
			if (double(A[i] + A[i + 1] + A[i + 2] + A[i + 3]) / 4 < min) {
				// cout<<"3 "<<i<<" "<<min<<" "<<double(A[i]+A[i+1]+A[i+2])/3 <<endl;
				min = double(A[i] + A[i + 1] + A[i + 2] + A[i + 3]) / 4;
				minStart = i;
			}

	}

	return minStart;

}
