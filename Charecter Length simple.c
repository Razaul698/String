#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Razaul Karim";
    int i,len=0;

    while(s1[i]!='\0')
    {
        i++;
        len++;
    }

    printf("Length : %d\n",len);
}
