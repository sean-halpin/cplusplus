//
#include <iostream>
#include <string>
using namespace std;

int main()
{
    typedef string myStringType;
    myStringType mystr;

    cout << "What's your name? ";
    getline(cin, mystr);
    cout << "Hello " << mystr << ".\n";


    using myStringType = string;
    myStringType mystrTwo;

    cout << "What's your name again? ";
    getline(cin, mystrTwo);
    cout << "Hello " << mystrTwo << ".\n";
    return 0;
}