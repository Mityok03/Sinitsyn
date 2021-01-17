#include<iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	if (a == 0)
		cout << endl << "Nul'evoe chislo";
	else if (a < 0)
	{
		if ((a % 2) == 0)
			cout << endl << "Otricat'el'noe che'tnoe chislo";
		else
			cout << endl << "Otricat'el'noe neche'tnoe chislo";
	}
	else
	{
		if ((a % 2) == 0)
			cout << endl << "Polojzit'el'noe che'tnoe chislo";
		else
			cout << endl << "Polojzit'el'noe neche'tnoe chislo";
	}
}