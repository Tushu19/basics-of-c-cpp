#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    cout << endl;
    if (n % 5 == 0 && n % 3 == 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
    //getch();
}