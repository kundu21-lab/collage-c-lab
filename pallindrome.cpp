#include<stdio.h>
int main(){
	int n,original,reverse,digit ;
	printf("enter n");
	scanf ("%d",&n);
	original=n ;
	while (n>0) {
		digit=n%10 ;
		reverse =reverse*10+digit ;
		n=n/10 ;
	}
	if(original==reverse)
{ printf("pallindrome");}
else
	{printf("not pallindrome");
	
		}	return 0 ;
}
