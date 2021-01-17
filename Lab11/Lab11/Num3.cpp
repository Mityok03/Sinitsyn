#include<iostream>
using namespace std;
int main()
{
	int x, bx, cx, y, by, cy, b, c;
	cin >> x >> y >> bx >> by >> cx >> cy;
	b = sqrt((x - bx) * (x - bx) + (y - by) * (y - by));
	c = sqrt((x - cx) * (x - cx) + (y - cy) * (y - cy));
	if (b <= c)
		cout << endl << "B" << endl << b;
	else
		cout << endl << "C" << endl << c;
}