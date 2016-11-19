#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
long long MOD = 1000000007;
#define ZERO 1e-9
using namespace std;
bitset<1000000> p;
void seive() {
	p.set();
	p[0] = p[1] = 0;
	for (long long i = 2; i < 1000000; i++) {
		if (p[i])
			for (long long j = i * i; j < 1000000; j += i)
				p[j] = 0;
	}
}

long long solve(int n) {
	long long ret = 0;
	for (int i = 1; i <= sqrt(n * 0.5) + 1; i++) {
		if (n - (2 * i * i) > 0 && p[(int) n - (2 * i * i)]) {
			ret++;
		}
	}
	return ret;
}
int main(int argc, char **argv) {
	int tc, n;
	seive();
	cin >> tc;
	while (tc--) {
		cin >> n;
		cout << solve(n) << endl;
	}
	return 0;
}
