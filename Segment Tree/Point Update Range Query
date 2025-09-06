/**
 *    author: Noman
**/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll ;
typedef vector<int> vi;
typedef vector<ll> vl;


#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);


#define MOD 1000000007
#define PI 3.1415926535897932384626

#define get_set_bits(a) (__builtin_popcount(a))
#define get_set_bitsll(a) (__builtin_popcountll(a))
#define get_trail_zero(a) (__builtin_ctz(a))
#define get_lead_zero(a) (__builtin_clz(a))
#define get_parity(a) (__builtin_parity(a))


#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define Endl "\n"

#define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];

#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


struct segmenttree // age segmentree er structure banate hobe
{
    ll n;
    vector<ll> st;  // segmentree er array

    // Segment Tree init
    void init(ll _n) {
        this -> n = _n;
        st.resize(4 * n, 0); // total structure a 4n size nilei safe
    }


    ll comb(ll a, ll b) {
        return a + b; // eikhanei change korle sum/max/min/gcd pawa jabe
    }

    // Segment Tree build
    void build(ll start, ll end, ll node, vector<ll>&v) {
        if (start ==  end) {
            st[node] = v[start]; // leaf node a array er value rakhbo
            return;
        }

        ll mid = (start + end) / 2;
        build(start, mid, 2 * node + 1, v);       // left child build korbo
        build(mid + 1, end, 2 * node + 2, v);     // right child build korbo
        st[node] = comb(st[2 * node + 1], st[2 * node + 2]); // parent node update korte hobe
    }

    // Segment Tree query (range query)
    ll query(ll start, ll end, ll l, ll r, ll node) {
        if (start > r || end < l) {  // range overlap nei
            return 0;
        }
        if (start >= l && end <= r) { // covered
            return st[node];
        }

        ll mid = (start + end) / 2;

        ll q1 = query(start, mid, l, r, 2 * node + 1);      // left query korbo
        ll q2 = query(mid + 1, end, l, r, 2 * node + 2);    // right query korbo

        return comb(q1 , q2); // combine kore return korbo
    }

    // Segment Tree update
    void update(ll start, ll end, ll node, ll index, ll value) {
        if (start == end) {        // leaf node a chole ashle
            st[node] = value;      // value update kore dite hobe
            return;
        }
        ll mid = (start + end) / 2;
        if (index <= mid) update(start, mid, 2 * node + 1, index, value); // left child update korte
        else update(mid + 1, end, 2 * node + 2, index, value);            // right child update korte

        st[node] = comb(st[node * 2 + 1], st[node * 2 + 2]); // parent node update korte hobe
        return;
    }


    void build(vector<ll>& v) { // parameter pass
        build(0, n - 1, 0, v);
    }
    ll query(ll l, ll r) { // parameter pass
        return query(0, n - 1, l, r, 0);
    }
    void update(ll x, ll y) { // parameter pass
        update(0, n - 1, 0, x, y);
    }
};


void solve() {
    ll n, q;
    cin >> n >> q;
    vl v(n);
    forin(v, n);

    segmenttree st;
    st.init(n);         // segment tree init
    st.build(v);        // segment tree build

    while (q--) {
        int a;
        cin >> a;
        if (a == 1) {       // update query
            int i, v;
            cin >> i >> v;
            st.update(i, v);
        }
        else {              // range query
            ll l, r;
            cin >> l >> r;
            cout << st.query(l, r - 1) << Endl; // sum of [l, r-1]
        }
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
