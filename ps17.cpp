/*
Given two numbers X, Y which donate coordinates of a point in 2D plan.
Note:
Print Q1, Q2, Q3, Q4 according to the quarter in which the point belongs to.
Print "Origem" If the point is at the origin.
Print "Eixo X" If the point is over X axis.
Print "Eixo Y" if the point is over Y axis.
*/

#include<iostream>
using namespace std;
int main () {
	double num1, num2;
	cin >> num1 >> num2;
	if (num1 == 0 && num2 == 0) {
		cout << "Origem";
	} else if (num1 == 0 && num2 != 0) {
		cout << "Eixo Y";	
	} else if (num1 != 0 && num2 == 0) {
		cout << "Eixo X";	
	} else if (num1 > 0 && num2 > 0) {
		cout << "Q1";	
	} else if (num1 < 0 && num2 > 0) {
		cout << "Q2";	
	} else if (num1 < 0 && num2 < 0) {
		cout << "Q3";	
	} else if (num1 > 0 && num2 < 0) {
		cout << "Q4";	
	}
}
