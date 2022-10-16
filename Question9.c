#include<stdio.h>
void binary_octal(int);
int main()
{
    int decinum;
    printf("Enter a decimal number:");
    scanf("%d",&decinum);
    printf("Octal value is ");
    binary_octal(decinum);
}
void binary_octal(int decinum)
{
    if(decinum > 0)
    {
        binary_octal(decinum/8);
        printf("%d",decinum % 8);
    }
}