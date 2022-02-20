#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    vector<char> v(s.begin(), s.end());

    int N = v.size();
    int score = 0;
    for (int i = 0; i <= int(N/2); i++) {
       
        int check = N-i+1;
        if (check >= N) continue;

        cout << v[i] <<" : "<< v[check] << "\n";
        if( v[i] != v[check] ) score++;
    }

    cout << score << "\n";
    return 0;
}
