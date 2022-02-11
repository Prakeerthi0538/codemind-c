#include<stdio.h>
int reverse(int x)
{
    int rev=0,r;
    while(x)
    {
      r=x%10;
      rev=rev*10+r;
      x=x/10;
    }
    return rev;
}
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i==reverse(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}