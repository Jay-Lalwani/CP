#include <bits/stdc++.h>
using namespace std;

// Common types
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define vvi vector<vector<int>>
#define pb push_back
#define ff first
#define ss second

// Loops
#define FOR(i,a,b) for(int i=(a); i<(b); ++i)
#define F0R(i,n) FOR(i,0,n)
#define ROF(i,a,b) for(int i=(b)-1; i>=(a); --i)

// Array/Vector operations
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

// Constants
template <typename T>
constexpr auto MIN = std::numeric_limits<T>::min();

template <typename T>
constexpr auto MAX = std::numeric_limits<T>::min();

// Other
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define randint(a, b) uniform_int_distribution(a, b)(rng)

void YES() { cout << "YES\n"; }
void NO() { cout << "NO\n"; }

#define ignoreline cin.ignore(numeric_limits<streamsize>::max(), '\n')

void solve() {
    int x, y, k;
    cin >> x >> y >> k;

    ll ans = 0;

    ll a = (x + k - 1) / k;
    ll b = (y + k - 1) / k;

    cout << min(2 * max(a, b), 2 * max(a-1, b) + 1) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    // t = 1;
    while(t--) solve();
    
    return 0;
}