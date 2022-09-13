#include<stdio.h>
#include<string.h>

void swap(char a[], int i, int j)
{
    char temp;
    while(i<=j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}

int main()
{
    char a[100];
    int i=0,j=strlen(a)-1;
    printf("Enter an string ");
    fflush(stdin);
    fgets(a,100,stdin);
    swap(a,i,j);
    printf("reverse string:- %s",a);
    return 0;
}