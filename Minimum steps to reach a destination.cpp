// C++ program to count number of
// steps to reach a point
#include<bits/stdc++.h>
using namespace std;

// Function to count number of steps
// required to reach a destination

// source -> source vertex
// step -> value of last step taken
// dest -> destination vertex
int steps(int source, int step, int dest)
{
	// base cases
	if (abs(source) > (dest))
		return INT_MAX;
	if (source == dest) return step;

	// at each point we can go either way

	// if we go on positive side
	int pos = steps(source + step + 1,
					step + 1, dest);

	// if we go on negative side
	int neg = steps(source - step - 1,
					step + 1, dest);

	// minimum of both cases
	return min(pos, neg);
}

// Driver code
int main()
{
	int dest = 11;
	cout << "No. of steps required to reach "
							<< dest << " is "
						<< steps(0, 0, dest);
	return 0;
}
