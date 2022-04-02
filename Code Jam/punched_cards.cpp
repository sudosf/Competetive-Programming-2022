#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

string drawPunchCard(int r, int c) {

    string card = "";
    for (int  i = 2; i < (r*2 + 3); i++) {
        
        string start, next, s = "";
        if (i%2 == 0) {
            start = "+";
            next = "-";
        } else {
            start = "|";
            next = ".";
        }

        int s_start = 2;
        if ((i == 2 || i ==  3) ) { 
            s += "..";
            s_start = 4;
        };
        
        for (int j = s_start; j < (c*2 + 3); j++) {
            if (j%2 == 0) s += start;
            else s += next; 
        }
        card += s + "\n";
    }

    return card;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, row, col;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> row >> col;

        cout << "Case #"<< i+1 << ":\n";
        cout << drawPunchCard(row, col); 
    }

    return 0;
}
