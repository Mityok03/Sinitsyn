#include<iostream>

using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b;
    c = a * a + b * b;
    cout << endl << c;
    c = a * a - b * b;
    cout << endl << c;
    c = a * a * b * b;
    cout << endl << c;
    c = a * a / b * b;
    cout << endl << c;
}