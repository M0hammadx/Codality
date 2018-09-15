#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int solution(string &S) {
	stack<char> s;
	map<char, char> m = { { '{', '}' }, { '[', ']' }, { '(', ')' } };
	for (int i = 0; i < S.size(); i++) {
		if (S[i] == '[' || S[i] == '{' || S[i] == '(') {
			s.push(S[i]);
		} else {
			if (m[s.top()] != S[i]) {
				return 0;
			}
			s.pop();
		}
	}
	return s.empty();
}
