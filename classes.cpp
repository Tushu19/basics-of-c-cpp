#include <iostream>
#include <iomanip>
using namespace std;
//constructor always in public
//no return type for construct
//same name as class
//can have more thn one constructore
//is called when object is created
//destructor are same as constructor but there can be only one destructor and it takes no argument
class timeclass
{
private:
    int hr, min, sec;

public:
    timeclass() //constructor
    {
        hr = min = sec = 0;
    }
    timeclass(int a, int b, int c) //constructor
    {
        hr = a;
        min = b;
        sec = c;
    }
    ~timeclass() //destructor
    {
        cout << "\n bye bye tata khatam";
    }
    void set_time()
    {
        cout << "Enter time : ";
        cin >> hr >> min >> sec;
    }
    void disp_time()
    {
        cout << "\n"
             << hr << ":" << min << ":" << sec;
    }
    void seconds()
    {
        cout << "\n seconds " << hr * 60 * 60 + min * 60 + sec;
    }
};
int main()
{
    timeclass t1, t2(4, 30, 56);
    // t1.set_time();
    // t2.set_time();
    t1.disp_time();
    t2.disp_time();
    t1.seconds();
    t2.seconds();
    return 0;
}