#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <iostream>
#define MAXN 100
using namespace std;

char buf[MAXN];
int main()
{
	int va1 = 123;
	char va2 = 'a';
	if(isdigit(va1))
		cout<<va1<<"��һ������"<<endl;
	if(isalpha(va2))
		cout<<va2<<"��һ����ĸ"<<endl;
	return 0;
}
