#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    vector<int> dashes {6, 2, 5, 5, 4, 5, 6, 4, 7, 6};
    int count = 0;

    for (int i = 0; i < s.size(); i++){
        count += dashes[(s[i]-'0')];
    }

    cout << count << "\n";

    return 0;
}
