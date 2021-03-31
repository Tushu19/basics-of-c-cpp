#include <iostream>
using namespace std;
class box
{
    private:
    int length,breadth,height;
    public:
    box()
    {
        ;
    }
    box(int l,int b, int h)
    {
        length=l;
        breadth=b;
        height=h;
    }
    void display ()
    {
        cout<<"lenght= "<<length<<endl;
        cout<<"breadth= "<<breadth<<endl;
        cout<<"height= "<<height<<endl;
  
    }
    box operator+(box &b)
    {
        box b3;
        b3.length=this->length+b.length;
        b3.breadth=this->breadth+b.breadth;
        b3.height=this->height+b.height;
        return b3;
    }
};
int main() {
    box b1(5,6,7); box b2(10,10,10);
    b1.display();
   b2.display();
    box b3=b1+b2;
    b3.display();
	return 0;
}
