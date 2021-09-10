#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    cout << "Enter Integer" << endl;
    cin >> x;
    if (x > 0)
        cout << "x is positive";
    else if (x < 0)
        cout << "x is negative";
    else
        cout << "x is 0";
}