u#include <stdio.h>
int reversenumber (int num)
{
	int rev =0 ;
	while (num>0)
	{
		rev =rev*10 +(num%10) ;
		num=num/10 ;
	} return rev ;
}
void reverseelements (int arr[],int n)
{
	printf("reverseelements:");
	for(int i=0;i<n;i++)
	{
		printf("%d",reversenumber(arr [i]));
	}
	printf ("\n");
}
int main ()
{
	int arr[]={123,456,789,012};
	int n=sizeof (arr)/sizeof (arr[0]);
	reverseelements (arr,n);
	return 0 ;
}
