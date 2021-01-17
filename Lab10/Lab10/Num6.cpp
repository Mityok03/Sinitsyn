#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c;
	d = a * a + b * b;
	e = c * c;
	if (d == e)
	{
		cout << endl << 1;
	}
	else
	{
		cout << endl << 0;
	}
}