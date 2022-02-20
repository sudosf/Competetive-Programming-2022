#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;

        vector<int> train;
        for (int i = 0; i < 4; i++) {
            int cabin;
            cin >> cabin;

            train.push_back(cabin);
        }

        sort(train.begin(), train.end());
       
        int minTime = 3 + N/train[0] + bool(N % train[0]);
        
        cout << minTime << "\n";
    }

    return 0;
}
