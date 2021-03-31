#include <iostream>
using namespace std;
class shape
{
    protected:
    int length;
    int breadth;
    public:
    virtual int getarea()=0;
    //this is pure virtual function and 
    //makes it necssary for child class to declare or implement or override 
    //this function
    //you cannot create an object of this class because it contains a pure virtual
    //function and this becomes an abstract class
};
class triangle: public shape
{
    public:
    triangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int getarea()
    {
        return (length*breadth)/2;
    }
};
class rectangle: public shape
{
    public:
    rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int getarea()
    {
        return (length*breadth);
    }
};
int main() {
    triangle t(8,10);
    cout<<"\nArea of triangle is : "<<t.getarea();
    rectangle r(10,12);
     cout<<"\nArea of rectangle is : "<<r.getarea();
	
	return 0;
}
