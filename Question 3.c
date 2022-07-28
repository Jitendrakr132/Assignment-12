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
    if(n>1)
        printN(n-1);
    printf("%d ",2*n-1);
}

