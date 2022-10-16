#include<stdio.h>
void evenN(int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("First %d even natural numbers are\n",n);
    evenN(n);
    return 0;
}
void evenN(int n)
{
    if(n>=1)
    {
        evenN(n-1);
        printf("%d\n",2*n);
    }
}