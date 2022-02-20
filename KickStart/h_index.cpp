#include <bits/stdc++.h>

using namespace std;

vector<int> GetHIndexScore(vector<int> citations) {

    vector<int> h_index;

    // TODO: Calculate and return h-index score for each paper.
    int h_score = 1;
    if (citations[0] == 0) h_score = 0;

    h_index.push_back(h_score);

    int min, max;
    if (citations[0] > citations[1]) {
        min = citations[1];
        max = citations[0];
    }
    else {
        min = citations[0];
        max = citations[1];
    }

    for (int i = 1; i < int(citations.size()); i++) {
        
      /*  if (citations[i] > max && citations[i] > min) { 
            h_score++;
        }
        else if (citations[i] == max && citations[i] > min) {
            h_score++;
        }
        else if (citations[i] < max && citations[i] > min) { 
            h_score++;
        }

        h_index.push_back(h_score);

        if (citations[i] < min) min = citations[i]; 
        if (citations[i] > max) max = citations[i]; */

        
        if (citations[i] > citations[i - 1]){
            if (citations[i] > max) h_score++;
        }

       // else if (citations[i] < citations[i - 1]) {
       //     if (citations[i] > max && citations[i] > min) h_score++;
       // }

        else if (citations[i] == citations[i - 1] && citations[i] >= max)
            h_score++;

        h_index.push_back(h_score);

        if (citations[i] < min) min = citations[i]; 
        if (citations[i] > max) max = citations[i]; 
    }

    return h_index;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tests;
    cin >> tests;

    for (int test_case = 1; test_case <= tests; test_case++) {

        // Get number of papers for this test case
        int paper_count;
        cin >> paper_count;

        // Get number of citations for each paper
        vector<int> citations(paper_count);
        for (int i = 0; i < paper_count; i++) 
            cin >> citations[i];
        
        vector<int> answer = GetHIndexScore(citations);

        cout << "Case #" << test_case << ": ";

        for (int i = 0; i < int(answer.size()); i++) 
            cout << answer[i] << " ";
        
        cout << "\n";
    }

    return 0;
}
