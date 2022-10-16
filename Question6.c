#include<stdio.h>
void evenN(int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("First %d even natural number in reverse order are\n",n);
    evenN(n);
    return 0;
}
void evenN(int n)
{
    if(n>=1)
    {
        printf("%d\n7
        ",2*n);
        evenN(n-1);
    }
}