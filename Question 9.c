#include<stdio.h>
int binr(int );
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    binr(n);
    return 0;
}
int binr(int n)
{
    if(n==1)
        printf("1");
    else
    {
        binr(n/8);
    printf("%d",n%8);
    }
}

