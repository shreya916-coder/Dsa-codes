

#include <bits/stdc++.h>
using namespace std;

// Function to find the smallest
// Nth term of an AP possible
int smallestNth(int A, int B, int N)
{
	// Stores the smallest Nth term
	int res = INT_MAX;

	for (int i = 1; i < N; i++) {
		for (int j = N; j > i; j--) {

			// Check if common difference
			// of AP is an integer
			if ((B - A) % (j - i) == 0) {

				// Store the common
				// difference
				int D = (B - A) / (j - i);

				// Store the First Term
				// of that AP
				int FirstTerm = A - (i - 1) * D;

				// Store the Nth term of
				// that AP
				int NthTerm = FirstTerm + (N - 1) * D;

				// Check if all elements of
				// an AP are positive
				if (FirstTerm > 0)
					res = min(res, NthTerm);
			}
		}
	}

	// Return the least
	// Nth term obtained
	return res;
}

// Driver Code
int main()
{
	int N = 3;
	int A = 1;
	int B = 6;
	cout << smallestNth(A, B, N);
}
