#include <stdio.h>
#include <stdlib.h> 
#include <iostream>
#define MAXN 100
using namespace std;

char a[MAXN];
int main()
{
	int i = 0;
	char s;
	int val;
	while((s=getchar())!='\n')
	{
		a[i++] = s;
	}
	val = atoi(a);
	cout<<val<<endl;
	return 0;
}
