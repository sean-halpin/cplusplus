// exceptions
#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 20;
    }
    catch (int e)
    {
        cout << "An exception occurred. Exception Nr. " << e << '\n';
    }
    return 0;
}

// try {
//   // code here
// }
// catch (int param) { cout << "int exception"; }
// catch (char param) { cout << "char exception"; }
// catch (...) { cout << "default exception"; }