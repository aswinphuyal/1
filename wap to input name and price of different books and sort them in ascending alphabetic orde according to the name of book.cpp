//wap to input name and price of different books and sort them in ascending alphabetic orde according to the name of book
#include<stdio.h>
#include<conio.h>
#include<string.h>
   struct book

{
char name[20],temp[20];
float price;
}
a[5];
main()
{
	int i,j;
	for (i=0;i<5;i++)
	{
		printf("enter name &price of %d book",i+1);
		scanf("%s%f",a[i].name,&a[i].price);
		
	}
	 for(i=0;i<5;j++)
	{
		for(j=i+1;j<5;j++)
		
		if(strcmp(a[i].name,a[j].name)>0)
		
		{
			strcpy(a[i].temp,a[i].name);
			strcpy(a[i].name,a[j].name);
			strcpy(a[j].name,a[i].temp);
			
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%s\t%f\n",a[i].name,a[i].price);
		
	}
	getch();
}
