#include<stdio.h>
int main()                
{
int m,i=1,s=0,n;
scanf("%d",&m);
printf("till \n");             //multiplication table
scanf("%d",&n);
while(i<=n)
{
	printf("multiplication of %d"" X %d"  " = ",m,i);
	s=m*i;                                               
	printf("%d\n",s);
	i++;
	
}

return 0;
}

