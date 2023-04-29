#include <iostream>
using namespace std;
class A
{
private:
    int x, y;

public:
    A(int a, int b)
    {
        x = a;
        y = b;
    };
    operator float()
    {
        float a = x + y / 2.0;
        return a;
    }
};
int main()
{
    A obj(10, 13);
    float x = float(obj);
    cout << x;
};