//(day-7) (27/2/25)
//write a program to find the sum of the digits of a number
#include<stdio.h>
int main(){
	int n,c,sum=0;
	printf("enter n=");
	scanf("%d",&n);
	while(n>0){
	c=n%10;
	n=n/10;
	
	sum=sum+c;
	}
	printf("%d",sum);
	return 0 ;
	
} 
