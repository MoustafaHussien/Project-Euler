#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define ZERO 1e-9
#define MAX 5000000
long long MOD = 1000000007;
using namespace std;
bitset<2000000> p;
vector<int> v;
void seive() {
	p.set();
	p[0] = p[1] = 0;
	for (long long i = 2; i < 2000000; i++)
		if (p[(int) i] == 1)
			for (long long j = i * i; j < 2000000; j = j + i)
				p[(int) j] = 0;

	for (int i = 2; i <= 1000; i++)
		if (p[i])
			v.push_back(i);
}
int n;
int check(int a, int b) {
	int ret = 0;
	long long t;
	for (int i = 0; i <= n; i++) {
		t = (i * i) + (a * i) + b;
		if (t > 0 && p[t])
			ret++;
		else
			return ret;
	}
	return ret;
}
void debug() {
	int d = 0;
	for (int i = 0; i <= 42; i++) {
		int x = i * i - (i) + 41;
		if (p[x]) {
			d++;
			cout << i << " " << x << endl;
		}
	}
	cout << d << endl;
}
int main(int argc, char **argv) {
	seive();
	cin >> n;
	int t, x, y, maxi = -1;
	for (int a = -1 * n; a <= n; a++) {
		for (int b = -1 * n; b <= n; b++) {
			t = check(a, b);
			if (t > maxi) {
				maxi = t;
				x = a;
				y = b;
			}
		}
	}
	cout << x << " " << y << endl;
	return 0;
}


