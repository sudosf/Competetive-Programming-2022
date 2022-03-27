#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

ld calcVariance(vector<ld> sample, ld mean) {

    // Compute sum squared
    // differences with mean.
    ld sqDiff = 0;
    for (int i = 0; i < sample.size(); i++)
        sqDiff += (sample[i] - mean) *
                  (sample[i] - mean);

    return sqDiff / sample.size();
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; 
    vector<ld> sample;
    for (int i = 0; i < 7; i++) {
        cin >> s;
        s.erase(remove(s.begin(), s.end(), '0'), s.end());
        sample.push_back(s.length());
    }

    ld sum = accumulate(sample.begin(), sample.end(), 0);
    ld mean = sum / sample.size();
    ld variance = calcVariance(sample, mean);
    ld std = sqrt(variance);

    cout << fixed << setprecision(4) << std << "\n";

    return 0;
}
