#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
    string keywaord[16][10] = {"defer", "char", "int", "void"};
    string str[10];
    int flag = 0;
    cout << "Enter keywaord : ";
    cin >> str;
    for (int i = 0; i < 4; i++)
    {
        if (!strcmp(str, keywaord[i]))
        {
            cout << endl
                 << "found";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << endl
             << "Not found";
    return 0;
}