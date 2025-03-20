#include<stdio.h>
int main()
{
	int number,reverse=0,digit;
	printf("enter a number");
	scanf("%d",&number);
	while(number>0) {digit=number%10;
	reverse=reverse*10+digit;
	number=number/10;} 
	printf("sum of the digit %d",reverse);
	return 0 ;	
	}
	
