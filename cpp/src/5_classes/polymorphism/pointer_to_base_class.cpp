// Polymorphism is the ability of a programming language to present the same interface for several different underlying data types.
// Polymorphism is the ability of different objects to respond in a unique way to the same message.

// One of the key features of class inheritance is that a pointer to a derived class is type-compatible with a pointer to its base class.
// Polymorphism is the art of taking advantage of this simple but powerful and versatile feature.

// pointers to base class
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
};

class Rectangle : public Polygon
{
public:
    int area()
    {
        return width * height;
    }
};

class Triangle : public Polygon
{
public:
    int area()
    {
        return width * height / 2;
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
    cout << rect.area() << '\n';
    cout << trgl.area() << '\n';
    return 0;
}