// you can use includes, for example:
#include <bits/stdc++.h>
using namespace std;
#define FI(n) for(long long i=0;i<n;++i)

#define target second
bool comp(const pair<long long, long long> &a,
		const pair<long long, long long> &b) {
	if (a.second != b.second)
		return (a.second < b.second);
	return (a.first < b.first);
}
long long binarySearch(vector<pair<long long, long long>> arr, long long l,
		long long r, long long x) {
	while (l < r) {
		long long m = l + (r - l) / 2;
		if (arr[m].target < x) {
			l = m + 1;
		} else {
			r = m;
		}
	}

	return l;
}

int solution(vector<int> &A) {
	long long sum = 0, mx = 10000000;
	long long n = A.size();
	vector<pair<long long, long long>> v(n);
	FI(n)
	{
		v[i]= {i-A[i],i+A[i]};
	}
	sort(v.begin(), v.end(), comp);
	for (auto a : v)
		cout << a.first << " " << a.second << endl;
	for (long long i = n - 1; i >= 0; i--) {
		long long found = binarySearch(v, 0, n, v[i].first);
		if (found < i) {
			sum += i - found;
			if (sum >= mx) {
				return -1;
			}
			v.erase(v.begin() + i);
		}
	}
	return sum;
}

