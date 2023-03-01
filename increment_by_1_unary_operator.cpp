
#include <iostream>
using namespace std;
class A
{
private:
    int a, b;

public:
    A(int x, int y)
    {
        a = x;
        b = y;
    };
    void show()
    {
        cout << a << ", " << b << endl;
    };
    void operator++()
    {

        ++a;
        ++b;
    };
};

int main()
{
    A obj(2, 3);
    ++obj;
    obj.show();

    return 0;
}