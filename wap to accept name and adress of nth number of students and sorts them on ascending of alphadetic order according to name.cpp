//wap to accept name and adress of nth number of students and sorts them on ascending of alphadetic order according to name 
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct students
{
	char name[20],add[20],temp[20],temp1[20];
	
}
a[100];
main()
{
	int i,j,n;
	printf("enter the number of studnts");
	scanf("%d",&n);
	for (j=0;i<n;i++)
	{
		printf("enter thr name and adress of students");
		scanf("%s%s",a[i].name,a[i].add);
		
	}
	for (i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		if(strcmp(a[i].name,a[j].name)>=0)
		{
			strcpy(a[i].temp,a[i].name);
			strcpy(a[i].name,a[j].name);
			strcpy(a[j].name,a[i].temp);
			
			strcpy(a[i].temp1,a[i].name);
			strcpy(a[i].name,a[j].name);
			strcpy(a[j].name,a[i].temp1);
			
			
		}
	}
	for(i=0;i<n;i++)
	printf("%s\t%s\t\n",a[i].name,a[i].add);
	getch();
	
}

