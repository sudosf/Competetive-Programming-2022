#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, e;
    cin >> N;

    vector<int> a;
    vector<int> b;

    for (int i = 0; i < N; i++) {
        cin >> e;
        a.push_back(e); 
    }
    for (int j = 0; j < N; j++) {
        cin >> e;
        b.push_back(e); 
    }

    int count = 0;
    while( N > 0) {

        if(a[0] == b[0] ) {
            count++;

            auto i = a.begin();
            auto j = b.begin();
            a.erase(i);
            b.erase(j);

            N--;
        } else {
            int temp = a[0];
            for (int i = 0; i < N - 1; i++) 
                a[i] = a[i + 1];

            a[N-1] = temp;
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}
