#include<stdio.h>
int main()
{
    int i,fact,t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        fact=1;
        for(i=n;i>=1;i--)
        {
            fact=fact*i;

        }
        printf("%d\n",fact);
    }
}
