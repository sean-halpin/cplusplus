
// operator    description
// +           addition
// -           subtraction
// *           multiplication
// /           division
// %           modulo

// expression	        equivalent to...
// y += x;             y = y + x;
// x -= 5;             x = x - 5;
// x /= y;             x = x / y;
// price *= units + 1; price = price * (units+1);

// conditional operator
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    a = 2;
    b = 7;
    c = (a > b) ? a : b;

    cout << c << '\n';
}