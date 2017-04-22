#include<stdio.h>
int main()
{
char *a;
int i,len,flag=0;
printf("enter str:");
gets(a)
len=strlen(a);
for(i=0;i<len;i++)
{
if(a[i]==a[len-i-1]
flag=flag+1;
	}
	if(flag==len)
	             printf("\npalindrome"); 
               else
	             printf("\nnot a palindrome");
return 0;
}
