#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
long long MOD = 1000000007;
#define ZERO 1e-9
using namespace std;
unordered_set<long long> s;
vector<long long> v;
bool isTriangle(long long n) {
//	tn = n(n + 1) / 2;
	double x = n * 1.0;
	x = 0.5 * (-1 + sqrt(1 + (8 * x)));
	n = x;
	return fabs(n - x) < ZERO;
}
bool isHexagonal(long long n) {
//Hn = n(2*n-1);
	double x = n * 1.0;
	x = 0.25 * (1 + sqrt(1 + (8 * x)));
	n = x;
	return fabs(n - x) < ZERO;
}
void pre() {
	double x;
	for (long long i = 1; i <= 8164966; i++) {
		x = i;
		x = x * 0.5 * ((3.0 * x) - 1.0);
		v.push_back((long long) x);
	}
}
int main(int argc, char **argv) {
	pre();
	long long n, a, b;
	cin >> n >> a >> b;
	if (a == 5 && b == 6)
		for (int i = 0; i < (int) v.size(); i++) {
			if (v[i] >= n)
				return 0;
			if (isHexagonal(v[i]))
				cout << v[i] << endl;
		}
	if (a == 3 && b == 5)
		for (int i = 0; i < (int) v.size(); i++) {
			if (v[i] >= n)
				return 0;
			if (isTriangle(v[i]))
				cout << v[i] << endl;
		}
	return 0;
}
