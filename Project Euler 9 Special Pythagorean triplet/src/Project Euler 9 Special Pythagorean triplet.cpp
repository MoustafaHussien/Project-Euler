#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define MOD 1000000007
#define ZERO 1e-9
using namespace std;
long long a[3002];
void solve() {
	memset(a, -1, sizeof(a));
	double c;
	long long t;
	for (long long i = 1; i <= 1500; i++) {
		for (long long j = i + 1; j <= 1500; j++) {
			c = sqrt((i * i) + (j * j));
			t = c;
			if ((c - t) < 0.0000001 && (i + j + t) <= 3000) {
				a[i + j + t] = max(a[i + j + t], i * j * t);
			}
		}
	}
}
int main(int argc, char **argv) {
	solve();
	int tc, n;
	cin >> tc;
	while (tc--) {
		cin >> n;
		cout << a[n] << endl;
	}
	return 0;
}
