#include<stdio.h>
int main()
{
    int d1;
    printf("ENTER THE DECIMAL NUMBER:-");
    if(scanf("%d",&d1))
    {
        printf("\nDECIMAL NUMBER-->%d",d1);
        printf("\n OCTAL NUMBER-->%o",d1);
    }
    else{
        printf("INVALID");
    }

}