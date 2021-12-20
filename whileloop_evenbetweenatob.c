#include<stdio.h>
int main()
{
int a,b,s=0;
scanf("%d",&a);
scanf("%d",&b);
while (a<=b)
{
	s=a/2==0;
	printf("%d\n",a);
	
	a=a+2;
}
return 0;
}

