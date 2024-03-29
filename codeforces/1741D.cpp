#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll mod = 1000000007;

#define PI acos(-1)
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

	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	int ans = 0;
	for (int j = 1; v.size() > 1; j *= 2)
	{
		vector<int>temp;
		for (int i = 0; i < v.size(); i += 2)
		{
			if (abs(v[i] - v[i + 1]) != j)
			{
				cout << -1 << '\n';
				return;
			}
			int mn = min(v[i], v[i + 1]);
			if (v[i] > v[i + 1])
				ans++;
			temp.push_back(mn);
		}
		v = temp;
	}
	cout << ans << '\n';
}

int main()
{
	fastio();

	int t = 1;
	cin >> t;

	while (t--)
		solve();

	return 0;
}
