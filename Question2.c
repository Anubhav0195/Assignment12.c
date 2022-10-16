#include<stdio.h>
void printN(int);
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Natural number from n to %d\n",n);
    printN(n);
    printf("\n");
    return 0;
}
void printN(int n)
{
    if(n>0)
    {
        printf("%d",n);
        printN(n-1);
        printf("\n");
    }
}