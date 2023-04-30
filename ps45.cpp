/* Given a number N. Print all prime numbers between 1 and N inclusive.
*/

#include<bits/stdc++.h>
using namespace std;
int primeNums (int num) {
	int div = num / 2;
	for (int i = 2; i <= div; i++) {
		if (num % i == 0) {
			return -1;
		}
	}
	return num;
}
int main () {
	int counter;
	cin >> counter;
	for (int i = 2; i <= counter; i++) {
		int res = primeNums(i);
		if (res != -1) {
			cout << res << " ";
		}
	}
}
