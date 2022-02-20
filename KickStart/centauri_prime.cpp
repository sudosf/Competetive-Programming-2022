#include <bits/stdc++.h>

using namespace std;

string GetRuler(string kingdom) {
    // TODO: implement this method to determine the ruler name, given the kingdom

    transform(kingdom.begin(), kingdom.end(), kingdom.begin(), ::tolower);
    
    string ruler = "nobody";
    int len = kingdom.length();

    char c = kingdom[len - 1];
    if (c == 'y') return ruler;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        ruler = "Alice";

    else ruler = "Bob";

    return ruler;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //Number of Test Cases
    int T;
    cin >> T;
    string kingdom;

    for (int i = 0; i < T; i++) {

        cin >> kingdom;

        cout << "Case #" << i + 1 << ": " << kingdom << " is ruled by "
         << GetRuler(kingdom) << ".\n";
    }

    return 0;
}
