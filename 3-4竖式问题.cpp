#include <stdio.h>
#include <string.h>

int main()
{
	int count = 0,x,y,z,abc,de;
	char s[20],buf[99];
	//�������� 
	scanf("%s",s);
	for(abc = 111;abc <= 999;abc++)
		for(de = 11;de <= 99;de++)
		{
			x = abc*(de%10);
			y = abc*(de/10);
			z = abc*de;
			
			//������ʽ�г��ֵĸ������� 
			sprintf(buf,"%d%d%d%d%d",abc,de,x,y,z);
			//�ж���ʽ�еĸ��������Ƿ񶼳������ַ���s�� 
			int ok = 1;
			for(int i = 0;i < strlen(buf);i++)
				if(strchr(s,buf[i]) == NULL)
					ok = 0;
			
			if(ok)
			{
				printf("<%d>\n",++count);
				printf("%5d\nX%4d\n----\n%5d\n%4d\n----\n%5d\n\n",abc,de,x,y,z);
			}
		}
	printf("The number of solutions = %d\n",count);	
	return 0;
}
