#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <iostream>
#define MAXN 100
using namespace std;

char buf[MAXN];
int main()
{
	fgets(buf,sizeof(buf),stdin);
	char *ret;
	ret = strchr(buf,'i');
	printf("i֮����ַ�����: %s",ret);
	return 0;
}
