#include<stdio.h>

void lowerrcase(char a[])
{
    int i=0;
    while (a[i]!='\0')
    {
        if(a[i]>= 'A' && a[i]<= 'Z' )
        {   
            a[i]=a[i]+32; 
        }i++;
    }
}
int main()
{
    char a[100];
    printf("Enter an name ");
    fflush(stdin);
    fgets(a,100,stdin);
    lowerrcase(a);
    printf("lowercase word:- %s",a);
    return 0;
}