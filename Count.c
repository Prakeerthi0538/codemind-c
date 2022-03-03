#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],count1=0,count2=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            count1++;
        }
        else if(a[i]%2!=0)
        {
            count2++;
        }
    }
    printf("%d %d",count1,count2);
    
}