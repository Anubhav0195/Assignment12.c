#include<stdio.h>
int decimal_binary(int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Decimal(%d)=Binary(%d)\n",n,decimal_binary(n));

}
int decimal_binary(int n)
{
    if(n==0)
    {
         return 0;
    }
    else
    return((n%2)+10*decimal_binary(n/2));
}