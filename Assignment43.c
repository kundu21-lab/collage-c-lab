/* Day9(13/03/25)
Assignment44:write a c program to find out the factorial of a number */

#include<stdio.h>
int factorial(int);
int main(){
	int a;
	printf("enter a=");
	scanf("%d",&a);
	printf("%d",factorial(a));
	return 0 ;
}
int factorial(int n){
	if(n!=0){
	return n*factorial(n-1);
	}
	else{
	return 1;
	}
}

