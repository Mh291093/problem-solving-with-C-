/* Given a letter X. Determine whether X is Digit or Alphabet and
if it is Alphabet determine if it is Capital Case or Small Case.
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main () {
	char myChar;
	cin >> myChar;
	if (myChar >= 97 && myChar <= 122) {
		cout << "ALPHA\n" << "IS SMALL\n";
	} else if (myChar >= 65 && myChar <= 90) {
		cout << "ALPHA\n" << "IS CAPITAL\n";
	} else if (myChar >= 48 && myChar <= 57) {
		cout << "IS DIGIT\n";
	}
}
