#include <stdio.h>
#include <iostream>
#include <string.h>
#include <ctype.h>
#define MAXN 100
using namespace std;

char buf[MAXN];
int main()
{
	char f;
	int a,b,c,n;
	cin>>n;
	while(n--)
	{
		scanf("%d",&a);
		scanf("%c",&f); 
		//3    +4时，给f重复读入 
		while(f!='+'&&f!='-'&&f!='*')	scanf("%c",&f);
		scanf("%d",&b);
		if(f=='+')
			c = a+b;
		else if(f=='-')
			c = a-b;
		else
			c = a*b;
		printf("%d",c);
	}
	return 0;
}
