#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define char unsigned char

using namespace std;
// mt19937 rnd(239);
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());

typedef long long ll;
typedef long double ld;

int solve() {
    int n,cn;
    cin>>n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
        {
            cn=0;
            while(n%i==0)
            {
                n/=i;
                cn++;
            }
        cout<<i<<"^"<<cn<<'\n';
        }
    }
    if(n!=1)
        cout<<n<<"^"<<1<<'\n';
    return 0;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    tst = 1;
    // cin >> tst;
    while(tst--)
    {
        solve();
    }
    return 0;
}

