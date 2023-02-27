
#include <iostream>
using namespace std;
class A
{

    int a, b;

public:
    A(int x, int y)
    {
        a = x;
        b = y;
    };

    void show()
    {

        cout << a << " " << b << endl;
    };
    void operator-()
    {

        a = -a;
        b = -b;
    };
};

int main()
{
    A obj(-2, 3);
    obj.show();
    -obj;
    obj.show();

    return 0;
}