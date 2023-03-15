#include<stdio.h>
#include<conio.h>
main()
{
	int a=0,b=1,c,n,i;
	printf("%d\t%d",a,b);
	printf("enter a number ");
	scanf("%d",&n);
	for (i=1;i<n-1;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);
		
	}
	getch();
}
