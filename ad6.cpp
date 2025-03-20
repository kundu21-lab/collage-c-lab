#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,alpha,beta;
	printf("enter a,b,c");
	scanf("%f\t%f\t%f",&a,&b,&c);
	alpha = (-b+sqrt(b*b)-(4*a*c))/(2*a);
	beta = (-b-sqrt(b*b)-(4*a*c))/(2*a);
	printf("the roots are %f\t%f",alpha,beta);
	return 0;
}

