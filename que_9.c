//wap to print square the first n natural number
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",i*i*i);
    }
}