#include<stdio.h>

main()
{
	int a,b;
	int *x,*y,n;
	
	printf("Enter A Value = ");
	scanf("%d",&a);
	
	printf("Enter B Value = ");
	scanf("%d",&b);
	
	x=&a;
	y=&b;
	
	n=*y;
	*y=*x;
	*x=n;
	
	printf("%d",a);
	printf("%d",b);
}
