#include<iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	if ((a < 100) && (a > 9) && ((a % 2) == 0))
	{
		cout << endl << 1;
	}
	else
	{
		cout << endl << 0;
	}
}