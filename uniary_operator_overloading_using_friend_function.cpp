
#include <iostream>
using namespace std;
class demo
{
private:
    int a, b;

public:
    demo(int x, int y)
    {
        a = x;
        b = y;
    };
    void show()
    {
        cout << a << " " << b << endl;
    };

    void friend operator-(demo &obj);
};

void operator-(demo &obj)
{

    obj.a = -obj.a;
    obj.b = -obj.b;
};

int main()
{
    demo ob(3, -4);
    ob.show();
    -ob;
    ob.show();

    return 0;
}