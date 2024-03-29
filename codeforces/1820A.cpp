#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define INF 1e18
#define mod 1000000007

void fastio()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void solve()
{
	string st;
	cin >> st;

	if (st == "^") {
		cout << 1 << '\n';
		return;
	}

	int ans = 0;
	for (int i = 1; i < st.size(); i++) {
		if (st[i] == '_' and st[i - 1] == '_')
			ans++;
	}
	if (st[0] == '_')
		ans++;
	if (st[st.size() - 1] == '_')
		ans++;
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