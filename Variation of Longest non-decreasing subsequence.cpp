// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to return the length of the
// longest non-decreasing subsequence
// having the difference as D for every
// adjacent elements
int longestSubsequence(vector<int> arr,
					int d)
{
	// Store the size of array
	int n = arr.size();

	// Stores the maximum length of the
	// subsequence after including the
	// ith element
	vector<int> dp(n, 1);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {

			// If it satisfies the
			// given condition
			if (arr[i] - d < arr[j]
				and arr[i] >= arr[j]) {

				// Update dp[i]
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}

	// Maximum value in the dp
	// table is the answer
	return *max_element(
		dp.begin(), dp.end());
}

// Driver Code
int main()
{
	vector<int> arr = { 1, 3, 2, 4, 5 };
	int D = 2;
	cout << longestSubsequence(arr, D);

	return 0;
}
