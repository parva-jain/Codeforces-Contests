//ॐ
#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <set>
#include <string>
#include <stack>
#include <queue>
#include <math.h>

#define ll long long
#define pb push_back
using namespace std;

int main() {

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int ans;
  if(n%2==0){
    if((n/2)%2==0) ans = 4*((n/4+1)*(n/4+1)-(n/4+1))+1;
    else ans = 4*(n/4+1)*(n/4+1);
  }
  else ans = 4*(2*((n/2)/2+1)*((n/2+1)/2+1)-(n/4+1));
  cout << ans;
  return 0;
}
