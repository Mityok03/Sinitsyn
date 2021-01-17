#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (a == b)
	{
		a = 0;
		b = 0;
	}
	else
	{
		if (a > b)
			b = a;
		else
			a = b;
	}
	cout << endl << a << endl << b;
}