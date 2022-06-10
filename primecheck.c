#include<stdio.h>
#include<math.h>
int main()
{
    int n,flag=1;
   scanf("%d",&n);
   if(n==2)
        flag=1;
    else if(n%2==0 || n==1 || n==0)
        flag=0;
    else
    {
        for(int i=3;i<(n/2);i++)
    {
        if(n%i==0)
            {flag=0;
            break;}
    }
    }
    if(flag==1)
    {printf("prime");}
    else
    {printf("not prime");}
    return 0;
}

