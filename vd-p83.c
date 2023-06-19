#include<stdio.h>

main()
{
	int a[100];
	int n,i;
	int *p;
	
	printf("Enter Array Value = ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	p=&a[n-1];
	
	for(i=0;i<n;i++)
	{
		printf("%u = %d\n",p,*p--);
	}

}
