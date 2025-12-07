#include<stdio.h>
int main()
{
    char string1[40] = "My name is ";
    char string2[] = "Razaul Karim";
    int i=0,len=0,j=0;

    while(string1[i]!='\0')
    {
        i++;
        len++;
    }
    while(string2[j]!='\0')
    {
        string1[len+j] = string2[j];
        j++;
    }
printf("Full Name = %s\n",string1);
    return 0;
}
