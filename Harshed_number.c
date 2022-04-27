#include<stdio.h>
int main()
{
    int n,m,i=0,sum=0;
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        i=n%10;
        sum=sum+i;
        n=n/10;
    }

    if(m%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}