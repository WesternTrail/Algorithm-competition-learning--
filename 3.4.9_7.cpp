#include <iostream>
#include <stdio.h>
#define MAXN 5000
using namespace std;

char a[MAXN];
int main()
{
	int i = 0,j = 0,temp = 0;
	while(scanf("%c",&a[i]) == 1)
	{
		for(j = 1;j <= 8;j++){
			if((j==1)&&((temp = a[i] - 96) <= 3)&&(a[i]!='\n')){
				printf("%c%d",a[i],temp);break;
			}
			if((j==2)&&((temp = a[i] - 99) <= 3)&&(a[i]!='\n')){
				printf("%c%d",a[i],temp);break;
			}
			if((j==3)&&((temp = a[i] - 102) <= 3)&&(a[i]!='\n')){
				printf("%c%d",a[i],temp);break;
			}
			if((j==4)&&((temp = a[i] - 105) <= 3)&&(a[i]!='\n')){
				printf("%c%d",a[i],temp);break;
			}
			if((j==5)&&((temp = a[i] - 108) <= 3)&&(a[i]!='\n')){
				printf("%c%d",a[i],temp);break;
			}
			if((j==6)&&((temp = a[i] - 111) <= 4)&&(a[i]!='\n')){
				printf("%c%d",a[i],temp);break;
			}
			if((j==7)&&((temp = a[i] - 115) <= 3)&&(a[i]!='\n')){
				printf("%c%d",a[i],temp);break;
			}
			if((j==8)&&((temp = a[i] - 118) <= 4)&&(a[i]!='\n')){
				printf("%c%d",a[i],temp);break;
			}
		}
		i++;
	}
}
