#include <iostream>
using namespace std;

int funtion(int m)
{
	cout<<"m的地址是："<<&m<<endl;
	return m*m;
}
int main()
{
	int n = 3;
	funtion(n);
	cout<<"m的地址是："<<&n<<endl;
	return 0;
}
