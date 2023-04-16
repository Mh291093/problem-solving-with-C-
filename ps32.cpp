/* Input
Only One line containing two decimal numbers A and B (0=A,B=109).
Output
Print the value after adding A and B in Peter Parker's way.
*/

#include<bits/stdc++.h>
using namespace std;
int main () {
	int a, b, c;
	cin >> a >> b;
	c = a ^ b;
	cout << c;
}
