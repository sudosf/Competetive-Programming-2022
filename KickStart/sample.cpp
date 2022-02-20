#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //Number of Test Cases
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {

        int bags, num_kids, total = 0;
        cin >> bags >> num_kids;

        for (int c = 0; c < bags; c++) {
            int num_candy;
            cin >> num_candy;

            total += num_candy;
        }

        cout <<"Case #"<< i + 1 <<": "<< total % num_kids << "\n"; 
    }

    return 0;
}
