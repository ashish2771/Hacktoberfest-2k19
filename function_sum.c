#include<stdio.h>
int sum(int x, int y);
int main()
{
    int a,b,c;
    printf("enter first number\n");
    scanf("%d",&a);
    printf("enter second number\n");
    scanf("%d",&b);
    c = sum(a,b);
    printf("%d\n",c);
}
int sum(int x, int y)
{
    int i;
    i = x + y;
    return i;
}