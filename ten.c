#include<stdio.h>
int main()
{
    int n,i,t,s=0,a,b;
    printf("ENTER THE NUMBER:-");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        a=t%10;
        b=a*a*a;
        s+=b;
        t=t/10;

    }
   if(s==n)
   {
    printf("%d IS ARMSTRONG NUMBER",s);
   }
   else{
    printf("not an armstrong number");
   }

}