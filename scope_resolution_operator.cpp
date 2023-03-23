
#include <iostream>
using namespace std;
int a = 5;
int main()
{
    cout << a << endl;
    ::a = 6;
    cout << ::a + 2;

    return 0;
}