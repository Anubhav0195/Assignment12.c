#include<stdio.h>
void oddN(int);
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("First %d odd number in reverse order are\n",n);
    oddN(n);
    return 0;
}
void oddN(int n)
{
    if(n>=1)
    {
        printf("%d\n",2*n-1);
        oddN(n-1);
    }
}