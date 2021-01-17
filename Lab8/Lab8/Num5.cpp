#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a;
	b = a / 100;
	c = a % 100;
	d = c * 10 + b;
	cout << endl << d;
}