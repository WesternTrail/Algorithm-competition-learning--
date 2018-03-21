#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int b,n;
	int a[10];
	scanf("%d %d",&b,&n);
	int i = 0;
	while(n > 0)
	{
		a[i] = n%b;
		n/=b;
		i++;
	}
	for(int j = i-1;j >=0;j--)
	{
		cout<<a[j];
	}
	
	return 0;
}
