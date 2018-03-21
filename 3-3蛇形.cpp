#include <stdio.h>
#include <string.h>
#define MAXN 10
int a[MAXN][MAXN];

int main()
{
	int n,x,y,val = 0;
	//输入n的数据 
	scanf("%d",&n);
	//对二维数组进行清零 
	memset(a,0,sizeof(a));
	//第一行最右边那个数为1 
	val = a[x=0][y=n-1] = 1;
	while(val < n*n)
	{
		//循环向下走: 
		while(x < n-1&&!a[x+1][y])
			a[++x][y] = ++val;
		//循环向左走：
		while(y-1 >= 0&&!a[x][y-1])
			a[x][--y] = ++val;
		//循环向上走:
		while(x-1 >= 0&&!a[x-1][y])
			a[--x][y] = ++val;
		while(y < n-1&&!a[x][y+1])
			a[x][++y] = ++val;	
	}
	
	for(x=0;x < n;x++)
	{
		for(y = 0;y < n;y++)
			printf("%3d",a[x][y]);
		printf("\n");
	}
	return 0;
}
