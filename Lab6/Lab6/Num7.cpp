#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a;
	b = a;
	a = b * b;
	c = a * a;
	a = c * b;
	c = a;
	b = a * a;
	a = b * c;
	cout << endl << a;
}