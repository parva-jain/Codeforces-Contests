#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
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
