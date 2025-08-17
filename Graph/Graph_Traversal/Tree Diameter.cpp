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


const int N = 2e5+3;
vector<int> adj[N];
vector<int> dis(N);

void dfs(int node, int parent){
    for(auto it : adj[node]){
        if(it != parent){
            dis[it] = dis[node]+1;
            dfs(it,node);
        }
    }
}
void solve() {
    int n;
    cin>>n;
    for(int i=0; i<n-1; i++){
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    dfs(1,-1); // jekono node theke highest deepth ber korte hobe, jate ami diameter er jekono ekta end point peye jai

    int fst = 0; // diameter er jekono ekta end point 
    int mx = 0;
    for(int i=1; i<=n; i++){
        if(mx < dis[i]){
            mx = dis[i];
            fst = i;
        }
    }
    
    dis.assign(N,0);

    dfs(fst,-1); // diameter er ekta end point theke next highest deeth er node ta ber korte hobe and oita e Tree maximaum Diameter

    int diameter = 0;
    for(int i=1; i<=n; i++){
        diameter = max(diameter,dis[i]);
    }
    cout<<diameter<<Endl;
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
