#include<stdio.h>
int main()
{
	int n,i,c=0 ;
	printf ("enter the number");
	scanf ("%d",&n);
	if (n==1)
	{
		printf("1 is neither prime nor composite.",n);	
	}for (i=2;i<=2;i++) 
	 {if (n%1==0)
	 c++ ;
	} if (c==0)
	{
		printf("%d is a prime number \n",n) ;
	}else { printf ("%d is not a prime number \n",n) ;
	}
	return 0 ;
}
