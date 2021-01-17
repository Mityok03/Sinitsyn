#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c;
	if (((a + b) >= (b + c)) && ((a + b) >= (a + c)))
	{
		d = a + b;
	}
	else if (((c + b) >= (a + c)) && ((c + b) >= (b + c)))
	{
		d = c + b;
	}
	else
	{
		d = a + c;
	}
	cout << endl << d;
}