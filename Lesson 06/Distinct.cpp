// you can use includes, for example:
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &v) {

set<int> s(v.begin(), v.end());
return s.size();
}

