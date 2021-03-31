#include <iostream>
using namespace std;

class a
{
    private :
    int x,y;
    public:
    a(int x, int y)
    {
        this->x=x;
        this->y=y;
    }
    void display();
    friend void printvalue(a &a1);
};
void a:: display()
    {
        cout<<"x= "<<x<<" y= "<<y<<endl;
    }
void printvalue(a &a1)
{
    a1.x=10;
    a1.y=20;
    cout<<"In friend function "<<endl;
    cout<<"x= "<<a1.x<<" y= "<<a1.y<<endl;
}

int main() {
    a b(5,6);
    b.display();
    printvalue(b);
	return 0;
}
