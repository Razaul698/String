#include<stdio.h>
#include<string.h>
int main()
{
  char str1[20] = "Bangladesh";
  char str2[20] = "India";
  char temp[20];

  printf("befor\n");
    printf("Strint 1 = %s\n",str1);

  printf("Strint 2 = %s\n",str2);

  strcpy(temp,str1);
  strcpy(str1,str2);
  strcpy(str2,temp);

  printf("After\n");
  printf("Strint 1 = %s\n",str1);
  printf("Strint 2 = %s\n",str2);


    return 0;
}

