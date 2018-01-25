#include<stdio.h>
int main()
{
 char ch;
 printf("Enter a single character:\n");
 scanf("%c",&ch);
 if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
 {
  printf("The given Character '%c' is a Vowel\n ",ch);
 }
 else
 {
  printf("The given Character '%c' is a Consonant\n ",ch);
 }

return 0;
}
