#include <stdio.h>

int main()
{
	int i,n,a[101] = {0},p,max;
	printf("请输入学生个数:");
	scanf("%d",&n);
	
	for(i = 0;i < n;i++)
	{
		scanf("%d",&p);
		a[p]++;
	}
	
	for(max = a[0],i = 1;i < n;i++)
	{
		if(a[i] >= max)
			max = a[i];
	}
	
	for(i = 0;i < n;i++)
	{
		if(a[i] == max) 
		printf("%d",i);
	}
	
	return 0;
}
