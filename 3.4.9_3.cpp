#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXN 100

//这个用来读取含有字母的字符串 
char str[MAXN];
int main()
{
	int n,product = 1,num;
	
	while(1)
	{
		num = scanf("%d",&n);
		if(num == EOF)
			break;
		if(num == 1)
			product = (product*(n%1000))%1000;
		if(num == 0)
			fgets(str,MAXN,stdin);
	}
	
	printf("%03d\n",(product>=0?product:-product));
	return 0;
}

