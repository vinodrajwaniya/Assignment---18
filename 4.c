#include<stdio.h>

void uppercase(char a[])
{
    int i=0;
    while (a[i]!='\0')
    {
        if(a[i]>= 'a' && a[i]<= 'z' )
        {   
            a[i]=a[i]-32; 
        }i++;
    }
}
int main()
{
    char a[100];
    printf("Enter an name ");
    fflush(stdin);
    fgets(a,100,stdin);
    uppercase(a);
    printf("Uppercase word:- %s",a);
    return 0;
}