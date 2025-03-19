/*(Day8) (6/3/25)
Assignment-38:write a c program to print 
     1
    23
   456
  78910*/
  #include<stdio.h>
  int main(){
   int i,j,k,n=1;
   for(i=1;i<=4;i++){
    for(k=1;k<=(4-i);k++){
    printf(" ");
	}
	for(j=1;j<=i;j++){
	printf("%d",n);
	n++;
	}
	printf("\n");
   }	
   return 0 ;
  }
