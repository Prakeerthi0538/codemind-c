#include<stdio.h>
main()
{
    int a,n=1,p=1,s=0,r;
    scanf("%d",&a);
    while(a>0)
    {
        n=a%10;
        a=a/10;
        p*=n;
        s+=n;
    }
    r=p-s;
    printf("%d",r);
}