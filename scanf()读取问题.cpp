//测试getchar（）读取问题 
#include <stdio.h>
int main()
{
	int c = 0;
	int i = 0;
	while((c = getchar())!= EOF)
	{
		printf("int c:%d\n",c);
		i++;
	}
	printf("int c:%d\n",c);
	printf("getchar()读取次数:%d",i);
}


