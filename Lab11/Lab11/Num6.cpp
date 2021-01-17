#include<iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	if ((a % 2) == 0)
	{
		if (a > 100)
			cout << endl << "Che'tnoe trehznachnoe chislo";
		else if (a > 10)
			cout << endl << "Che'tnoe dvuhznachnoe chislo";
		else
			cout << endl << "Che'tnoe odnoznachnoe chislo";
	}
	else
	{
		if (a > 100)
			cout << endl << "Neche'tnoe trehznachnoe chislo";
		else if (a > 10)
			cout << endl << "Neche'tnoe dvuhznachnoe chislo";
		else
			cout << endl << "Neche'tnoe odnoznachnoe chislo";
	}
}