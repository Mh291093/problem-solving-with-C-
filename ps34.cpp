/* Given three numbers n, k and a.
Identify whether the data type of (n×k)/a is int, long long or double.
*/

#include<bits/stdc++.h>
using namespace std;
int main () {
	double num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	double res = (num1 * num2) / num3;
	long long myNum = res;
	double myRes = res - myNum;
	if (myRes > 0) {
		cout << "double" << endl;
	} else if (myNum <= 2147483647) {
		cout << "int" << endl;
	} else {
		cout << "long long" << endl;
	}
}
