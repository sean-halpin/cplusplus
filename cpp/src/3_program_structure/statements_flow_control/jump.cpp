// break loop example
#include <iostream>
using namespace std;

int main()
{
    for (int n = 10; n > 0; n--)
    {
        cout << n << ", ";
        if (n == 3)
        {
            cout << "countdown aborted!\n";
            break;
        }
    }

    for (int n = 10; n > 0; n--)
    {
        if (n == 5)
            continue;
        cout << n << ", ";
    }
    cout << "liftoff!\n";

    int n = 10;
mylabel:
    cout << n << ", ";
    n--;
    if (n > 0)
        goto mylabel;
    cout << "liftoff!\n";
}