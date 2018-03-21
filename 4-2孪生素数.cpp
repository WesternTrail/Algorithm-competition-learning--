#include <stdio.h>
#include <math.h>
#include <iostream>
#include <assert.h>
using namespace std;

int is_prime(int x)
{
	int i,m;
	assert(x>=0);
	if(x==1) return 0;
	//double类型四舍五入的写法 
 	m = floor(sqrt(x + 0.5));
 	for(i = 2;i <= m;i++)
 		if(x%i==0) return 0;
 	return 1;
}
int main()
{
	int i,m;
	scanf("%d",&m);
	for(i = m-2;i >= 3;i--)
	{
		if(is_prime(i)&&is_prime(i+2))
		{
			printf("%d %d",i,i+2);
			break;
		}
	}
	return 0;
}
