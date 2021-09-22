// dynamic_cast
#include <iostream>
#include <exception>
using namespace std;

class Base
{
  virtual void dummy() {}
};
class Derived : public Base
{
  int a;
};

int main()
{
  try
  {
    Base *pba = new Derived;
    Base *pbb = new Base;
    Derived *pd;

    pd = dynamic_cast<Derived *>(pba);
    if (pd == 0)
      cout << "Null pointer on first type-cast.\n";

    pd = dynamic_cast<Derived *>(pbb);
    if (pd == 0)
      cout << "Null pointer on second type-cast.\n";
  }
  catch (exception &e)
  {
    cout << "Exception: " << e.what();
  }
  return 0;
}

// static_cast

// static_cast can perform conversions between pointers to related classes, 
// not only upcasts (from pointer-to-derived to pointer-to-base), 
// but also downcasts (from pointer-to-base to pointer-to-derived). 
// No checks are performed during runtime to guarantee that the object being converted is in fact a full object of the destination type. 
// Therefore, it is up to the programmer to ensure that the conversion is safe. 
// On the other side, it does not incur the overhead of the type-safety checks of dynamic_cast.

// class Base {};
// class Derived: public Base {};
// Base * a = new Base;
// Derived * b = static_cast<Derived*>(a);


// reinterpret_cast

// reinterpret_cast converts any pointer type to any other pointer type, even of unrelated classes. 
// The operation result is a simple binary copy of the value from one pointer to the other. 
// All pointer conversions are allowed: neither the content pointed nor the pointer type itself is checked.

// class A { /* ... */ };
// class B { /* ... */ };
// A * a = new A;
// B * b = reinterpret_cast<B*>(a);
