#include<stdio.h>
#include<math.h>
int main(){
	
	int n;
	double p,r,t,si,a,ci;
printf("program for simple interest \n");

printf("the value of principle amount is\n");
scanf("%lf",&p);
	
	printf("the value of rate is\n");
scanf("%lf",&r);

	
	printf("the value of time is\n");
scanf("%lf",&t);

	si=p*r*t;
	
	printf("the value of calculated simple interest is %lf \n",si);

	printf("the value of n showing number of times interest is compounded per year is\n");
scanf("%d",&n);
r=r/100;
a= p*pow((1+r/n),n*t);
	ci= a-p;
	printf("\n total amount a=%lf\n",a);
	printf("the value of calculated compound interest is %lf \n",ci);

	
	return 0;
}
