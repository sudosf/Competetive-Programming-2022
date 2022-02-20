#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    int ans = 1;

    if (K < N) ans = (N + 2*K)/(2*K + 1);
        
    cout << ans << "\n";

    return 0;
}
