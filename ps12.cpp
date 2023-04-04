/* Given two person names.Each person has {"the first name" + "the second name"}
Determine whether they are brothers or not. */

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main () {
	string firstPerson1, secondPerson2, fatherName1, fatherName2;
	cin >> firstPerson1 >> fatherName1 >> secondPerson2 >> fatherName2;
	if (fatherName1 == fatherName2) {
		cout << "ARE Brothers" << endl;
	} else {
		cout << "NOT" << endl;
	}
}
