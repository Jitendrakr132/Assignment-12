#include<stdio.h>
int revsN(int );
int main()
{
    int n,a;
    printf("Enter the number");
    scanf("%d",&n);
    a=revsN(n);
    printf("%d Reverse numb %d",a,n);
    return 0;
}
int revsN(int n)
{
   static int r;
    if(n==0)
        return r;
        r=r*10+(n%10);
        revsN(n/10);

}
