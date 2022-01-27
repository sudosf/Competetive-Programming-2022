#include <bits/stdc++.h>

using namespace std;

// global array for memoization
int term[1000];

int gridTraveler(int m, int n) {

    if (m == 1 && n == 1) return 1;
    if (m == 0 || n == 0) return 0;

    return gridTraveler(m - 1, n) + gridTraveler(m, n - 1);
}

int main () {

	// optimize for faster reading of input
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << gridTraveler(3, 2) << "\n";
    cout << gridTraveler(18, 18) << "\n";

    return 0;
}