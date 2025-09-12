/**
*   author: Noman
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef vector<int> vi;
typedef vector<ll> vl;
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
// define values.
#define MOD 1000000007
#define PI 3.1415926535897932384626
/* Bit-Stuff */
#define get_set_bits(a) (__builtin_popcount(a))
#define get_set_bitsll(a) ( __builtin_popcountll(a))
#define get_trail_zero(a) (__builtin_ctz(a))
#define get_lead_zero(a) (__builtin_clz(a))
#define get_parity(a) (__builtin_parity(a))
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define Endl "\n"
// loops
#define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



void solve() {
    int n;
    cin >> n;
    for (int mask = 0; mask < (1 << n); mask++) { // 0 theke 2^n-1 porjonto loop chalabo
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) { // jodi bit set thake tahole count korbo oi bit k 
                cout << i << " ";
            }
        }
        cout << Endl;
    }
}



int32_t main() {
    fastio;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
