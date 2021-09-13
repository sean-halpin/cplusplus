//
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct book1_t
{
    char title[50];
    char author[50];
    union
    {
        float dollars;
        int yen;
    } price;
} book1;

struct book2_t
{
    char title[50];
    char author[50];
    union
    {
        float dollars;
        int yen;
    };
} book2;

int main()
{
    book1.price.dollars = 12.3;
    book2.dollars = 14.5;

    cout << "book1.price.dollars = " << book1.price.dollars << endl;
    cout << "book2.dollars (anon) = " << book2.dollars << endl;

    return 0;
}
