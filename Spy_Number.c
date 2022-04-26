#include<stdio.h>
int main()
{
    int a,m,sum=0,pro=1;
    scanf("%d",&a);
    while(a>0)
    {
        m=a%10;
        sum=sum+m;
        pro=pro*m;
        a=a/10;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}