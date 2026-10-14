#include<stdio.h>
int sum(int n);
void main()
{
    int n,s;
    scanf("%d",&n);
    s=sum(n);
    printf("%d",s);
}


int sum(int n)
{

  if (n==0)
            return 1;
        else
            return n+sum(n-1);
    }

