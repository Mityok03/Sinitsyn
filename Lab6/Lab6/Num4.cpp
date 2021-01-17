#include<iostream>
using namespace std;
int main()
{
	float a, b, c, d;
	cin >> a >> b >> c;
	d = a;
	a = b;
	b = c;
	c = d;
	cout << endl << a << endl << b << endl << b;
}