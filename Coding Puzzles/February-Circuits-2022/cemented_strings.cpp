#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int main() {

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    int T, N;
    string s;
    cin >> T;

    for (int k = 0; k < T; k++) {
        cin >> N;
        cin >> s;

        int moves = 0;
        map<char, set<int> > chars;
        while(s.length() > 0) {

            for (int j = 0; j < int(s.length()); j++) {
                
                if (chars.find(s[j]) != chars.end()) {
                    chars[(s[j])].insert(j); 
                } else{
                    chars.insert( pair<char, set<int> >(s[j], set<int>{j}) );
                }
            }

            auto itr = chars.begin();
            auto element = (itr->second).begin();
            int steps = *(element);
            moves += steps + 1;
            s.erase(s.begin() + steps);

            if (s.length() == 1) {
                moves++;
                s.erase(s.begin());
            }

            chars.clear();
        }

        cout << moves << "\n";
    }

    return 0;
}
