#include<iostream>
using namespace std;
int main()
{
	int x, y, a;
	cin >> x >> y;
	if ((x > 0) && (y > 0))
	{
		a = 1;
	}
	else if ((x < 0) && (y > 0))
	{
		a = 2;
	}
	else if ((x < 0) && (y < 0))
	{
		a = 3;
	}
	else
	{
		a = 4;
	}
	cout << endl << a;
}