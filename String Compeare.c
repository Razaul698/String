#include<stdio.h>
#include<string.h>
int main()
{
    char stri1[]="Razaul Karim";
    char stri2[]="Razaul Karim";

    int d = strcmp(stri1,stri2);

    if(d==0){

        printf("String Are Equal\n");
    }
    else
        printf("String Are Not Equal\n");




    return 0;
}

