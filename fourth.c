#include<stdio.h>
#include<string.h>
int main()
{
  char str[100],str1[100],ch;
int m,k=0,c=0,j=0;
  printf("\n Enter the string ");
  gets(str);
  m=strlen(str);
for(int i=0;i<m;i=i+c)
{
  c=0;
  while(str[i]==str[j])
  {
    c++;
    j++;
  }
 str1[k]=str[i];
 printf("%c",str1[k]);
  k++;
  str1[k]=c+48;
printf("%c",str1[k]);
  k++;
}
}
