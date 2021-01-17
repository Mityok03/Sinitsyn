#include<iostream>
using namespace std;
int main()
{
	float v1, v2, s, t, a;
	cin >> v1 >> v2 >> s >> t;
	a = s + abs(v1) * t + abs(v2) * t;
	cout << endl << a;
}