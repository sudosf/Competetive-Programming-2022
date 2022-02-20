#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    char c = s[2];
    string ans = "valid";

    if (c == 'Y' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        ans = "invalid";
        cout << ans << "\n";
        return 0;
    }
    // string numbers = regex_replace(s, regex(R"([\D])"), "");

    for (int i = 0; i < int(s.length() - 1); i++) {

        if (i != 1 && i != 2 && i != 5 && i != 6) {
            
            if ( ((s[i] - '0') + (s[i + 1] - '0')) % 2 != 0 ) {
                ans = "invalid";
                break;
            }
        }
    }

    cout << ans << "\n";
    return 0;
}
