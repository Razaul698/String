#include<stdio.h>
int main()
{
    char s1[12];
    printf("Enter Any Name : ");
    gets(s1);

    printf("Full Name = %s\n", &s1);

    return 0;
}
