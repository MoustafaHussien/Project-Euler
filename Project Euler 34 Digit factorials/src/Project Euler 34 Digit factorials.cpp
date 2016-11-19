#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
long long MOD = 1000000007;
#define ZERO 1e-9
using namespace std;
long long f[] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880 };
bool check(int n) {
	int x = n;
	long long sum = 0;
	while (x != 0) {
		sum += f[x % 10];
		x = x / 10;
	}
	return (sum % n) == 0;
}
int main(int argc, char **argv) {
	int n;
	cin >> n;
	long long sum = 0;
	for (int i = 10; i < n; i++) {
		if (check(i)) {
			sum += i;
		}
	}
	cout << sum << endl;
	return 0;
}
