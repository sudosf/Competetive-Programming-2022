#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N;
    string s;
    cin >> T;

    for (int k = 0; k < T; k++) {
        cin >> N;
        cin >> s;

        int moves = 0;
        map<char, set<int> > chars;
        vector<int> test;

        for (int j = 0; j < int(s.length()); j++) {

            if (chars.find(s[j]) != chars.end()) {
                chars[(s[j])].insert(j); 
            } else{
                chars.insert( pair<char, set<int> >(s[j], set<int>{j}) );
            }
        }

       for (auto itr = chars.begin(); itr != chars.end(); itr++) 
            for (auto i : itr->second) test.push_back(i);

        for (int k = 0; k < int(test.size()); k++) {
            moves += test[k] + 1;

            for (int h = k; h < int(test.size()); h++) {
                if (test[h] > test[k]) test[h]--;
            }
        }

        cout << moves << "\n";
    }

    return 0;
}
