#include <bits/stdc++.h>

using namespace std;

// Header files, namespaces,
// macros as defined above
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
  
#define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update>

#define ll long long
#define ld long double

ll calcCost( ll N, string s) {

    ll moves = 0;
    ordered_set indexes;
    vector< pair<char, ll> > char_index;

    for (ll i = 0; i < N; i++) {
        char_index.push_back( {s[i], i} );
        indexes.insert(i);
    }

    sort(char_index.begin(), char_index.end());

    for (auto char_pair : char_index) { 
        auto idx = char_pair.second;
        moves += indexes.order_of_key(idx + 1);
        indexes.erase(idx);
    }

    return moves;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T, N;
    string s;
    cin >> T;

    for (ll k = 0; k < T; k++) {
        cin >> N >> s;
        cout << calcCost(N, s) << "\n";
    }

    return 0;
}
