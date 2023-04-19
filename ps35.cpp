/* A number of two digits is lucky if one of its digits is divisible by the other.
For example, 39, 82, and 55 are lucky, while 79 and 43 are not.
Given a number between 10 and 99, determine whether it is lucky or not.
*/

#include<bits/stdc++.h>
using namespace std;
int main () {
	string num;
	cin >> num;
	int num1 = num[0] - '0';
	int num2 = num[1] - '0';
	if (num2 == 0) {
		cout << "YES" << endl;
	} else if (num1 % num2 == 0 || num2 % num1 == 0) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}
