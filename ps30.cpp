/* a ? b ? c = d - Can you solve this tricky puzzle for him?
Input
Only one line containing four numbers a, b, c and d
Output
Print "YES" (without quotes) if you get the fourth number using arithmetic operators, otherwise, print "NO" (without quotes).
*/

#include<bits/stdc++.h>
using namespace std;
int main () {
	long long num1, num2, num3, res;
	cin >> num1 >> num2 >> num3 >> res;
    int flag = 0;
	long long myRes1 = (num1 * num2) + num3;
	long long myRes2 = (num1 * num2) - num3;
	long long myRes3 = num1 + (num2 * num3);
	long long myRes4 = num1 - (num2 * num3);
	long long myRes5 = (num1 + num2) - num3;
	long long myRes6 = (num1 - num2) + num3;
	
	if (myRes1 == res || myRes2 == res || myRes3 == res || myRes4 == res || myRes5 == res || myRes6 == res) {
		flag = 1;
	}
	if (flag == 1) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}
