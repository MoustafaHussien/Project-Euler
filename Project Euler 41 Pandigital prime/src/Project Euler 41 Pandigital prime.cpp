#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
long long MOD = 1000000007;
#define ZERO 1e-9
using namespace std;
vector<int> t;
long long getNum() {
	long long n = 0;
	int l = t.size();
	for (int i = 0; i < (int) t.size(); i++) {
		l--;
		n += t[i] * pow(10, l);
	}
	return n;
}
bool check(long long n) {
	if (n == 1)
		return false;
	for (int i = 2; i <= sqrt(n) + 1; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
vector<long long> v;
void pre() {
	long long x;
	for (int i = 1; i <= 9; i++) {
		t.push_back(i);
		sort(t.begin(), t.end());
		do {
			x = getNum();
			if (check(x)) {
				v.push_back(x);
			}
		} while (next_permutation(t.begin(), t.end()));
	}
}
int main(int argc, char **argv) {
	pre();
	sort(v.begin(), v.end());
	long long tc, n;
	cin >> tc;
	while (tc--) {
		cin >> n;
		long long ans = -1;
		bool b = 1;
		for (int i = 0; i < (int) v.size(); i++) {
			if (v[i] > n) {
				b = 0;
				cout << ans << endl;
				break;
			} else {
				ans = v[i];
			}
		}
		if (b) {
			cout << v[v.size() - 1] << endl;
		}
	}
	return 0;
}
