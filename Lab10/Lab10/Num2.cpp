#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if ((a < b) && (b < c))
	{
		cout << endl << 1;
	}
	else
	{
		cout << endl << 0;
	}
}