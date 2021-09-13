#include <iostream>
using namespace std;

enum months_t
{
    january = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
} y2k;

int main()
{
    // Defining enum Gender
    enum Gender
    {
        Male,
        Female
    };

    // Creating Gender type variable
    Gender gender = Male;

    switch (gender)
    {
    case Male:
        cout << "Gender is Male";
        break;
    case Female:
        cout << "Gender is Female";
        break;
    default:
        cout << "Value can be Male or Female";
    }
    return 0;
}