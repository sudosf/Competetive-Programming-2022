#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int XORSplit(ll N) {

    int count = 0;
    while(N > 0) {
        count += N%2;

        if (count > 1) return 1;
        
        N /= 2;
    }

   return 0;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T, N;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N;
        cout << XORSplit(N) << "\n";
    }

    return 0;
}
