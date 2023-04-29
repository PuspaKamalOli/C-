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
    void show()
    {
        cout << x << " , " << y << endl;
    };
};
int main()
{
    int x = 23;
    float y = 23.99;
    A obj(x, y);
    obj.show();
};