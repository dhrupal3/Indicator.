#include<stdio.h>

main()
{
	int a[100];
	int n,i,x,*y;
	
	printf("Enter Your Array Value = ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	y=&a;
	
	for(i=0;i<n;i++)
	{
		printf("%u = %d\n",y+i,*(y+i));
	}
	
	
	
}
