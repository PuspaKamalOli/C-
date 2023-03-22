#include <iostream>
using namespace std;
class base
{
public:
    virtual void show()
    {
        cout << "base class" << endl;
    };
};
class derived_1 : public base
{
    void show()
    {
        cout << "derived class 1" << endl;
    };
};
class derived_2 : public base
{
    void show()
    {
        cout << "derived class 2" << endl;
    };
};
int main()
{
    base *ptr, a;
    ptr = new derived_1;
    ptr->show();

    ptr = new derived_2;
    ptr->show();
    return 0;
}