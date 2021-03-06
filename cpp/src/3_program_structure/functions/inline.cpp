// Calling a function generally causes a certain overhead (stacking arguments, jumps, etc...), and thus for very short functions, it may be more efficient to simply insert the code of the function where it is called, instead of performing the process of formally calling a function.

// Preceding a function declaration with the inline specifier informs the compiler that inline expansion is preferred over the usual function call mechanism for a specific function. This does not change at all the behavior of a function, but is merely used to suggest the compiler that the code generated by the function body shall be inserted at each point the function is called, instead of being invoked with a regular function call.

// function example
#include <iostream>
using namespace std;

inline int subtraction(int a, int b)
{
    int r;
    r = a - b;
    return r;
}

int main()
{
    int x = 5, y = 3, z;
    z = subtraction(7, 2);
    cout << "The first result is " << z << '\n';
    cout << "The second result is " << subtraction(7, 2) << '\n';
    cout << "The third result is " << subtraction(x, y) << '\n';
    z = 4 + subtraction(x, y);
    cout << "The fourth result is " << z << '\n';
}