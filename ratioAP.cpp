
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

// Function to find the ratio
void findRatio(ll m, ll n)
{

	ll Am = m - 5, An = n - 5;

	// divide numerator by gcd to get
	// smallest fractional value
	ll numerator = Am / (__gcd(Am, An));

	// divide denominator by gcd to get
	// smallest fractional value
	ll denominator = An / (__gcd(Am, An));

	cout << numerator << "/" << denominator << endl;
}

// Driver code
int main()
{

	// let d=1 as d doesn't affect ratio
	ll m = 10, n = 20;

	findRatio(m, n);

	return 0;
}
