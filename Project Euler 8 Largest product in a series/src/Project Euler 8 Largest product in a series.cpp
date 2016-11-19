#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define MOD 1000000007
#define ZERO 1e-9
using namespace std;
unsigned long long solve(int k, string s) {
	unsigned long long t, ans = 0;
	for (int i = 0; i < (int) s.size(); i++) {
		if (i + k <= (int) s.size()) {
			t = 1;
			for (int j = i; j < k + i; j++) {
				t = t * (s[j] - '0');
			}
			ans = max(ans, t);
		}
	}
	return ans;
}
int main(int argc, char **argv) {
	int n, tc, k;
	cin >> tc;
	string s;
	while (tc--) {
		cin >> n >> k;
		cin >> s;
		cout << solve(k, s) << endl;
	}
	return 0;
}
