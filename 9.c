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
    int i=0, start=0, end=0, flag=0;
    printf("Enter an string ");
    fflush(stdin);
    fgets(a,100,stdin);
    while (a[i]!='\0')
    {
        while(a[i]!=' ')
        {
            if(a[i]=='\0')
            {
                flag= 1;
                break;
            }
            end++;
            i++;
        }
        swap(a,start,end-1);
            if(flag==1)
            break;
            start=end++;
            i++;
    }
    swap(a,0,i-1);
    printf("%s",a);
        return 0;
}