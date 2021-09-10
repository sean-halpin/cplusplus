// Namespaces are particularly useful to avoid name collisions. For example:

// namespaces
#include <iostream>
using namespace std;

namespace foo
{
    int value() { return 5; }
}

namespace bar
{
    const double pi = 3.1416;
    double value() { return 2 * pi; }
}

int main()
{
    cout << foo::value() << '\n';
    cout << bar::value() << '\n';
    cout << bar::pi << '\n';
    return 0;
}

// Namespaces can be split: Two segments of a code can be declared in the same namespace:

namespace foo { int a; }
namespace bar { int b; }
namespace foo { int c; }
