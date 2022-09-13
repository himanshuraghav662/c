#include <stdio.h>

int main()
{
    int a,n=1;
    printf("enter a nuber for factorial\n");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        n=n*i;
    }
printf("factorial is%d",n);
    return 0;
}
