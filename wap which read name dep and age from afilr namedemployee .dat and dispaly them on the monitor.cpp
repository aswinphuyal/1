#include<stdio.h>
#include<conio.h>
struct employee
{
	char name[20],dept[20];
	int age;
	
}
 e
;
main()
{
	FILE *fp;
	fp=fopen("employee.dat","r");
	printf("\n Name \t Department \t Marks");
	
	while((fscanf(fp,"%s%s%d",e.name,e.dept,&e.age))!=EOF)
	{
		printf("\n%s%s%d\n",e.name,e.dept,e.age);
	}
	fclose(fp);
	getch();
}
