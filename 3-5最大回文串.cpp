#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXN 5000+10

char buf[MAXN];
char s[MAXN];	//保存除标点符号外的大写字母 
char p[MAXN];

int main()
{
	int n,m = 0,max = 0;
	
	int i,j,k,x,y;
	fgets(buf,MAXN,stdin);
	
	//首先将字符串中除了标点符号外的全部转化为大写
	n = strlen(buf);
	for(i = 0;i < n;i++)
		if(isalpha(buf[i]))
		{
			p[m] = i;
			s[m++] = toupper(buf[i]);
		}
	 
	//接下来判断是否为最大回文串:o(n^3)暴力法 
	for(i = 0;i < m;i++)
		for(j = i;j < m;j++)
		{
			int ok = 1;
			for(k = i;k <= j;k++)
				if(s[k]!=s[i+j-k]) 
					ok = 0;
			if(ok&&j-i+1 > max)
			{
				max = j-i+1;
				x = p[i];
				y = p[j];
			}
		}
	
	for(int i = x;i <= y;i++)
	{
		printf("%c",buf[i]);
	}
	printf("\n");
	return 0; 
}


