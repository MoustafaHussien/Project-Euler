#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define MOD 1000000007
#define ZERO 1e-9
using namespace std;
short dp[10000000];
int ans[5000010];
short solve(long long n) {
	if (n == 1)
		return 1;
	if (n < 10000000 && dp[n] != -1)
		return dp[n];
	short ret;
	if (n % 2 == 0)
		ret = 1 + solve(n / 2);
	else
		ret = 1 + solve((n * 3) + 1);
	if (n < 10000000)
		dp[n] = ret;
	return ret;
}
int main(int argc, char **argv) {
	memset(dp, -1, sizeof(dp));
	ans[1] = 1;
	int maxi = 1, t;
	for (int i = 2; i <= 5000000; i++) {
		t = solve(i);
		if (t >= maxi) {
			ans[i] = i;
			maxi = t;
		} else {
			ans[i] = ans[i - 1];
		}
	}
	int tc, n;
	cin >> tc;
	while (tc--) {
		cin >> n;
		cout << ans[n] << endl;
	}
}
