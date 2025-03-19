//(day-7) (27/2/25)
//write a program to check whether the number is palindrome or not
#include<stdio.h>
int main(){
	int n,original,reverse=0,digit;
	printf("enter n=");
	scanf("%d",&n);
	original=n;
	while(n>0){
	digit=n%10;
	reverse=reverse*10+digit;
	n=n/10;
	}
	if(original==reverse){
	printf("palindrome");
	}
	else{
	printf("not palindrome");
	}
	return 0 ;
}
