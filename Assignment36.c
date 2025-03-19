//(day-7) (27/2/25)
//write a program to check whether a number is armstrong
#include<stdio.h>
#include<math.h>
int main(){
	int n,digit,c=0,original,temp,sum=0;
	printf("enter n=");
	scanf("%d",&n);
	original=n;
	temp=n;
	while(temp>0){
	temp=temp/10;
	c++;
	}
	temp=n;
	while(temp>0){
	digit=temp%10;
	sum=sum+(pow(digit,c));
	temp=temp/10;
	}
	if(original==sum){
	printf("armstrong number");
	}
	else{
	printf("not an armstrong number");
	}
	return 0 ;
}
