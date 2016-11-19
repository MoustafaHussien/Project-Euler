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
	for (long long i = 2; i < 150000; i++) {
		if (p[i]) {
			pr.push_back((int) i);
			for (long long j = i * i; j < 150000; j += i) {
				p[(int) j] = 0;
			}
		}
	}
}
int main(int argc, char **argv) {
	seive();
	int tc, n;
	cin >> tc;
	while (tc--) {
		cin >> n;
		cout << pr[n - 1] << endl;
	}
	return 0;
}
