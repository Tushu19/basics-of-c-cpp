#include <iostream>
using namespace std;
template <typename T>
T myMax(T a,T b)
{
    return (a>b?a:b);
}
int main() {
	cout<<myMax<int>(3,4)<<endl;
	cout<<myMax<char>('d','b')<<endl;
	return 0;
}
