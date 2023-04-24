/* Given a number N, and N numbers, find maximum number in these N numbers.
*/

#include<bits/stdc++.h>
using namespace std;
int main () {
	int count;
	cin >> count;
	int max = 0;
	for (int i = 1; i <= count; i++) {
		int  num;
		cin >> num;
		if (i == 1) {
			max = num;
		}
		if (num > max) {
			max = num;
		}
	}
	cout << max << endl;
}
