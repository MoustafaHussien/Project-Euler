#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define MOD 1000000007
#define ZERO 1e-9
using namespace std;
vector<int> pr;
bitset<10010010> p;
long long sum[79000];
void seive() {
	p.set();
	for (long long i = 2; i < 1001000; i++) {
		if (p[i]) {
			pr.push_back((int) i);
			for (long long j = i * i; j < 1001000; j += i) {
				p[(int) j] = 0;
			}
		}
	}
	sum[0] = pr[0];
	for (int i = 1; i < (int) pr.size(); i++)
		sum[i] = sum[i - 1] + pr[i];
}
int main(int argc, char **argv) {
	seive();
	std::vector<int>::iterator low;
	int tc, n;
	cin >> tc;
	while (tc--) {
		cin >> n;
		if (n <= 1)
			cout << 0 << endl;
		else {
			low = lower_bound(pr.begin(), pr.end(), n);
			if (p[n])
				cout << sum[low - pr.begin()] << endl;
			else
				cout << sum[low - pr.begin() - 1] << endl;
		}
	}
	return 0;
}
