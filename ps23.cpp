/* Given a mathematical expression. The expression will be one of the following expressions:
A + B = C, A - B = C and A * B = C
Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.
*/

#include<iostream>
using namespace std;
int main () {
	int num1, num2, res;
	char sign, equal;
	int myRes = 0;
	cin >> num1 >> sign >> num2 >> equal >> res;
	switch (sign) {
		case '+':
			myRes = num1 + num2;
			if (myRes == res) {
				cout << "Yes" << endl;
			} else {
				cout << myRes << endl;
			}
		break;
		case '-':
			myRes = num1 - num2;
			if (myRes == res) {
				cout << "Yes" << endl;
			} else {
				cout << myRes << endl;
			}
		break;
		case '*':
			myRes = num1 * num2;
			if (myRes == res) {
				cout << "Yes" << endl;
			} else {
				cout << myRes << endl;
			}
		break;
	}
}
