#include<stdio.h>
#include<math.h>
int main()
{ 
    printf("\nBINARY OPERATIONS");
    printf("\n1.BINARY ADDITION.");
    printf("\n2.BINARY SUBRACTIONS.");
    int ch;
    printf("\nENTER YOUR CHOICE:-");
    scanf("%d",&ch);
    if(ch==1)
    {
        int b1,b2,nb1=0,nb2=0,r,ans,n=0,j;
        printf("\nBINARY ADDITION\n");
        printf("ENTER THE BINARY 1:-");
        scanf("%d",&b1);
        printf("ENTER THE BINARY 2:-");
        scanf("%d",&b2);
        while(b1!=0)
        {
            r=b1%10;
            nb1+=r*pow(2,n);
            b1=b1/10;
            n++;
        }
        
        n=0;
        while(b2!=0)
        {
            r=b2%10;
            nb2+=r*pow(2,n);
            b2=b2/10;
            n++;
        }
        ans=nb1+nb2;
        int nb[100],i=0;
        while(ans!=0)
        {
            nb[i]=ans%2;
            ans=ans/2;
            i++;
        }
        printf("BINARY ADDITION =");
        for(j=i;j>=0;j--)
        {
            printf("%d",nb[j]);
        }

    }
    else if(ch==2)
    {
        int b1,b2,nb1=0,nb2=0,r,ans,n=0,j;
        printf("\nBINARY SUBTRACTION\n");
        printf("ENTER THE BINARY 1:-");
        scanf("%d",&b1);
        printf("ENTER THE BINARY 2:-");
        scanf("%d",&b2);
        while(b1!=0)
        {
            r=b1%10;
            nb1+=r*pow(2,n);
            b1=b1/10;
            n++;
        }
        
        n=0;
        while(b2!=0)
        {
            r=b2%10;
            nb2+=r*pow(2,n);
            b2=b2/10;
            n++;
        }
        ans=nb1-nb2;
        int nb[100],i=0;
        while(ans!=0)
        {
            nb[i]=ans%2;
            ans=ans/2;
            i++;
        }
        printf("BINARY SUBTRACTION =");
        for(j=i;j>=0;j--)
        {
            printf("%d",nb[j]);
        }
    }
}
