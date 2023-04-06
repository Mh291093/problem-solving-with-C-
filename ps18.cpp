/*
Given number and Determine years , months and days.
*/

#include<iostream>
using namespace std;
int main () {
	int days;
	cin >> days;
	int years = days / 365;
	days -= 365 * years;
	int months = days / 30;
	days -= 30 * months;
	cout << years << " years" << endl;
	cout << months << " months" << endl;
	cout << days << " days" << endl;
}
