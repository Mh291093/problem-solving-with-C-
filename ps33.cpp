/* Two eyes and one body.
Two eyes, one mouth, and one body.
One eye, one mouth, and one body.
If the king has n eyes, m mouths and k bodies, what is the largest number of Katryoshkas he can make?
*/

#include<bits/stdc++.h>
using namespace std;
int main () {
	long long eye, mouth, body;
	cin >> eye >> mouth >> body;
	long long res;
	if (eye == 0 || body == 0) {
		cout << 0;
	} else {
		if ((mouth >= eye && mouth >= body) || (mouth >= body && mouth < eye) || (mouth >= eye && mouth < body)) {
			res = min(eye, body);
			cout << res << endl;
		} else if (mouth < eye && mouth < body) {
			res = mouth;
			eye -= mouth;
			body -= mouth;
			res += min(eye / 2, body);
			cout << res << endl;
		}
	}
}
