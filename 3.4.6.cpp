#include <iostream>
#include <stdio.h>
#define MAXN 100
using namespace std;

char s[MAXN];
int main()
{
	int HH,MM,SS;
	cin>>HH>>MM>>SS;
	sscanf(s,"%2d:%2d:%2d",&HH,&MM,&SS);
	printf("%s\n",s);
	return 0;
}
