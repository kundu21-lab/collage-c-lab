#include<stdio.h>
void fibonachi(int ,int,int) ;
int main()
{
	int n;
	printf("enter=n");
	scanf("%d",&n);
	printf("%d %d",0,1);
	fibonachi(0,1,(n-2));
	return 0 ;
}
void fibonachi(int a,int b,int n){
	if(n>0){
		printf("%d",a+b);
		fibonachi(b,a+b,n-1);
	}
}
