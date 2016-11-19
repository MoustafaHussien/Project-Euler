#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
long long MOD = 1000000007;
#define ZERO 1e-9
using namespace std;
unordered_set<long long> s;
vector<long long> v;
void pre() {
	long long x;
	v.push_back(-1);
	for (long long i = 1; i <= 1001000; i++) {
		x = i * ((3 * i) - 1);
		x = x * 0.5;
		s.insert(x);
		v.push_back(x);
	}
}
int main(int argc, char **argv) {
	pre();
	int n, k;
	cin >> n >> k;
	for (int i = k + 1; i < n; i++) {
		if (s.find(v[i] - v[i - k]) != s.end()
				|| s.find(v[i] + v[i - k]) != s.end()) {
			cout << v[i] << endl;
		}
	}
	return 0;
}
