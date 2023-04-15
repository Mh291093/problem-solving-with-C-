/* Given two numbers a and b. You have to answer with "YES" if there is a non-empty interval consisting of numbers from l to r
(l,l+1,l+2,...,r) with a odd numbers and b even numbers, or "NO" otherwise.
*/

#include<bits/stdc++.h>
using namespace std;
int main () {
	int num1, num2;
	cin >> num1 >> num2;
	if ((num1 == 0 && num2 == 0) || abs(num1 - num2) >= 2) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
	}
}
