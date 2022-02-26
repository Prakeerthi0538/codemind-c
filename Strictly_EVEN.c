#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int a[size],i,count=0;
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<size;i++)
    {
        if(a[i]%2==0 && i%2!=0)
        {
            count++;
        }
    }
   if(count==0)
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
}