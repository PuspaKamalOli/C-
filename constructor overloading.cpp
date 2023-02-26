#include <iostream>
using namespace std;
class A
{
    int a, b;
    float c;

public:
    A()
    {
        cout << "enter 2 numbers";
        cin >> a >> b;
        cout << a << " " << b << endl;
    };

    A(int x, int y)
    {

        a = x;
        b = y;
        cout << a << " " << b << endl;
    };

    A(int x, float y)
    {

        a = x;
        c = y;
        cout << a << " " << c << endl;
    };
};

int main()
{
    A obj;
    A obj_2(30, 40);
    A obj_3(10, 120.2f);
}