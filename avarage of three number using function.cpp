//average of three number 
#include<stdio.h>
#include<conio.h>
int avg(int,int,int);
main()
{
	int a,b,c,d;
	printf("enter averagr of three number");
	scanf("%d%d%d",&a,&b,&c);
	d=avg(a,b,c);
	printf("averagr=%d",d);
	getch();
}
int avg(int x,int y,int z)
{
	int p;
	p=(x+y+z)/3;
	return p;
}
