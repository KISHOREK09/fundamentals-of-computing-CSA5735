#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i;
    printf("ENTER THE NTH VALUES:-");
    scanf("%d",&n);
    printf("%d",a);
    printf("\n%d",b);
    printf("\n%d",a+b);
    
    for(i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("\n%d",c);
    }
}