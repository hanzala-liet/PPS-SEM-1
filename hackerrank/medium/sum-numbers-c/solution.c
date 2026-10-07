#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n1,n2,d1;
	float f1,f2,s1,s2,d2;
    scanf("%d%d",&n1,&n2);
    scanf("%f%f",&f1,&f2);
    s1=n1+n2;
    d1=n1-n2;
    s2=f1+f2;
    d2=f1-f2;
    printf("%d %d\n",(int)s1,d1);
    printf("%.1f %.1f",s2,d2);
    return 0;
}
