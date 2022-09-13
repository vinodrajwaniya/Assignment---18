#include<stdio.h>
#include<string.h>

void alphanumeric(char a[])
{
    int i=0,word=0,digit=0;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>='a' && a[i]<='z')
            word++;
        if(a[i]>='0' && a[i]<='9')
            digit++;
    }
    if(word>=1 && digit>=1)
        printf("This is alphanumeric");
    else
        printf("This is not alphanumeric");
}

int main()
{
    char a[20];
    printf("Enter an string ");
    fflush(stdin);
    fgets(a,20,stdin);
    (alphanumeric(a));
    return 0;
}