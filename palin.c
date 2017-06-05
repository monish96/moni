#include<stdio.h>
int main()
{
char *a;
int i,l,flag=0;
printf("enter the string:");
gets(a)
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]==a[l-i-1])
flag=flag+1;
	}
	if(flag==l)
	             printf("\npalindrome"); 
               else
	             printf("\nnot a palindrome");
return 0;
}
