// Given a number N Print the summation of the numbers that is between 1 and N
 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main () {
	long long n;
	cin >> n;
	cout << n * (n + 1) / 2;
}
