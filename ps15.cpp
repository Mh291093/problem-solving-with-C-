/* Given a mathematical expression. The expression will be one of the 
following expressions: A+B, A-B, A*B and A/B
Print the result of the mathematical expression.
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main () {
	char a;
	int num1, num2;
	cin>>num1;
	cin>>a;
	cin>>num2;
	
	switch (a) {
		case '*':
			cout<<num1*num2;
			break;
		case '+':
			cout<<num1+num2;
			break;
		case '-':
			cout<<num1-num2;
			break;
		case '/':
			cout<<num1/num2;
			break;
	}
}
