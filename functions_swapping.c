#include<stdio.h>
void swap(int* x, int* y);
int main()
{
    int a,b;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    swap(&a,&b);
}
void swap(int* x , int* y)
{
    int c;
    c = *x;
    *x = *y;
    *y = c;
    printf("the value of a = %d\n",*x);
    printf("the value of b = %d\n",*y);
}