//wap to print the n even natural number in reverse order
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
}