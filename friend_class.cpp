#include <iostream>
using namespace std;
class A
{
private:
    int x = 90;
    int y = 80;

public:
    void hello()
    {
        cout << "hello world!!..." << endl;
    };
    friend class B;
};

class B
{
public:
    int sum(A a)
    {
        cout << "sum is: " << a.x + a.y;
    };
};
int main()
{

    A aa;
    B b;
    aa.hello();
    b.sum(aa);
}