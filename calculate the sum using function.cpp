//calculate sum of two number 
#include<stdio.h>
#include<conio.h>
int sum(int,int);
main()

{
	int a,b,c;
	printf("enter any number ");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("sum=%d",c);
	getch();
}
int sum(int x,int y)
{
	int p;
	p=x+y;
	return p;
	
}
