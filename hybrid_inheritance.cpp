#include <iostream>
using namespace std;
class A
{
public:
    void v()
    {

        cout << "a ";
    };
    void w()
    {

        cout << "b ";
    };
};
class B : public A
{

public:
    void x()
    {
        v();
        w();
    };
};
class C : public A
{
public:
    void y()
    {
        cout << "c ";
        cout << "d ";
    };
};
class D : public C, public B
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
    D ob;
    ob.z();
}