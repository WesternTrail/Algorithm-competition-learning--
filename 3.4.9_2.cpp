#include <stdio.h>
#include <string.h>
#define MAXN 100

char buf[MAXN];
int main()
{
	int flag = 0;
	//文件输入输出:
	FILE *fin;
	fin = fopen("datain.txt","rb"); 
	fgets(buf,MAXN,fin);
	
	int len = strlen(buf);
	
	for(int i = 0;i < len;i++)
	{
		if(buf[i] == ' ')
		{
			flag++;
		}
	}
	
	int n = len - flag;
	double avg = (double)n/(flag+1);
	printf("平均长度为:%.2lf",avg);
	return 0;
}
