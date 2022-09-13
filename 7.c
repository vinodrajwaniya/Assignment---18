#include<stdio.h>
#include<string.h>

int main()
{
    char a[30];
    int i=0,j=0;
    printf("Enter a string ");
    fflush(stdin);
    fgets(a,30,stdin);  
    for(i=0;i<strlen(a)-2;i++)
        a[i];
       for(j=strlen(a)-2;j>0;j--)
            a[j];
    i=0;
    j=strlen(a)-2;
    while(i<=j)
    {
         if(a[i]!=a[j])
             break;
         i++;
         j--;
    }
    if(i>j)
        printf("This is palindrome");
    else
        printf("This is not palindrome");

    return 0;
}