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
