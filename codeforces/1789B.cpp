#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define INF 1e18

void fastio()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void solve()
{
	int n;
	cin >> n;
	string st;
	cin >> st;

	string temp = st;
	reverse(temp.begin(), temp.end());

	if (temp == st) {
		cout << "Yes\n";
		return;
	}

	int i = 0, j = n - 1;
	vector<int>v;
	while (i < j) {
		if (st[i] != st[j])
			v.push_back(i);

		i++;
		j--;
	}

	for (int i = 1; i < v.size(); i++) {
		if (v[i] - v[i - 1] > 1) {
			cout << "No\n";
			return;
		}
	}
	cout << "Yes\n";
}

int main()
{
	fastio();

	int t = 1;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		// cout << "Case " << i << ": ";
		solve();
	}

	return 0;
}