
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream myfile;
    myfile.open("hello.txt");
    if (!myfile.is_open())
    {
        cout << "unable to open";
    }
    {
        myfile << "hello world";
        myfile.close();
    };

    return 0;
}