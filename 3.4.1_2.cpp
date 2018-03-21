#include <stdio.h>
#include <stdlib.h> 
#include <iostream>
#define MAXN 100
using namespace std;

char buf[MAXN];
int main()
{
	fgets(buf,sizeof(buf),stdin);
	int val;
	val = atoi(buf);
	cout<<val<<endl;
	return 0;
}
