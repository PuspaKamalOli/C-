
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter two numbers: ";
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw b;
        }
        else
        {
            cout << a / b;
        };
    }
    catch (int x)
    {
        cout << "Error!!! Can,t divide by " << x;
    };

    return 0;
};