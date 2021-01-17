#include<iostream>
using namespace std;
int main()
{
	float a, b, c, d;
	cin >> a >> b >> c;
	d = b;
	b = a;
	a = c;
	c = d;
	cout << endl << a << endl << b << endl << b;
}