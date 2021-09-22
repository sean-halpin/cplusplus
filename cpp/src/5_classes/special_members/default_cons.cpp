// Member function	typical form for class C:
// Default constructor	C::C();
// Destructor C::~C();
// Copy constructor C::C(const C &);
// Copy assignment C &operator=(const C &);
// Move constructor C::C(C &&);
// Move assignment C &operator=(C &&);

// classes and default constructors
#include <iostream>
#include <string>
using namespace std;

class Example3
{
    string data;

public:
    Example3(const string &str) : data(str) {}
    Example3() {}
    const string &content() const { return data; }
};

int main()
{
    Example3 foo;
    Example3 bar("Example");

    cout << "bar's content: " << bar.content() << '\n';
    return 0;
}