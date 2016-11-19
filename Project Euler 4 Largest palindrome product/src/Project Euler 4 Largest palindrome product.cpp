#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define MOD 1000000007
#define ZERO 1e-9
using namespace std;
vector<int> v;
bool check(int i) {
	string a = to_string(i);
	if (a[0] == a[5] && a[1] == a[4] && a[2] == a[3])
		return true;
	return false;
}
void pre() {
	for (int i = 101; i < 1000; i++) {
		for (int j = i + 1; j < 1000; j++) {
			if (i * j < 1000000 && i * j >= 101101 && check(i * j)) {
				v.push_back(i * j);
			}
		}
	}
	sort(v.begin(), v.end());
}
int main(int argc, char **argv) {
	pre();
	int tc, n;
	cin >> tc;
	while (tc--) {
		cin >> n;
		int ans = 0;
		for (int i = 0; i < (int) v.size(); i++) {
			if (v[i] > n)
				break;
			ans = v[i];
		}
		cout << ans << endl;
	}
	return 0;
}
