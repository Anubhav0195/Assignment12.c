#include<stdio.h>
void oddN(int);
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("First %d odd natural number are\n",n);
    oddN(n);
    return 0;

}
void oddN(int n)
{
    if(n>=1)
    {
        oddN(n-1);
        printf("%d\n",2*n-1);
    }
}