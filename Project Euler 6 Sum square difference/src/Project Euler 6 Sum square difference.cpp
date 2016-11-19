#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define MOD 1000000007
#define ZERO 1e-9
using namespace std;
long long sum(int a) {
	return a * (a + 1) * 0.5;
}
long long solve(int n) {
	long long ans = 0;
	for (int i = 1; i < n; i++)
		ans += i * (sum(n) - sum(i));
	return ans * 2;
}
int main(int argc, char **argv) {
	int tc, n;
	cin >> tc;
	while (tc--) {
		cin >> n;
		cout << solve(n) << endl;
	}
	return 0;
}
