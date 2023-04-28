/* Given a number N. Print 2 lines that contain the following respectively:
Print N in a reversed order and not leading zeroes.
If N is a palindrome number print "YES" otherwise, print "NO.
*/

#include<bits/stdc++.h>
using namespace std;
int main () {
	int num, rev = 0, temp;
	cin >> num;
	temp = num;
	
	while(num){
		rev = rev * 10 + num % 10;
		num = num / 10;
	}
	
	if(temp == rev) {
		cout << rev << endl << "YES";
	}
	else {
		cout << rev << endl << "NO";
	}
}
