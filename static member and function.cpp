#include <iostream>
using namespace std;
class A
{
private:
    int a;
    static int b;

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
    static void disp()
    {
        cout << b << endl; // a is not accesible to static function
    };
};
int A ::b = 0;
int main()
{
    A obj(10, 10), obj2(20, 20);
    obj.show();
    obj2.show();
    A::disp();
    return 0;
}