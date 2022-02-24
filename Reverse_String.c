#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
	int len=0,i,j,t;
	for(i=0;str[i]!=NULL;i++)
	{
		len++;
	}
	i=0;
	j=len-1;
	while(i<j)
	{
		t=str[j];
		str[j]=str[i];
		str[i]=t;
		i++;
		j--;
    }	
    printf("%s",str);
 return 0;
}
