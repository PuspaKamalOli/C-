#include <iostream>
using namespace std;
template <class T>
class A
{
private:
    T a, b;

public:
    A(T x, T y)
    {
        a = x;
        b = y;
    };
    void show()
    {
        cout << a << " " << b << endl;
    };
};
int main()
{
    A obj(3.23, 3.11);
    A obj2("a", "b");
    obj.show();
    obj2.show();
}