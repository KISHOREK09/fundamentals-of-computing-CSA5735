#include<stdio.h>
int main()
{
    int i;
    printf("ENTER THE INTEGER:-");
    scanf("%d",&i);
    if(i%2==0)
        {
        printf("%d NUMBER IS EVEN",i);
        }
    else
        {
            printf("%d NUMBER IS ODD",i);
        }
}