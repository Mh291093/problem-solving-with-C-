/* Memo and Momo are playing a game. Memo will choose a positive number a
, and Momo will choose a positive number b Your task is to tell them who will win according to the following rules:
If both a and b are divisible by k, both of them win and you should print "Both".
If a is divisible by k but b isn't, Memo wins and you should print "Memo".
 If b is divisible by k but a isn't, Momo wins and you should print "Momo"
 .If both a and b are not divisible by k, no one wins and you should print "No One".
*/

#include<bits/stdc++.h>
using namespace std;
int main () {
	long long num1, num2, numGame;
	cin >> num1 >> num2 >> numGame;
	if (num1 % numGame == 0 && num2 % numGame == 0) {
		cout << "Both" << endl;
	} else if (num1 % numGame == 0 && num2 % numGame != 0) {
		cout << "Memo" << endl;
	} else if (num1 % numGame != 0 && num2 % numGame == 0) {
		cout << "Momo" << endl;
	} else {
		cout << "No One" << endl;
	}
}
