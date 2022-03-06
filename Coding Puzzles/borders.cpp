#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, row, col;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> row >> col;

        int shapes = 0;
        for (int j = 0; j < row; j++) {
            string s;
            cin >> s;

            int curr_shapes = 0;
            for (int k = 0; k < col; k++) {
                if(k < (col - 1) && s[k] == '#' && s[k] == s[k + 1]) {
                    curr_shapes++;
                } else curr_shapes = 0;
                
                shapes = max(shapes, curr_shapes);
            }
        }

        cout << shapes << "\n";
    }

    return 0;
}
