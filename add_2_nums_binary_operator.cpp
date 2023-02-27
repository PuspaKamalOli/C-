
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

    demo operator+(demo obj)
    {
        demo temp(0, 0);
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    };
};
int main()
{
    demo ob(10, 20), ob2(30, 40), ob3(0, 0);
    ob2 = ob + ob3;
    ob2.show();
}
