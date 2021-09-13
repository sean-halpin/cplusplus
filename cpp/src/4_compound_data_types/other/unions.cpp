//
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

union Job
{
    float salary;
    int workerNo;
} j;

union mix_t
{
    int l;
    struct
    {
        short hi;
        short lo;
    } s;
    char c[4];
} mix;

void out_as_hex(Job c);

int main()
{
    j.salary = 12.3;
    // out_as_hex(j);
    cout << "Salary = " << j.salary << endl;
    cout << "Number of workers = " << j.workerNo << endl;

    // when j.workerNo is assigned a value,
    // j.salary will no longer hold 12.3
    j.workerNo = 100;

    cout << "Salary = " << j.salary << endl;
    cout << "Number of workers = " << j.workerNo << endl;

    return 0;
}

void out_as_hex(Job c)
{
    cout << hex << setw(2) << setfill('0') << c.workerNo << endl;
}