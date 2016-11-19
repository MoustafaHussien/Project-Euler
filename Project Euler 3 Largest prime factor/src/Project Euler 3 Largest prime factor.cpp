#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define MOD 1000000007
#define ZERO 1e-9
using namespace std;
bitset<1000010> p;
vector<int> primes;
void sieve() {
	p.set();
	p[0] = p[1] = 0;
	for (long long i = 2; i <= 1000010; i++)
		if (p[i]) {
			primes.push_back((int) i);
			for (long long j = i * i; j <= 1000010; j += i)
				p[j] = 0;
		}
}
long long solve(long long N) {
	long long PF_idx = 0, pf = primes[PF_idx], ret = 0;
	while (pf * pf <= N) {
		while (N % pf == 0) {
			N /= pf;
			ret = pf;
		}
		pf = primes[++PF_idx];
	}
	if (N != 1)
		ret = max(ret, N);
	return ret;
}
int main(int argc, char **argv) {
	sieve();
	int tc;
	cin >> tc;
	while (tc--) {
		long long n;
		cin >> n;
		cout << solve(n) << endl;
	}
}
