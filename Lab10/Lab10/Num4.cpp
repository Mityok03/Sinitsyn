#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a;
	a = abs(a);
	b = a / 100;
	c = (a % 100) / 10;
	d = a % 10;
	if (((b < c) && (c < d)) || ((b > c) && (c > d)))
	{
		cout << endl << 1;
	}
	else
	{
		cout << endl << 0;
	}
}