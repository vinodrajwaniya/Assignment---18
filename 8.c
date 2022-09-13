#include<stdio.h>
#include<string.h>

void count(char a[])
{
    int i=0,count1=1;
    for(i=0;i<strlen(a)-2;i++)
    {
        if(a[i]==' ' && a[i+1]!=' ')
            count1++;
    }
    printf("Total words are = %d", count1);
}

int main()
{
    char a[50];
    printf("Enter an string ");
    fflush(stdin);
    fgets(a,50,stdin);
    count(a);
    return 0;
}