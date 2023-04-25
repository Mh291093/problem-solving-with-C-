/* Given a number N. Print the multiplication table of the number from 1 to 12
*/

#include<bits/stdc++.h>
using namespace std;
int main () {
	int num;
	cin >> num;
	for (int i = 1; i <= 12; i++) {
		cout << num << " * " << i << " = " << num*i << endl;
	}
}
