// Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples"

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main () {
	long long num1, num2;
	cin >> num1 >> num2;
	if (num1 % num2 == 0 || num2 % num1 == 0) {
		cout << "Multiples";
	} else {
		cout << "No Multiples";
	}
}
