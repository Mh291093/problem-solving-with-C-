// Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No"

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main () {
	int num1, num2;
	cin >> num1 >> num2;
	if (num1 >= num2) {
		cout << "Yes";
	} else {
		cout << "No";
	}
}
