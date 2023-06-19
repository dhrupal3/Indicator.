#include<stdio.h>

main()
{
	char a[100];
	int n=100,i,c;
	char *p;
	
	printf("Enter Your Name  = ");
	gets(a);
	
	p=&a;


     printf("%d",strlen(p));

}
