#include<stdio.h>
int main()
{
  char a;
  printf("Enter a character\n");
  scanf("%c",&a);
  if(((a>=65)&&(a<=90))||((a>=97)&&(a<=122)))
  {
  if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
  {
    printf("Vowel");
  } 
  else 
  {
    printf("Consonant");
  } 
    else
    {
      printf("Not an alphabet");
      }
    }
  return 0;
}
