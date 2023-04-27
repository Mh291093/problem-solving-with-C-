/* Given N numbers. Count how many of these values are even, odd, positive and negative.
*/

#include<bits/stdc++.h>
using namespace std;
int main () {
    int count;
    cin >> count;
    int e = 0, o = 0, p = 0, n = 0;
    for (int i = 1; i <= count; i++) {
        int num;
        cin >> num;
        if (num % 2 == 0) {
            e++;
        } else {
            o++;
        }
        if (num > 0) {
            p++;
        } else if (num < 0) {
            n++;
        }
    }
    cout << "Even: " << e << endl;
    cout << "Odd: " << o << endl;
    cout << "Positive: " << p << endl;
    cout << "Negative: " << n << endl;
}
