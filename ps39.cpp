/* Given multiple lines each line contains a number X which is a password.
Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.
*/

#include<bits/stdc++.h>
using namespace std;
int main () {
    int pwd;
    while(true) {
        cin >> pwd;
        if (pwd == 1999) {
            cout << "Correct" << endl;
            break;
        } else {
            cout << "Wrong" << endl;
        }
    }
}
