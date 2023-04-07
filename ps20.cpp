/*
Given three numbers A, B, C. Print these numbers in ascending order followed by
a blank line and then the values in the sequence as they were read.
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main () {
	double num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	int max, def, min;
	if (num1 >= num2 && num1 >= num3) {
		max = num1;
		if (num2 >= num3) {
			def = num2;
			min = num3;
		} else {
			def = num3;
			min = num2;
		}
	} else if (num2 >= num1 && num2 >= num3) {
		max = num2;
		if (num1 >= num3) {
			def = num1;
			min = num3;
		} else {
			def = num3;
			min = num1;
		}
	} else {
		max = num3;
		if (num1 >= num2) {
			def = num1;
			min = num2;
		} else {
			def = num2;
			min = num1;
		}
	}
	cout << min << endl << def << endl << max << endl;
	cout << endl;
	cout << num1 << endl << num2 << endl << num3 << endl;
}
