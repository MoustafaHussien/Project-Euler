#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
long long MOD = 1000000007;
#define ZERO 1e-9
using namespace std;
bitset<100000000> b;
vector<int> primes;
void seive() {
	b.set();
	b[0] = b[1] = 0;
	for (long long i = 2; i < 1000010; i++) {
		if (b[i]) {
			primes.push_back(i);
			for (long long j = i * i; j < 5000000; j += i)
				b[(int) j] = 0;
		}
	}
}
vector<int> rotate(int x) {
	vector<int> ret;
	int len = log10(x);
	int t;
	for (int i = 0; i <= len; i++) {
		ret.push_back(x);
		t = x % 10;
		x = x / 10;
		x += t * pow(10, len);
	}
	return ret;
}
bool check(int n) {
	vector<int> x = rotate(n);
	for (int i = 0; i < (int) x.size(); i++) {
		if (!b[x[i]])
			return false;
	}
	return 1;
}
int main(int argc, char **argv) {
	int n;
	cin >> n;
	seive();
	long long sum = 0;
	for (int i = 1; i < n; i++) {
		if (check(i)) {
			sum += i;
		}
	}
	cout << sum << endl;
	return 0;
}
