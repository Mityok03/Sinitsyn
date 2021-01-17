#include<iostream>
using namespace std;
int main()
{
	long double a1, b1, a2, b2, c1, c2, x, y;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	x = (b1 * c2 - b2 * c1) / (b1 * a2 - b2 * a1);
	y = (c1 - a1 * x) / b1;
	cout << endl << x;
	cout << endl << y;
}