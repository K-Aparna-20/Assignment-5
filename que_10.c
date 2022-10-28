//wap to print table of n natural number
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        printf("%d\n",n*i);
    }
}