#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a;
	b = a / 10;
	c = a % 10;
	d = c * 10 + b;
	cout << endl << d;
}