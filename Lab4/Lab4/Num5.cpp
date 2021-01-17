#include<iostream>
using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b;
    c = abs(a) + abs(b);
    cout << endl << c;
    c = abs(a) - abs(b);
    cout << endl << c;
    c = abs(a) * abs(b);
    cout << endl << c;
    c = abs(a) / abs(b);
    cout << endl << c;
    return 0;
}