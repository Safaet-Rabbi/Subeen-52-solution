/*#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
      int a,b,c,temp;
      scanf("%d %d %d",&a,&b,&c);
      if(a>b)
      {
          temp=a;
          a=b;
          b=temp;
      }
      if(a>c)
      {
          temp=a;
          a=c;
          c=temp;
      }
      if(b>c)
      {
          temp=b;
          b=c;
          c=temp;
      }
      printf("Case %d: %d %d %d\n",i,a,b,c);
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int i,t,a,b,c,temp;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(a>c)
        {
             temp=a;
            a=c;
            c=temp;

        }
        if(b>c)
        {
             temp=b;
            b=c;
            c=temp;
        }
        printf("case:%d= %d %d %d\n",i,a,b,c);
    }
}
