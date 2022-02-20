#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// global array for storing fib values
ll term[1000];

ll calcFib(ll n) {
    
    if (n <= 2) return 1;
    return calcFib(n-1) + calcFib(n-2);
}

ll memoCalcFib(ll n) { 

    if (n <= 2) return 1;
    if (term[n] != 0) return term[n];
   
    else {
        term[n] = memoCalcFib(n - 1) + memoCalcFib(n - 2);
        return term[n];
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << calcFib(3) << "\n";
    cout << calcFib(4) << "\n";
    cout << calcFib(5) << "\n";
    cout << calcFib(7) << "\n";
    cout << calcFib(20) << "\n";
    cout << memoCalcFib(80) << "\n";

    /* for (auto x : term) {
        if (x == 0) continue;
        cout << x << "\n";
    } */

    return 0;
}
