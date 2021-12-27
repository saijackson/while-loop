#include<stdio.h>
 main()
{ 
int num,a,pro=1;
printf("enter a num ");
scanf("%d",&num);
  for(a=1;a<=num;a++)
  {
    if(a%2!=0)
    pro=pro*a;
    {
    	if (a%2!=0)
    	printf("%d\t",a);
	}
    
}
printf("\t%d",pro);
}

