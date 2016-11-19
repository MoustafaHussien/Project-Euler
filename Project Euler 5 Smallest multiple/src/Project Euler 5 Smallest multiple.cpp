#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define MOD 1000000007
#define ZERO 1e-9
using namespace std;
long long gcd(long long a, long long b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
long long lcm(long long a, long long b) {
	return (a * b) / gcd(a, b);
}
long long a[45];
int main(int argc, char **argv) {
	a[1] = 1;
	for (int i = 2; i <= 41; i++) {
		a[i] = lcm(a[i - 1], i);
	}
	int tc, n;
	cin >> tc;
	while (tc--) {
		cin >> n;
		cout << a[n] << endl;
	}
	return 0;
}
