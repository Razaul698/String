#include<stdio.h>
#include<string.h>
int main()
{
   char source[]="C Programing";
   char target[20];

   strcpy(target,source);
   printf("Source Code = %s\n", &source);
   printf("Target Code = %s\n", &target);
}
