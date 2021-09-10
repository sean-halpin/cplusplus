// int foo;        // global variable

// int some_function ()
// {
//   int bar;      // local variable
//   bar = 0;
// }

// int other_function ()
// {
//   foo = 1;  // ok: foo is a global variable
//   bar = 2;  // wrong: bar is not visible from this function
// }

// inner block scopes
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 20;
    {
        int x;  // ok, inner scope.
        x = 50; // sets value to inner x
        y = 50; // sets value to (outer) y
        cout << "inner block:\n";
        cout << "x: " << x << '\n';
        cout << "y: " << y << '\n';
    }
    cout << "outer block:\n";
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';
    return 0;
}