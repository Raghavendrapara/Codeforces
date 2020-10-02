/*input
2
3 3
2 7 4
5 6
9 10 4 7 2
*/
#include <bits/stdc++.h>
using namespace std;
#define UB upper_bound
#define LB lower_bound
#define BS binary_search
#define MP make_pair
#define EB emplace_back
#define endl "\n"
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define F first
#define S second
#define ALL(a) (a).begin(), (a).end()
#define IOS                  \
	ios::sync_with_stdio(0); \
	cin.tie(0);              \
	cout.tie(0)
#define int long long

typedef long long int64;
typedef vector<int> VI64;
typedef vector<pair<int, int>> VII64;
typedef vector<string> VS;
typedef vector<vector<int>> VVI;

void fileIO()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main()
{
	IOS;
	//fileIO();
	int T = 1;
	cin >> T;
	int pr = 1;
	while (T--)
	{
		int n, k, i;
		cin >> n >> k;
		VI64 v(n);
		for (auto &x : v)
		{
			cin >> x;
		}
		VII64 vv(n);
		for (i = 0; i < n; i++)
		{
			long double val = v[i];
			vv[i].F = ceil(val / k);
			vv[i].S = i;
		}
		sort(ALL(vv));
		cout << "Case #" << pr << ": ";
		for (auto x : vv)
			cout << x.S + 1 << " ";
		cout << endl;
		pr++;
	}

	return 0;
}