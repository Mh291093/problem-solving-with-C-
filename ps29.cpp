/* Given a lowercase alphabet character. You have to print the next character in the alphabet.
*/

#include<bits/stdc++.h>
using namespace std;
int main () {
	char letter;
	cin >> letter;
	int ascLetter = letter;
	if (ascLetter == 122) {
		cout << "a" << endl;
		return 0;
	}
	int newAscLetter = ++letter;
	char letterRes = newAscLetter;
	cout << letterRes << endl;
}
