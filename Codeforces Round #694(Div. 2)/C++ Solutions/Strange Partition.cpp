// you CANNOT GIVE UP just because things get hard;

//Amaaan Khiljiii iet_davv;

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef std::vector<ll> vi;
typedef pair<ll, ll> pi;
#define ull unsigned long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define boht_tez ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define MAXN ll(1e5 + 123)
#define MAXINP ll (1e3 + 123)
#define MAX_SIZE 100000000
#define    DOD(i)  cout<<setprecision(i)<<fixed<<

void solve() {
	int n;
	cin >> n;
	vector<ll>a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	vector<ll>b(n);
	ll maxi = 0;
	for (int i = n - 1; i >= 0; i--) {
		ll total = 0;
		total += a[i];
		if (i + a[i] < n) {
			total += a[i + a[i]];
		}
		a[i] = total;
		maxi = max(maxi, a[i]);
	}
	cout << maxi << "\n";
}

int main()
{

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input1.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output1.txt", "w", stdout);
#endif
	boht_tez;
	ll t;
	cin >> t;
	while (t--) {
		ll n, x;
		cin >> n >> x;
		ll a[n];
		ll sum1 = 0, sum2 = 0;
		for (ll i = 0; i < n; i++) {
			cin >> a[i];
			sum1 = sum1 + a[i];
			if (a[i] % x == 0) {
				sum2 += (a[i] / x);
			}
			else {
				sum2 += ((a[i] / x) + 1);
			}
		}
		sum1 = sum1 / x;
		cout << sum1 << " " << sum2 << "\n";

	}
}


