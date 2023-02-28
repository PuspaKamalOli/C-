
#include <iostream>
using namespace std;
class A
{

    int a, b;

public:
    void x()
    {

        cout << "hello universe" << endl;
    };
};

class B : public A
{

public:
    void y()
    {
        cout << "hello world";
    };
};

class C : public B
{

public:
    void z()
    {
        x();
        y();
    };
};
int main()
{
    C obj;
    obj.x();
    obj.y();

    return 0;
}