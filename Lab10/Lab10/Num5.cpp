#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cin >> a;
	a = abs(a);
	b = a / 1000;
	c = a % 10;
	d = a / 100 - b * 10;
	e = (a % 100) / 10;
	if ((b == c) && (d == e))
	{
		cout << endl << 1;
	}
	else
	{
		cout << endl << 0;
	}
}