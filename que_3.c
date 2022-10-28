//wap to print the first n natural number in reverse order
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        printf("%d\n",i);
    }
}