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

	std::map<char, int> mp;
	set<char> right, left;

	for (int i = 0; i < n; i++) {
		mp[st[i]]++;
		right.insert(st[i]);
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		left.insert(st[i]);
		mp[st[i]]--;

		if (mp[st[i]] == 0) right.erase(st[i]);

		int res = left.size() + right.size();
		ans = max(ans, res);
	}

	cout << ans << '\n';
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