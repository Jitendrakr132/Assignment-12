#include<stdio.h>
int printN(int );
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printN(n);
    return 0;
}
int printN(int n)
{
    if(n>=1)
    printf("%d ",n);
    printN(n-1);
}
