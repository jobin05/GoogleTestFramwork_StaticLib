#include "add.hpp"
#include <stdio.h>
int main()
{
    int a=0,b=0;
    printf("Enter two values :");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d\n",sum(a,b));
}