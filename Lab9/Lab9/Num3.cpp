#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b;
	c = a + b - 1;
	d = c % 7;
	if (d == 0)
	{
		d = 7;
	}
	cout << endl << d;
}