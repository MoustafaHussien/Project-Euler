#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define ZERO 1e-9
#define MAX 5000000
#define ull unsigned long long
long long MOD = 1000000007;
using namespace std;
//a = a+b;
void add(string &a, string &b) {
	int l = (int) a.size() - (int) b.size();
	for (int i = -1 * l; i > 0; i--)
		a = "0" + a;
	for (int i = l; i > 0; i--)
		b = "0" + b;
	int carry = 0, t;
	for (int i = a.size() - 1; i > -1; i--) {
		t = a[i] - '0';
		a[i] = (a[i] - '0' + carry + b[i] - '0') % 10 + '0';
		carry = (carry + b[i] - '0' + t) / 10;
	}
	if (carry != 0)
		a = char(carry + '0') + a;
}
unordered_map<int, string> dp;
string fact(int i) {
	if (i == 1 || i == 2)
		return dp[i] = "1";
	if (dp.find(i) != dp.end()) {
		return dp[i];
	}
	string a = fact(i - 1);
	string b = fact(i - 2);
	add(a, b);
	return dp[i] = a;
}

int main(int argc, char **argv) {
	int x[5001];
	memset(x, -1, sizeof(x));
	x[1] = 1;
	int t;
	for (int i = 3; i <= 23922; i++) {
		t = fact(i).size();
		if (x[t] == -1) {
			x[t] = i;
		}
	}
	int tc, n;
	cin >> tc;
	while (tc--) {
		cin >> n;
		cout << x[n] << endl;
	}
	return 0;
}

