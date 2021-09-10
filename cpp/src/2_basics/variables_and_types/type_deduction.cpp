#include <iostream>
using namespace std;

int main()
{
    // declaring variables:
    int result;

    // process:
    auto a = 5;
    decltype(a) b;
    b = 2;
    a = a + 1;
    result = a - b;

    // print out the result:
    cout << result << endl;

    // terminate the program:
    return 0;
}
