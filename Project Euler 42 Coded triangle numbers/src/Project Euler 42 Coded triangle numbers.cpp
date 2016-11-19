#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
long long MOD = 1000000007;
#define ZERO 1e-9
using namespace std;
int main(int argc, char **argv) {
	//n^2+n-2*tn=0;
	int tc;
	double tn, a;
	long long x;
	cin >> tc;
	while (tc--) {
		cin >> tn;
		a = sqrt((1) + (8 * tn)) - 1.0;
		a = a * 0.5;
		x = a;
		if (fabs(x - a) <= ZERO) {
			cout << x << endl;
		} else {
			cout << "-1\n";
		}
	}
	return 0;
}
