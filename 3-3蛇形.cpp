#include <stdio.h>
#include <string.h>
#define MAXN 10
int a[MAXN][MAXN];

int main()
{
	int n,x,y,val = 0;
	//����n������ 
	scanf("%d",&n);
	//�Զ�ά����������� 
	memset(a,0,sizeof(a));
	//��һ�����ұ��Ǹ���Ϊ1 
	val = a[x=0][y=n-1] = 1;
	while(val < n*n)
	{
		//ѭ��������: 
		while(x < n-1&&!a[x+1][y])
			a[++x][y] = ++val;
		//ѭ�������ߣ�
		while(y-1 >= 0&&!a[x][y-1])
			a[x][--y] = ++val;
		//ѭ��������:
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
