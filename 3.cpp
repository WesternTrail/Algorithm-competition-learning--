#include <iostream>
using namespace std;

int funtion(int m)
{
	cout<<"m�ĵ�ַ�ǣ�"<<&m<<endl;
	return m*m;
}
int main()
{
	int n = 3;
	funtion(n);
	cout<<"m�ĵ�ַ�ǣ�"<<&n<<endl;
	return 0;
}
