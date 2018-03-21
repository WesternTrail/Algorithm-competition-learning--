#include <stdio.h>
#include <iostream>
#include <assert.h>
typedef const double db;
using namespace std;

//只输出又一个解的情况 
void solve(db a,db b,db d,db e,double *x,double *y)
{
	//如果不是只有一个解 
	assert(a*e-b*d!=0)
	*x = (c*e-b*f)/(a*e-b*d);
	*y = (c*d-a*f)/(b*d-a*e);
	return;
}

//引入标志，进行区别到底有多少个解 
void solve(db a,db b,db d,db e,double *x,double *y)
{
	int flag = 1;
	if(a*e-b*d!=0)
	{
		*x = (c*e-b*f)/(a*e-b*d);
		*y = (c*d-a*f)/(b*d-a*e);
	}
	else if(c*e-b*f==0)
		flag = 0;
	else if(c*e-b*f!=0)
		flag = -1
}

int main()
{
	double a,b,c,d,e,f;
	double x,y = 0;
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
	slove(a,b,c,d,e,f,&x,&y);
	printf("x = %.2lf\ny = %.2lf\n",x,y);
	slove1(a,b,c,d,e,f,&x,&y);
	if(flag == 1)
		printf("one result:x = %.2lf\ny = %.2lf\n",x,y);
	else if(flag ==0)
		printf("Unlimited answers");
	else
		printf("No answer");	
	return 0;
}
