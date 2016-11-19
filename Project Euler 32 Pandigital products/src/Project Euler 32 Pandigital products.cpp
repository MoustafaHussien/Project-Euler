#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
long long MOD = 1000000007;
#define ZERO 1e-9
using namespace std;
int main(int argc, char **argv) {
	int n;
	cin >> n;
	int len = pow(10, n * 0.5);
	bitset<1000000> b(0);
	string s = "";
	for (int i = 1; i <= n; i++)
		s += to_string(i);
	for (int i = 1; i <= len; i++) {
		for (int j = 1; j <= sqrt(i); j++) {
			if (i % j == 0) {
				string a = to_string(i) + to_string(j) + to_string(i / j);
				if ((int) a.size() == n) {
					sort(a.begin(), a.end());
					if (a.compare(s) == 0) {
						b[i] = 1;
					}
				}
			}
		}
	}
	long long ans = 0;
	for (int i = 1; i <= len; i++)
		if (b[i])
			ans += i;
	cout << ans << endl;
	return 0;
}
