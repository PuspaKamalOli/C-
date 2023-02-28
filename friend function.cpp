#include <iostream>
using namespace std;
class arithmetic
{
private:
    int z = 10;

public:
    int sum(int a, int b)
    {

        cout << "sum: " << a + b << endl;
    };
    friend int summy(arithmetic b);
};

int summy(arithmetic b)
{
    cout << b.z + 10;
};

int main()
{
    arithmetic a;
    a.sum(3, 4);
    summy(a);
}
