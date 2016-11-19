#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define MOD 1000000007
#define ZERO 1e-9
using namespace std;
long long dp[501][501];
int n, m;
long long solve(int row, int col) {
	if (row == n || col == m)
		return 1;
	if (dp[row][col] != -1)
		return dp[row][col];
	return dp[row][col] =
			(solve(row + 1, col) % MOD + solve(row, col + 1) % MOD) % MOD;
}
int main(int argc, char **argv) {
	int tc;
	cin >> tc;
	while (tc--) {
		cin >> n >> m;
		memset(dp, -1, sizeof(dp));
		cout << solve(0, 0) << endl;
	}
	return 0;
}
