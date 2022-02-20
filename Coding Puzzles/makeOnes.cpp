#include <bits/stdc++.h>

using namespace std;

int makeOnes(int arr[], int n) {
    
    int steps = 0;

    for (int i = 0; i < n; i++) {
        cout << ": " << steps << "\n";

        while(arr[i] != 1) {
            if (arr[i] % 2 == 0) {
                arr[i] /= 2;
                cout << arr[i] << " :: " << steps << "\n";
            }

            else {
                int odd = 1;

                if (( (arr[i] + odd)/2 ) % 2 == 0) arr[i] += odd;
                else arr[i] += (odd + 2);

                cout << arr[i] <<" ::: " << steps << "\n";
            }

            steps++;
        }
    }

    return steps;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {5, 8};

    cout << makeOnes(arr, 2) << "\n";

    return 0;
}
