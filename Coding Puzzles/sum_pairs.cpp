#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    map<int, int> m;
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;

        // Traverse through all elements
        for (int k = 0; k < N; k++) {
    
            // Search if a pair can be formed with
            int rem = N - k;
            if (m.find(rem) != m.end()) {
               /* if (isSplitable(N, rem, k)) {
                    cout << "1\n";
                    found = true;
                } */ 

                int count = m[rem];
                for (int j = 0; j < count; j++) { 
                        cout << "(" << rem << ", " << k << ")" << endl;
                    }
            }
            m[k]++;
        }
    }

    return 0;
}
