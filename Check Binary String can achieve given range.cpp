// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check if it is possible
// to reach the end of the binary string
// using the given jumps
bool canReach(string s, int L, int R)
{
	// Stores the DP states
	vector<int> dp(s.length());

	// Initial state
	dp[0] = 1;

	// Stores count of indices from which
	// it is possible to reach index i
	int pre = 0;

	// Traverse the given string
	for (int i = 1; i < s.length(); i++) {

		// Update the values of pre
		// accordingly
		if (i >= L) {
			pre += dp[i - L];
		}

		// If the jump size is out of
		// the range [L, R]
		if (i > R) {
			pre -= dp[i - R - 1];
		}

		dp[i] = (pre > 0) and (s[i] == '0');
	}

	// Return answer
	return dp[s.length() - 1];
}

// Driver Code
int main()
{
	string S = "01101110";
	int L = 2, R = 3;

	cout << (canReach(S, L, R) ? "Yes" : "No");

	return 0;
}
