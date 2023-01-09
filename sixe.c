#include<stdio.h>
int main()
{
    int n,s,t;
    printf("ENTER THE NUMBER:-");
    scanf("%d",&n);
    printf("ENTER THE SECOND NUMBER  :-");
    scanf("%d",&s);
    t=n;
    n=s;
    s=t;
    printf("\n-----AFTER SWAP-------\n");
    printf("%d",n);
    printf("\n%d",s);

}