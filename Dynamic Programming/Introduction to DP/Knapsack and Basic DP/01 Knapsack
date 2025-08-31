/**
 *    author: Noman
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


const int N = 100 + 3;
const int W = 1e5 + 3;
vector<vector<ll>>dp;

ll knap(vector<ll> &v, vector<ll> &wt, int n, int w) {

    if (n == 0 || w == 0) return 0; // item nei / capacity nei = 0

    if (dp[n][w] != -1) return dp[n][w]; // jodi age calculate kora thakte tahole ager value e use koro
    
    if (wt[n - 1] <= w) { // jodi n-1 tomo item er weight capacity er vitore thake 
        // option 1: item ta nei + value add kori
        // option 2: item ta nibo na
        // option 1 and 2 er vitore jeita maximaum sheta nibo
        return dp[n][w] = max(v[n - 1] + knap(v, wt, n - 1, w - wt[n - 1]), knap(v, wt, n - 1, w));
    }
    else return dp[n][w] = knap(v, wt, n - 1, w); // item ta nibo na 
}
void solve() {
    dp.assign(N, vector<ll>(W, -1));
    int n, w;
    cin >> n >> w;
    vl v(n), wt(n);
    for (int i = 0; i < n; i++) {
        cin >> wt[i] >> v[i];
    }
    cout << knap(v, wt, n, w);
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
