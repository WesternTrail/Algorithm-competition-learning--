#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXN 100

//���������ȡ������ĸ���ַ��� 
char str[MAXN];
int main()
{
	int n,product = 1,num;
	
	while(scanf("%d",&n)==1&&)
	{
		product = (product*(n%1000))%1000;
	}
	printf("%03d\n",(product>=0?product:-product));
	return 0;
}

