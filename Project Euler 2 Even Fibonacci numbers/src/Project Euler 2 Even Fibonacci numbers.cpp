#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define MOD 1000000007
#define ZERO 1e-9
using namespace std;
long long a[90];
long long fib(int i) {
	if (i < 3)
		return a[i] = i;
	if (a[i] != -1)
		return a[i];
	return a[i] = fib(i - 1) + fib(i - 2);
}
int main(int argc, char **argv) {
	memset(a, -1, sizeof(a));
	fib(84);
	long long tc, n;
	cin >> tc;
	while (tc--) {
		cin >> n;
		int i = 1;
		long long ans = 0;
		while (a[i] <= n) {
			if (a[i] % 2 == 0)
				ans += a[i];
			i++;
		}
		cout << ans << endl;
	}
	return 0;
}
