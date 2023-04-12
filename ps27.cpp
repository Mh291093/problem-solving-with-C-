/* Input
Only one line containing two numbers X and P (1=X=99,1=P=4×104)
the discount percentage, and the price of the T-shirt after the discount.
Output
Print the price of the T-shirt before the discount rounded up to two decimal places.
*/

#include<bits/stdc++.h>
using namespace std;
int main () {
    double discount, price;
    cin >> discount >> price;
    
    double priceResult = price / (100 - discount);
    double result = (discount * priceResult) + price;
    cout << result << endl;
}
