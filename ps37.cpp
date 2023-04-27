/* Given a number N. Print all even numbers between 1 and N inclusive in separate lines.
*/

#include<bits/stdc++.h>
using namespace std;
int main () {
    int num;
    cin >> num;
    if (num == 1) {
        cout << -1 << endl;
    }
    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }
}
