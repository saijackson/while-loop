#include<stdio.h>
int main()
{
	int i=1,n,s=0;
	scanf("%d",&n);
	while(i<n)
	{
		printf("%d\n",i);
		s=s+i;
		i++;
	}
printf("sum of first n natural numbers%d\n",s);
return 0;
}

