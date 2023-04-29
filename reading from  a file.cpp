#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream myfile;
    myfile.open("hello.txt");
    if (!myfile.is_open())
    {
        cout << "file not found!!.." << endl;
    }
    else
    {
        string line;
        while (myfile.good())
        {
            getline(myfile, line);
            cout << line << endl;
        };
    };
};