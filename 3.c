#include<stdio.h>
#include<string.h>

int main()
{
    char a[2][20];
    int i=0;
    printf("Enter two string ");
    fflush(stdin);
    for(i=0;i<2;i++)
        gets(a[i]);
        
    i=0;
    i=strcmp(a[i],a[i+1]);
    if(i==0)
        printf("String are same");
    else
        printf("String are not same ");
    return 0;
}