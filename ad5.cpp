#include<stdio.h>
int main()
{
	char ch;
	printf("enter a alphabet");
	scanf("%c",&ch);
	if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
	printf("%c is vowel");
	else
	printf("%c is consonent");
	return 0;
}
