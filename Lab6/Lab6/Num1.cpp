#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b;
	c = a;
	a = b;
	b = c;
	cout << endl << a << endl << b;
}