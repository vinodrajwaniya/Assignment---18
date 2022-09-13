#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,freq[150]={0};
    printf("Enter a string ");
    fflush(stdin);
    fgets(a,100,stdin);
    while(a[i]!= '\0')
    {   
        freq[a[i++]]++;
    }
    for(i=0; i<150; i++)
    {
        if(freq[i]!='\0')
            printf("%c ==> %d\n",i,freq[i]);
    }
    return 0;
}
