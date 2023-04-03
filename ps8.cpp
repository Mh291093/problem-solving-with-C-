// Given 2 numbers A and B Print floor, ceil and round of A/B

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main () {
	double num1, num2;
	cin >> num1 >> num2;
	double result = num1 / num2;
	cout << "floor " << num1 << " / " << num2 << " = " << floor(result) << endl;
	cout << "ceil " << num1 << " / " << num2 << " = " << ceil(result) << endl;
	cout << "round " << num1 << " / " << num2 << " = " << round(result) << endl;
}
