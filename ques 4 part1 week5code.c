#include<stdio.h>

int main(){
	int a,b,c;
	
		printf("program for determining the type of triangle \n");
		
	printf("the three sides of triangle is a,b,c \n");
	
	printf("enter value of side a\n");
scanf ("%d",&a);

	printf("enter value of side b\n");
	
scanf ("%d",&b);
		printf("enter value of side c\n");

scanf ("%d",&c);
if( a >= b+c || b >= a+c || c >= a+b){
	printf(" no triangle is formed\n")	;
}else{
printf(" triangle is formed\n");
}
	return 0;
}
