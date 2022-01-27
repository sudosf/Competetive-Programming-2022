// C++ code to print all possible
// subsequences for given array using
// recursion
#include <bits/stdc++.h>
using namespace std;

int calls;

void printArray(vector<int> arr, int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Recursive function to print all
// possible subsequences for given array
void printSubsequences(vector<int> arr, int index,
					vector<int> subarr)
{
	calls++;
	// cout << "index: " << index << "\n";

	// Print the subsequence when reach
	// the leaf of recursion tree
	if (index == arr.size()) {

		int l = subarr.size();

		// cout <<"processing..."<< "\n";

		// Condition to avoid printing
		// empty subsequence
		if (l != 0) {
			printArray(subarr, l);
			// cout << "printed!" << "\n";
		}
	}
	else {
		// Subsequence without including
		// the element at current index
		printSubsequences(arr, index + 1, subarr);

		subarr.push_back(arr[index]);

		// Subsequence including the element
		// at current index
		printSubsequences(arr, index + 1, subarr);
		
		// cout << "poping..." << "\n";
		subarr.pop_back();
	}
    
	// cout << "Printing test: ";
	// printArray(subarr, subarr.size());
	
	return;
}

// Driver Code
int main() {

	vector<int> arr{1, 2, 3};
	vector<int> b;

	printSubsequences(arr, 0, b);
	
	cout<<"\nrecursive calls made: "<< calls << "\n";

	return 0;
}