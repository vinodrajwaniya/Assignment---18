#include<stdio.h>
#include<string.h>

int length(char a[])
{
    int i=0,count=0;
    while (a[i]!='\0')
    {
        i++;
        count++;
    }
    printf("length of the string is %d",(count-1));
}
int main()
{
    char a[100];
    printf("Enter an name ");
    fflush(stdin);
    fgets(a,100,stdin);
    return length(a);
}