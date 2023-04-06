// Given a number X. Print "EVEN" if the first digit of X is even number.
// Otherwise print "ODD".

#include<iostream>
using namespace std;
int main () {
	int num;
	cin >> num;
	num /= 1000;
	if (num % 2 == 0) {
		cout << "EVEN";
	} else {
		cout << "ODD";
	}
}
