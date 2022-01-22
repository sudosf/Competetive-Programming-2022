#include <bits/stdc++.h>

using namespace std;

int main () {

    // optimize for faster reading of input
    // comment this code if using 'cout' 
    // when reading in input
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // cout <<"\nEnter No. of test cases: ";
    int T;
    cin >> T;

    // Run T test cases
    for (int t = 0; t < T; t++) {
        
        // get cost of green and purple balloons
        // cout <<"\nEnter cost of green and purple balloons: ";
        int costGreen, costPurple, p;
        cin >> costGreen >> costPurple;

        // cout <<"Enter No. of participants: ";
        cin >> p;

        // initialize arrays for holding participants data
        vector<int> greenBal, purpleBal;

        // obtain data for each participant
        for (int i = 0; i < p; i++) {

            // cout <<"Case #"<< i <<" Enter participants result (0 or 1): ";
            int resultGreen, resultPurple;
            cin >> resultGreen >> resultPurple;

            greenBal.push_back(resultGreen);
            purpleBal.push_back(resultPurple);
        }

        int greenCount = 0, purpleCount = 0;

        for (int k = 0; k < p; k++) {
            if (greenBal[k]) greenCount++;
            if (purpleBal[k]) purpleCount++;
        }

        // Calculate the sums
        int sum1 = greenCount*costGreen + purpleCount*costPurple;
        int sum2 = greenCount*costPurple + purpleCount*costGreen;

        // Determine the minimum cost
        cout <<  min(sum1, sum2) << "\n";
    }

    return 0;
}