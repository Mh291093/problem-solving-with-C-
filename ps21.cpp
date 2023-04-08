// Given a number N, Determine whether N is float number or integer number.

#include<iostream>
using namespace std;

int main () {
	double num;
	cin >> num;
	int numInt = num;
	double res = num - numInt;
	if (res != 0) {
		cout << "float " << numInt << " " << res << endl;
	} else {
		cout << "int " << numInt << endl;
	}
}
