
#include <iostream>
using namespace std;
template <class T>
void show(T a, T b)
{
    cout << a << " " << b << endl;
};
int main()
{
    show("b", "b");
    show(2, 2);
};