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
     
      int t;
      cin >> t;
      while(t--){
        int n;
        cin >> n;
        string r, b;
        cin >> r;
        cin >> b;
        int red=0;
        int blue=0;
        for(int i=0; i<n; i++){
          if((int)r[i] > (int)b[i]) red++;
          if((int)r[i] < (int)b[i]) blue++;
        }
        if(red>blue) cout << "RED\n";
        else if(red<blue) cout << "BLUE\n";
        else cout << "EQUAL\n";
      }
      return 0;
    }
