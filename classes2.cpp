#include <iostream>
using namespace std;
class shape
{
    public:
    shape()
    {cout<<"In shape constructor";}
    int no;
    int length;
    int breadth;
};
class triangle: public shape
{
    public:
    triangle()
    {
        cout<<"\nIn triangle constructor";
        no=3;
        
    }
    void initialize(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int getarea()
    {
        return length*breadth;
    }
};
int main() {
triangle t;
t.initialize(10,12);
cout<<"Area of triangle is "<<t.getarea();	
	return 0;
}
