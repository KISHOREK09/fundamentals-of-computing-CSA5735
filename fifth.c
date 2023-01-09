#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("ENTER THE N TH VALUE:-");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("\nSUM=%d",sum);
}