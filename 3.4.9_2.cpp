#include <stdio.h>
#include <string.h>
#define MAXN 100

char buf[MAXN];
int main()
{
	int flag = 0;
	//�ļ��������:
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
	printf("ƽ������Ϊ:%.2lf",avg);
	return 0;
}
