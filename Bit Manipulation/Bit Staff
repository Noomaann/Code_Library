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


/*
    ---------------- Bit Manipulation Utility Functions ----------------
*/

// Checks if k-th bit of x is set (1) or not (0)
int check_kth_bit(int x, int k) {
    // Right shift x by k positions and check the last bit
    return (x >> k) & 1;
}

// Prints positions of all set bits in x
void print_on_bits(int x) {
    cout << "Set bit positions: ";
    for (int k = 0; k < 32; k++) {
        // Check each bit position using check_kth_bit function
        if (check_kth_bit(x, k)) {
            cout << k << ' '; // print the position if bit is 1
        }
    }
    cout << '\n';
}

// Counts the number of set bits (1's) in x
int count_on_bits(int x) {
    int cnt = 0;           // counter for set bits
    for (int k = 0; k < 32; k++) {
        if (check_kth_bit(x, k)) cnt++; // increment counter if bit is 1
    }
    return cnt;
}

// Checks if x is even
bool is_even(int x) {
    // If the last bit is 1 → odd, otherwise even
    return !(x & 1);
}

// Sets k-th bit of x to 1
int set_kth_bit(int x, int k) {
    // Use bitwise OR to set the k-th bit
    return x | (1 << k);
}

// Unsets k-th bit of x (sets to 0)
int unset_kth_bit(int x, int k) {
    // Use bitwise AND with NOT mask to unset the k-th bit
    return x & (~(1 << k));
}

// Toggles k-th bit of x (1→0 or 0→1)
int toggle_kth_bit(int x, int k) {
    // Use bitwise XOR to flip the k-th bit
    return x ^ (1 << k);
}

// Checks if x is a power of 2
bool check_power_of_2(int x) {
    // A number is power of 2 if it has exactly 1 set bit
    return count_on_bits(x) == 1;
}

void solve() {
    // ------------------ Basic Bitwise Operators ------------------
    int a = 12, b = 25;

    cout << "a = " << a << " (binary 1100), b = " << b << " (binary 11001)\n";
    cout << "a & b = " << (a & b) << " (AND operation)\n";   // AND of binary
    cout << "a | b = " << (a | b) << " (OR operation)\n";    // OR of binary
    cout << "a ^ b = " << (a ^ b) << " (XOR operation)\n";   // XOR of binary
    cout << "~a = " << (~a) << " (NOT operation)\n";         // NOT operation

    // ------------------ Bit Shifts ------------------
    int left_shift = 3 << 2;   // Left shift: multiply by 2^2
    int right_shift = 12 >> 2; // Right shift: divide by 2^2
    cout << "3 << 2 = " << left_shift << " (Left Shift)\n";
    cout << "12 >> 2 = " << right_shift << " (Right Shift)\n";

    // ------------------ Difference between int and long long shifts ------------------
    int x = 31;
    long long res1 = 1 << x;   // int overflow, result incorrect
    long long res2 = 1LL << x; // safe in long long
    cout << "1 << 31 (int overflow) = " << res1 << "\n";
    cout << "1LL << 31 (long long) = " << res2 << "\n\n";

    // ------------------ Using utility functions ------------------
    x = 11; // binary: 1011

    cout << "x = " << x << " (binary 1011)\n";
    cout << "2nd bit of x: " << check_kth_bit(x, 2) << '\n';  // check 2nd bit
    print_on_bits(x);                                            // print all set bits
    cout << "Number of set bits: " << count_on_bits(x) << '\n'; // count set bits
    cout << "Is x even? " << is_even(x) << '\n';                // check even/odd
    cout << "x after setting 2nd bit: " << set_kth_bit(x, 2) << '\n';       // set bit
    cout << "15 after unsetting 2nd bit: " << unset_kth_bit(15, 2) << '\n'; // unset bit
    cout << "x after toggling 3rd bit: " << toggle_kth_bit(x, 3) << '\n';   // toggle bit
    cout << "Is 8 a power of 2? " << check_power_of_2(8) << '\n';            // power of 2
}


int32_t main() {
    fastio;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
