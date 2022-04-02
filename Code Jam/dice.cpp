#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

ll getStraight(vector<ll> dice, ll N) {

    ll straight = 0;

    sort(dice.begin(), dice.end());
    ll min = dice[0];
    ll max = dice[dice.size()-1];

    if (min >= N) return N;

    for (ll i = 0; i < N; i++) {
        if (dice[i] > straight && (straight != dice[i + 1])) straight++;
    }

    return straight;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;

    for (ll i = 0; i < T; i++) {
        ll N, die;
        cin >> N;

        vector<ll> dice;
        dice.reserve(N);
        for (ll j = 0; j < N; j++) {
            cin >> die;
            dice.push_back(die);
        }

        cout <<"Case #"<< i+1 << ": " << getStraight(dice, N) << "\n";
    }

    return 0;
}
