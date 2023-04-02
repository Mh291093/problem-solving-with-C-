#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main () {
	long long num1, num2;
	cin >> num1 >> num2;
	int lastDigit1 = num1 % 10;
	int lastDigit2 = num2 % 10;
	cout << lastDigit1 + lastDigit2 << endl;
}
