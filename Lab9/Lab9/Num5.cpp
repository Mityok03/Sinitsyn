#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a;
	b = a / 100;
	if ((a % 100) > 0)
	{
		b++;
	}
	cout << endl << b;
}