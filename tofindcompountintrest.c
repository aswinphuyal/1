#include<stdio.h>
#include<math.h>
 int main()
{
	float p=0,r=0,t=0,ci=0;
	printf(" enter principle,rateand time");
scanf("%f%f%f",&p,&r,&t);
ci = p* (pow((1 + r / 100), t));
printf(" the ci is %d",&ci);
return 0;	
}
