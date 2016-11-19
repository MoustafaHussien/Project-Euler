#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define MOD 1000000007
#define ZERO 1e-9
using namespace std;
vector<int> pr;
bitset<10000010> p;
void seive() {
	p.set();
	for (long long i = 2; i < 100000; i++) {
		if (p[i]) {
			pr.push_back((int) i);
			for (long long j = i * i; j < 100000; j += i) {
				p[(int) j] = 0;
			}
		}
	}
}
int primeFactors(long long N) {
	map<int, int> factors;
	long long PF_idx = 0, PF = pr[PF_idx];
	while (PF * PF <= N) {
		while (N % PF == 0) {
			N /= PF;
			factors[PF]++;
		}
		PF = pr[++PF_idx];
	}
	if (N != 1)
		factors[N]++;
	int ret = 1;
	map<int, int>::iterator it;
	for (it = factors.begin(); it != factors.end(); it++) {
		ret = ret * (it->second + 1);
	}
	return ret;
}
int main(int argc, char **argv) {
	seive();
	int tc, n;
	cin >> tc;
	while (tc--) {
		cin >> n;
		long long pre = 1;
		int i = 2;
		while (primeFactors(pre) <= n) {
			pre += i;
			i++;
		}
		cout << pre << endl;
	}
	return 0;
}
