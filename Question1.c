#include<stdio.h>
void printN(int);
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("natural number from 1 to %d are \n",n);
    printN(n);
    printf("\n");
    return 0;
}
void printN(int n)
{
    if(n>0)
    {
        printN(n-1);
        printf("%d",n);
    }
}