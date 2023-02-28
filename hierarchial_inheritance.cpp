
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
    void y()
    {
        cout << "hello world";
    };
};

class B : public A
{

public:
    void y()
    {
        x();
    };
};

class C : public A
{

public:
    void z()
    {
        y();
    };
};
int main()
{
    B obj_1;
    C obj_2;
    obj_1.x();
    obj_2.z();

    return 0;
}