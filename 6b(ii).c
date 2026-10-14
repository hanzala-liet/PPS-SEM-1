#include<stdio.h>
int fact(int n);
void main()
{
    int n,s;
    scanf("%d",&n);
    s=fact(n);
    printf("%d",s);
}


int fact(int n)
{

  if (n==0||n==1)
            return 1;
        else
            return n*fact(n-1);
    }

