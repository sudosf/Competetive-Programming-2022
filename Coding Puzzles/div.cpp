#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, d;
    cin >> N;
    
    vector<long> data;
    for(auto i = 0; i < N; i++){
        cin >> d;
        data.push_back(d);
    }

    if ( data[N - 1] % 10 == 0) cout << "Yes";
    else cout << "No";

    return 0;
}