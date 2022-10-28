//wap to print the n even natural number
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
}