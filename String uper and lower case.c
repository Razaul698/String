#include<stdio.h>
#include<string.h>
int main()
{
  char str1[20] = "Bangladesh";

  printf("Original Case = %s\n",&str1);


  strupr(str1);
  printf("UperCase = %s\n",&str1);

  strlwr(str1);
  printf("LowerCase = %s\n",&str1);
}


