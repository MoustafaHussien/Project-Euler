#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
long long MOD = 1000000007;
#define ZERO 1e-9
using namespace std;
int a[] = { 1, 2, 5, 10, 20, 50, 100, 200 };
long long dp[100001];
void solve() {
	dp[0] = 1;
	for (int i = 0; i < 8; i++) {
		for (int j = a[i]; j < 100001; j++) {
			dp[j] += dp[j - a[i]];
			dp[j] %= MOD;
		}
	}
}
int main(int argc, char **argv) {
	int tc, n;
	solve();
	cin >> tc;
	while (tc--) {
		cin >> n;
		cout << dp[n] << endl;
	}
	return 0;
}
