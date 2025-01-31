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
constexpr auto MAX = std::numeric_limits<T>::max();

// Other
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define randint(a, b) uniform_int_distribution(a, b)(rng)

void YES() { cout << "YES\n"; }
void NO() { cout << "NO\n"; }

#define ignoreline cin.ignore(numeric_limits<streamsize>::max(), '\n')

void solve() {
    // number of triangles
    int n;
    cin >> n;

    int points[n+1][2] = {0};

    for (int i=0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points[x][y] = 1;
    }

    ll ans = 0;
    for (int i=0; i <= n; i++) {
        if (points[i][0] && points[i][1]) 
            ans += n - 2;
        
        if (i >= 1 && i < n ) {
            if (points[i][0])
                ans += (points[i+1][1] && points[i-1][1]);
            
            if (points[i][1]) 
                ans += (points[i+1][0] && points[i-1][0]);
        }
    }

    cout << ans << '\n';

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