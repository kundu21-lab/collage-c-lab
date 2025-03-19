/* day8(6/03/25)
Assingment 40: write a c program to print the following pattern 
         *
        * *
       * * *
	  * * * *
	  */    


#include<stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<=4;i++){
	for(k=1;k<=(4-i);k++){
	printf(" ");
	}
	for(j=1;j<=i;j++){
	printf(" *");
	}
	printf("\n");
	}
	return 0 ;
}
