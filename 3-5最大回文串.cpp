#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXN 5000+10

char buf[MAXN];
char s[MAXN];	//�������������Ĵ�д��ĸ 
char p[MAXN];

int main()
{
	int n,m = 0,max = 0;
	
	int i,j,k,x,y;
	fgets(buf,MAXN,stdin);
	
	//���Ƚ��ַ����г��˱��������ȫ��ת��Ϊ��д
	n = strlen(buf);
	for(i = 0;i < n;i++)
		if(isalpha(buf[i]))
		{
			p[m] = i;
			s[m++] = toupper(buf[i]);
		}
	 
	//�������ж��Ƿ�Ϊ�����Ĵ�:o(n^3)������ 
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


