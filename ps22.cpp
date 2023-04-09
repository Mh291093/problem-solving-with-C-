/* Given a comparison symbol S between two numbers A and B. Determine whether it is Right or Wrong.
The comparison is as follows: A < B, A > B, A = B.
Where A, B are two integer numbers and S refers to the sign between them.
Input :-
Only one line containing A, S and B respectively
Output :-
Print "Right" if the comparison is true, "Wrong" otherwise.
*/

#include<iostream>
using namespace std;
int main () {
	int num1;
	char symbol;
	int num2;
	cin >> num1 >> symbol >> num2;
	switch (symbol) {
		case '=':
			if (num1 == num2) {
				cout << "Right" << endl;
			} else {
				cout << "Wrong" << endl;
			}
			break;
		case '>':
			if (num1 > num2) {
				cout << "Right" << endl;
			} else {
				cout << "Wrong" << endl;
			}
			break;
		case '<':
			if (num1 < num2) {
				cout << "Right" << endl;
			} else {
				cout << "Wrong" << endl;
			}
			break;
	}
}
