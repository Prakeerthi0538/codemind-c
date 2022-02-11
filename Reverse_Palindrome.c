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
    int a;
    scanf("%d",&a);
    do
    {
        a=a+reverse(a);
    }
    while(a!=reverse(a));
    {
        printf("%d",a);
    }
    return 0;
}