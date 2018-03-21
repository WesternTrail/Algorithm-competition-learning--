#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <time.h>
#define STR_LEN 1000000
#define CHAR_Min 'a'
#define CHAR_Max 'z'
using namespace std;

int main()
{
	char str[STR_LEN+1] = {0};
	int i;
	
	srand(time(NULL));
	for(i = 0;i < STR_LEN;i++)
	{
		//rand()在C中产生[0,RAN_MAX]的伪随机数 
		str[i] = rand()%(CHAR_Max-CHAR_Min+1) + CHAR_Min;
	}
	
	printf("%s\n",str);
	printf("time used = %.2lf",(double)clock()/CLOCKS_PER_SEC);
}
