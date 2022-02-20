#include<bits/stdc++.h>
using namespace std;

long long SimilarElementsPairs (vector<int> A,int N) {
    // Write your code here

    int num_pairs = 0, count = 1, equal = 1;
    sort(A.begin(), A.end());

    for(int i = 0; i < N; i++){

        if(A[i] + 1 == A[i + 1]) count++;

        else if (A[i] == A[i+1]){
            count++;
            equal++;
        }
        else {
            if(count != equal)
                num_pairs +=  (count*(count - 1))/2;

            count = 1;
            equal = 1;
        }

    }

    return num_pairs;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> A(N);
    for(int i_A=0; i_A<N; i_A++)
    {
    	cin >> A[i_A];
    }

    long long out_;
    out_ = SimilarElementsPairs(A,N);
    cout << out_;
}







sort(arr, arr+num);

for(int i=0; i<num; i++){

    if(arr[i]+1 == arr[i+1]) n++;
    else if (arr[i] == arr[i+1]) {
        n++;
        k++;
    }
    else{ 
        if (n!=k) {
            count += (((n)*(n-1))/2 ) ;
            n = 1;
            k = 1;
        }
    }
}

cout<<count;

