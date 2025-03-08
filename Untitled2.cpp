#include<stdio.h>
//Calculating area and perimeter of a reactangle
#include<math.h>
int main()
{
	float l,b,a,p;
	printf ("Enter the length of the reactangle :");
	scanf ("%f",&l);
	printf ("Enter the breadth of the reactangle :");
	scanf ("%f",&b);
	a=l*b;
	p=2*(l+b);
	printf ("The area of the reactangle is :%f\n",a);
	printf ("The perimeter of the reactangle is :%f\n",p);
	return 0;
}
