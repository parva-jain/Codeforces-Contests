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

bool isPrime(ll n) {
	if (n == 1) {
		return false;
	}
	for (ll i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
ll oddSum(ll n)
{
	return (n * n);
}

void SieveOfEratosthenes(ll n, vector<ll> &v)
{
	// Create a boolean array "prime[0..n]" and initialize
	// all entries it as true. A value in prime[i] will
	// finally be false if i is Not a prime, else true.
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (ll p = 2; p * p <= n; p++)
	{
		// If prime[p] is not changed, then it is a prime
		if (prime[p] == true)
		{
			// Update all multiples of p greater than or
			// equal to the square of it
			// numbers which are multiple of p and are
			// less than p^2 are already been marked.
			for (ll i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}

	// store all prime numbers
	for (ll p = 2; p <= n; p++)
		if (prime[p])
			v.PB(p);
}
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
		int n, k;
		cin >> n >> k;
		vector<ll>a(n);
		vector<ll>b(n);
		ll mini = 1e9;
		int id = -1;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			ll x = a[i];
			b[i] = 0;
			while (x % k == 0) {
				x /= k;
				b[i]++;
			}
			if (b[i] < mini) {
				mini = b[i];
				id = i;
			}
		}
		ll ans = 0;
		for (int i = 0; i < n; i++) {
			ans += (mini + 1LL) * a[i];
		}
		for (int i = 0; i < id; i++) {
			ans += a[i];
		}
		cout << ans << "\n";
	}
}


