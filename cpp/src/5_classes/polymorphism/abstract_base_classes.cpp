// Abstract base classes are something very similar to the Polygon class in the previous example.
// They are classes that can only be used as base classes,
// and thus are allowed to have virtual member functions without definition (known as pure virtual functions).
// The syntax is to replace their definition by =0 (an equal sign and a zero):

// abstract base class
#include <iostream>
using namespace std;

class Polygon
{
protected:
    int width, height;

public:
    void set_values(int a, int b)
    {
        width = a;
        height = b;
    }
    virtual int area(void) = 0;
};

// Notice that area has no definition; this has been replaced by =0, which makes it a pure virtual function.
// Classes that contain at least one pure virtual function are known as abstract base classes.

class Rectangle : public Polygon
{
public:
    int area(void)
    {
        return (width * height);
    }
};

class Triangle : public Polygon
{
public:
    int area(void)
    {
        return (width * height / 2);
    }
};

int main()
{
    Rectangle rect;
    Triangle trgl;
    Polygon *ppoly1 = &rect;
    Polygon *ppoly2 = &trgl;
    ppoly1->set_values(4, 5);
    ppoly2->set_values(4, 5);
    cout << ppoly1->area() << '\n';
    cout << ppoly2->area() << '\n';
    return 0;
}