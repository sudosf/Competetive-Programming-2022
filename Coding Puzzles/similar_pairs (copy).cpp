#include <bits/stdc++.h>

using namespace std;

int main() {

    long num, 
    cin >> num;

    int arr[num];
    for(int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    int count = 0, n = 1, equal = 1;
    sort(arr, arr + num);

    for(int i = 0; i < num; i++){

        if(arr[i] + 1 == arr[i+1]){
            n++;
        } 
        else if (arr[i] == arr[i+1]){
            n++;
            equal++;

        }
        else {
            if(n != equal){
                count += ( ((n)*(n-1))/2 );
            }

            n = 1;
            equal = 1;
        }

    }

    cout << count;

    return 0;
}