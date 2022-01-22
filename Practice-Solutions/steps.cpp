#include <bits/stdc++.h>

using namespace std;

int minSteps(vector<int> ar1, vector<int> ar2, int n) {

    int min = *min_element(ar1.begin(), ar1.end());
    int steps = 0;

    for (int i = 0; i < n; i++) {

        while (ar1[i] > min) {
           ar1[i] -= ar2[i]; 
           steps++;

           if (ar1[i] < min) min = ar1[i];
           if (min < 0) return -1;
        }
    }

    // convert array to set
    set<int> s(ar1.begin(), ar1.end());

    if (s.size() == 1) 
        return steps;
    
    return -1;
}

int main() {

	// optimize for faster reading of input
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> ar1, ar2;

    // read array 1 elements
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        ar1.push_back(a);
    }

    // read array 2 elements
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;

        ar2.push_back(b);
    }

    cout << minSteps(ar1, ar2, n);

    return 0;
}