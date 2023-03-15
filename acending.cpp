
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	char nam[20],add[20],temp[20],temp1[20];
}
a[100];
main()

{
	int i,j,n;
	printf("number of stu");
	scanf("%d",&n);
	
	for(i=0;i<n,i++)
	
	{
		printf("enter name and address");
		scanf("%s%s",a[i].nam,a[i].add);
		
	}
	for(i=0,i<n,i++)
	{
		for(j=i+j,j<n;j++);
		if(strcmp(a[i].nam,a[j].nam)>=0)
		{
			strcpy(a[i].temp,a[i].nam);
			strcpy(a[i].nam,a[j],nam);
			strcpy(a[j].nam,a[i].temp);
			
			stcpy(a[i].temp1,a[i].add);
			stcpy(a[i].add,a[j].add);
			strcpy(a[j].add,a[i].temp1);
		}
	}
	for(i-0,i<n;i++)
	printf("%s/t%s/t/n",a[i].nam,a[i].add);
	
	getch();
}

