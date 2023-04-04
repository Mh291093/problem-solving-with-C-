/* Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter.
Otherwise print the letter after converting it from uppercase letter to lowercase letter
Note : difference between 'a' and 'A' in ASCII is 32 .
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main () {
	char letter, resLetter;
	cin >> letter;
	int ascci = letter;
	if (ascci >= 65 && ascci <= 90) {
		ascci += 32;
		resLetter = ascci;
		cout << resLetter << endl;
	} else if (letter >= 97 && letter <= 122) {
		ascci -= 32;
		resLetter = ascci;
		cout << resLetter << endl;
	}
}
