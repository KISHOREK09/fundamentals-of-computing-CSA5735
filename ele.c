#include<stdio.h>
int main()
{
    int n,arr[100],i,sum;
    printf("ENTER THE RANGE:-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ENTER THE ELEMENT:-");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("\nSUM OF INTEGER IN AN ARRAY=%d",sum);
    printf("\nAVERAGE OF INTEGER IN AN ARRAY=%d",sum/n);
}