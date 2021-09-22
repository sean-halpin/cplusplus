// Access	                    public	protected	private
// members of the same class	yes	    yes	        yes
// members of derived class	    yes	    yes	        no
// not members	                yes	    no	        no

// constructors and derived classes
#include <iostream>
using namespace std;

class Mother
{
public:
    Mother()
    {
        cout << "Mother: no parameters\n";
    }
    Mother(int a)
    {
        cout << "Mother: int parameter\n";
    }
};

class Daughter : public Mother
{
public:
    Daughter(int a)
    {
        cout << "Daughter: int parameter\n\n";
    }
};

class Son : public Mother
{
public:
    Son(int a) : Mother(a)
    {
        cout << "Son: int parameter\n\n";
    }
};

int main()
{
    Daughter kelly(0);
    Son bud(0);

    return 0;
}