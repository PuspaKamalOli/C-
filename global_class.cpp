#include <iostream>
using namespace std;
class arithmetic
{

public:
    int sum(int a, int b)
    {

        cout << "sum: " << a + b << endl;
    };

public:
    int sub(int a, int b)
    {

        cout << "sub: " << a - b;
    };
};

int main()
{
    arithmetic a;
    a.sum(3, 4);
    a.sub(7, 2);
}