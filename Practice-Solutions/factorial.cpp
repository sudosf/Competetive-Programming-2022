#include <bits/stdc++.h>

using namespace std;

int factorial (int n) {
    if (n == 0 || n == 1) return 1;

    return n * factorial(n-1);
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