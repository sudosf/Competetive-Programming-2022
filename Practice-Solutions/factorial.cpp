#include <bits/stdc++.h>

using namespace std;

// global array for memoization
int term[1000];

int factorial (int n) {
    if (n == 0 || n == 1) return 1;
    if (term[n] != 0) return term[n];

    else {
        term[n] = n * factorial(n-1);
        return term[n];
    }
}

int main () {

	// optimize for faster reading of input
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << factorial(n) << "\n";

    return 0;
}