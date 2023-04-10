/* Given the boundaries of 2 intervals. Print the boundaries of their intersection.
Output
If there is an intersection between these 2 intervals print its boundaries
otherwise print -1.
*/

#include<iostream>
using namespace std;
int main () {
	int num1, num2, num3, num4;
	cin >> num1 >> num2 >> num3 >> num4;
	int start, end;
	if ((num3 < num1 && num4 < num1) || (num3 > num2 && num4 > num2)) {
		cout << -1 << endl;
	} else {
		if (num1 > num3) {
			start = num1;
		} else {
			start = num3;
		}
		if (num2 > num4) {
			end = num4;
		} else {
			end = num2;
		}
		cout << start << " " << end << endl;
	}
}
