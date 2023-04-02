/*
Given a number R calculate the area of a circle using the following formula:
Area = π * R2.
Note: consider π = 3.141592653.
Input
Only one line containing the number R (1  ≤  R  ≤  100).

Output
Print the calculated area, with 9 digits after the decimal point.
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double PI = 3.141592653;
	double R;
	
	cin >> R;
	cout << fixed << setprecision(9) << PI * R * R << endl;
}
