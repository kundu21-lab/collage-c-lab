// Online C compiler to run C program online
/*#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(int i=1 ; i<=10 ;i++){
        
        printf("%d * %d = %d\n",n,i,(n*i));
    }
}*/

#include <stdio.h>
int main()
{
	int n;
	printf ("enter =n");
	scanf ("%d", &n);
	for (int i=1 ;i<=10 ;i++)
	{
	printf ("%d *%d = %d",n,i , (n*i));
		
	}
	return 0 ;
	
}