#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define MOD 1000000007
#define ZERO 1e-9
using namespace std;
vector<string> v;
int main(int argc, char **argv) {
	int n, q, p, x;
	cin >> n;
	string t;
	for (int i = 0; i < n; i++) {
		cin >> t;
		v.push_back(t);
	}
	sort(v.begin(), v.end());
	cin >> q;
	while (q--) {
		cin >> t;
		x = 0;
		p = lower_bound(v.begin(), v.end(), t) - v.begin() + 1;
		for (int i = 0; i < t.size(); i++) {
			x = x + t[i] - 'A' + 1;
		}
		cout << p * x << endl;
	}
	return 0;
}
