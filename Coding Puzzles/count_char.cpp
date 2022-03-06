#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    if (int(s.length()) > 20){
        cout << "No\n";
        return 0;
    }

    int x = count(s.begin(), s.end(), 'z');
    int y = count(s.begin(), s.end(), 'o');

    if (x * 2 == y) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}
